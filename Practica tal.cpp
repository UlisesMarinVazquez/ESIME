
/* Realizar un programa en lenguaje C++ con POO que almacene un conjunto de artículos que tendrá en la clase Artículo (los atributos: precio y código) y dicha clase mencionada le herederá a la clase Almacen que contendrá la cantidad existente de cada uno de los artículos. 

El programa deberá permitir las acciones de insertar, buscar e imprimir todos los datos para todos los objetos. */

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Articulo 
{
    private:
    string codigo;
    float precio;
    
    public:
    Articulo(string codigo, float precio) 
    {
        this->codigo = codigo;
        this->precio = precio;
    }

    string getCodigo() const 
    {
        return codigo;
    }

    float getPrecio() const 
    {
        return precio;
    }
};


class Almacen 
{
    private:
    Articulo articulo;
    int cantidad;
    
    public:
    Almacen(Articulo articulo, int cantidad) : articulo(articulo) 
    {
        this->cantidad = cantidad;
    }

    int getCantidad() const 
    {
        return cantidad;
    }

    void setCantidad(int cantidad) 
    {
        this->cantidad = cantidad;
    }

    Articulo getArticulo() const 
    {
        return articulo;
    }
};

class Inventario 
{
    private:
    vector<Almacen> articulos;
    
    public:
    void insertar(Almacen articulo) 
    {
        articulos.push_back(articulo);
    }

 

    void imprimir() 
    {
        for (int i = 0; i < articulos.size(); i++) 
        {
            cout << "\ncodigo: " << articulos[i].getArticulo().getCodigo() << endl;
            cout << "Precio: $" << articulos[i].getArticulo().getPrecio() << endl;
            cout << "Cantidad existente: " << articulos[i].getCantidad() << endl;
            cout << endl;
        }
    }
    
    void buscar()
    {
        string codigo;
        float precio;
        int opcion;
        char salir;
        
        do{
            cout << "\nBuscar articulo por:\n";
            cout << "\t1. Codigo\n";
            cout << "\t2. Precio\n";
            cout << "\t3. Salir\n";
            cout << "\nOpcion: ";
            cin >> opcion;

            switch (opcion)
            {
                case 1:
                cout << "Ingrese el codigo del articulo: ";
                cin >> codigo;

                for (int i = 0; i < articulos.size(); i++) 
                {
                    if (articulos[i].getArticulo().getCodigo() == codigo) 
                    {
                        cout << "\nLos datos del articulo\n\n\tcodigo: " << articulos[i].getArticulo().getCodigo() << endl;
                        cout << "\tPrecio: $" << articulos[i].getArticulo().getPrecio() << endl;
                        cout << "\tCantidad existente: " << articulos[i].getCantidad() << endl;
                    }else
                    {
                         cout << "\nIntente de nuevo. No se encuentra ningun articulo con ese codigo " << codigo << endl;
                    } 
                }break;
                
                case 2:
                cout << "Ingrese el precio del articulo: $";
                cin>>precio;
                
                for (int i = 0; i < articulos.size(); i++) 
                {
                    if (articulos[i].getArticulo().getPrecio() == precio) 
                    {
                        cout << "\nEl articulo buscado es \n\n\tcodigo: " << articulos[i].getArticulo().getCodigo() << endl;
                        cout << "\tPrecio: $" << articulos[i].getArticulo().getPrecio() << endl;
                        cout << "\tCantidad existente: " << articulos[i].getCantidad() << endl;
                    }else
                    {
                         cout << "\nIntente de nuevo. No se encuentra ningun articulo con ese codigo " << codigo << endl;
                    } 
                    
                }break;

                case 3: 
                break;
              



                default:
                cout << "Opcion invalida. Intente de nuevo.\n";
                break;
                
            }
            cout<<"\nDesea efectuar otra operacion?\n";
            cout<<"Presione 's' para continuar con otra operacion o ingrese otro caracter para finalizar el programa\n";
            cin>>salir;

        }while (salir == 's');
        cout << "Saliendo de la busqueda de articulos...\n";
     }
};

int main() 
{
    Inventario inventario;

    string codigo;
    float precio;
    int cantidad;

    cout << "Ingrese el codigo del articulo: ";
    cin >> codigo;

    cout << "Ingrese el precio del articulo: $";
    cin >> precio;

    Articulo articulo(codigo, precio);

    cout << "Ingrese la cantidad de articulos: ";
    cin >> cantidad;

    Almacen almacen(articulo, cantidad);

    inventario.insertar(almacen);
    inventario.imprimir();
    inventario.buscar();

    return 0;
};

