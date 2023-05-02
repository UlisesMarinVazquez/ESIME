

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class Articulo 
{
     protected:
     int codigo;
     float precio;
     string nombre;

     public:
     Articulo() 
      {
         codigo=0; 
		 precio=0.0;
		 nombre="";
       }

     Articulo(int c, float p,string n) 
        {
            codigo = c;
            precio = p;
            nombre = n;  
        }
};

class Almacen : private Articulo 
{
    private:
    int cantidad;
    
    public:
    Almacen() : Articulo() 
    {
        cantidad = 0;
    }

    Almacen(int codigo, float precio, int cantidad, string nombre) : Articulo(codigo, precio,nombre) 
    {
        cantidad = cantidad;
    }

    void ingresarDatos() 
    {
    	cout << "Ingrese el nombre del articulo: ";
        cin >> nombre;
		cout << "Generando codigo aleatorio... " << endl;
		codigo = rand() % 1000 + 1;
		cout << "Generando precio aleatorio... " << endl;
		precio = (float)(rand() % 1000 + 1) / 10.0;
		cout << "Ingrese la cantidad en existencia: ";
		cin >> cantidad;
    }

    int getCodigo() 
    {
        return codigo;
    }

    string getNombre() 
    { 
	   return nombre; 
	}

    float getPrecio() 
    {
        return precio;
    }

    int getCantidad() 
    {
        return cantidad;
    }
};

int main() 
{
    const int MAX_ARTICULOS = 100;
    Almacen almacen[MAX_ARTICULOS];
    int numArticulos = 0;

    while (true) 
    {
        int opcion;
        cout << "MENU" << endl;
        cout << "1. Insertar un nuevo articulo" << endl;
        cout << "2. Buscar un articulo por codigo" << endl;
        cout << "3. Imprimir todos los articulos" << endl;
        cout << "4. Salir" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        if (opcion == 1) 
        {
            if (numArticulos < MAX_ARTICULOS) 
            {
                almacen[numArticulos].ingresarDatos();
                numArticulos++;
            } else 
            {
                cout << "No se pueden agregar mas articulos." << endl;
            }
        } else if (opcion == 2) 
        {
            cout << "Ingrese el codigo del articulo que desea buscar: ";
            int codigoBuscado;
            cin >> codigoBuscado;
            bool encontrado = false;

            for (int i = 0; i < numArticulos; i++) 
            {
                if (almacen[i].getCodigo() == codigoBuscado) 
                {
                    encontrado = true;
                    cout << "Nombre: " << almacen[i].getNombre() << endl;
                    cout << "Codigo: " << almacen[i].getCodigo() << endl;
                    cout << "Precio: " << almacen[i].getPrecio() << endl;
                    cout << "Cantidad: " << almacen[i].getCantidad() << endl;
                    break;
                }
            }
            if (!encontrado) 
            {
                cout << "No se encontro ningun articulo con el codigo especificado." << endl;
            }
        } else if (opcion == 3) 
        {
        	cout << "Todos los articulos agregados exitosamente!" << endl;
        	cout << "Codigo\t\tNombre\t\tPrecio\t\tCantidad Existente" << endl;
			cout << "--------------------------------------------------------" << endl;

			for(int i = 0; i < numArticulos; i++) 
            {
			cout << almacen[i].getCodigo() << "\t\t" << almacen[i].getNombre() << "\t\t" << almacen[i].getPrecio() << "\t\t" << almacen[i].getCantidad() << endl;
			}

			cout << "--------------------------------------------------------" << endl;

        } else if (opcion == 4) 
        {
        	cout << "Fin" << endl;
            break;
        }
   }
}
