#include <iostream>
using namespace std;

class PilaConArreglo
{
private:
    int capacidad_maxima;
    int puntero_superior;

public:
    int *arreglo;
    PilaConArreglo(int capacidad_inicial = 10) // Capacidad inicial predeterminada
    {
        capacidad_maxima = capacidad_inicial;
        arreglo = new int[capacidad_maxima];
        puntero_superior = -1; // Pila vacía al inicio
    }

    ~PilaConArreglo()
    {
        delete[] arreglo;
    }

    bool estaVacia()
    {
        return puntero_superior == -1;
    }

    void push(int elemento)
    {
        if (puntero_superior == capacidad_maxima - 1)
        {
            // Si la pila está llena, realocamos el arreglo con el doble de capacidad
            capacidad_maxima *= 2;
            int *nuevo_arreglo = new int[capacidad_maxima];
            for (int i = 0; i <= puntero_superior; i++)
            {
                nuevo_arreglo[i] = arreglo[i];
            }
            delete[] arreglo;
            arreglo = nuevo_arreglo;
        }

        puntero_superior++;
        arreglo[puntero_superior] = elemento;
    }

    int pop()
    {
        if (!estaVacia())
        {
            int elemento = arreglo[puntero_superior];
            puntero_superior--;
            return elemento;
        }
        else
        {
            cout << "La pila está vacía. No se puede realizar pop." << endl;
            return -1; // Valor predeterminado en caso de pila vacía
        }
    }

    int peek()
    {
        if (!estaVacia())
        {
            return arreglo[puntero_superior];
        }
        else
        {
            cout << "La pila está vacía. No hay elementos para ver." << endl;
            return -1; // Valor predeterminado en caso de pila vacía
        }
    }

    int tamano()
    {
        return puntero_superior + 1;
    }
};

int main()
{
    int capacidad;
    cout << "Ingrese la capacidad maxima de la pila: ";
    cin >> capacidad;

    PilaConArreglo miPila(capacidad);

    while (true)
    {
        int opcion;
        cout << "1. Push (Agregar)  2. Pop (Eliminar) 3. Peek o Top (Superior)  4. Tamano (getSize)  5. Mostrar  6. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            int elemento;
            cout << "Ingrese un elemento: ";
            cin >> elemento;
            miPila.push(elemento);
            break;
        case 2:
            if (!miPila.estaVacia())
            {
                cout << "Elemento retirado: " << miPila.pop() << endl;
            }
            else
            {
                cout << "La pila está vacía. No se puede realizar pop." << endl;
            }
            break;
        case 3:
            if (!miPila.estaVacia())
            {
                cout << "Elemento en la parte superior de la pila: " << miPila.peek() << endl;
            }
            else
            {
                cout << "La pila está vacía. No hay elementos para ver." << endl;
            }
            break;
        case 4:
            cout << "Tamaño de la pila: " << miPila.tamano() << endl;
            break;
        case 5:
            if (!miPila.estaVacia())
            {
                cout << "Pila:" << endl;
                cout << "Indice\tValor" << endl;
                for (int i = 0; i < miPila.tamano(); i++)
                {
                    cout << i << "\t" << miPila.arreglo[i] << endl;
                }
            }
            else
            {
                cout << "La pila está vacía." << endl;
            }
            break;
        case 6:
            return 0;
        default:
            cout << "Opción inválida." << endl;
        }
    }

    return 0;
}
