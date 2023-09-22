

#include <iostream>
#include <malloc.h>
#include <cstdlib>
using namespace std;

class pila_con_arreglo
{
private:
    int capacidad_maxima;

    int puntero_superior;

public:
    int *arreglo;
    pila_con_arreglo(int capacidad);
    ~pila_con_arreglo();
    bool estaVacia();
    bool estaLlena();
    void push(int elemento);
    int pop();
    int peek();
    int tamano();
};

pila_con_arreglo::pila_con_arreglo(int capacidad)
{
    /* capacidad_maxima = capacidad; */
    if (capacidad <= 0)
    {
        cout << "La capacidad debe ser mayor que 0" << endl;
        exit(1);
    }
    capacidad_maxima = capacidad;
    arreglo = new int[capacidad_maxima];
    /*  puntero_superior = -1; // Pila vacía al inicio NULL  */
    arreglo = (int *)malloc(capacidad_maxima * sizeof(int));
    puntero_superior = -1; // Pila vacía al inicio
}

pila_con_arreglo::~pila_con_arreglo()
{
    free(arreglo);
}

bool pila_con_arreglo::estaVacia()
{
    return puntero_superior == -1;
}

bool pila_con_arreglo::estaLlena()
{
    return puntero_superior == capacidad_maxima - 1;
}

void pila_con_arreglo::push(int elemento)
{
    if (!estaLlena())
    {
        puntero_superior++;
        arreglo[puntero_superior] = elemento;
    }
    else
    {
        cout << "La pila esta llena. No se puede realizar push." << endl;
    }
}

int pila_con_arreglo::pop()
{
    if (!estaVacia())
    {
        int elemento = arreglo[puntero_superior];
        puntero_superior--;
        return elemento;
    }
    else
    {
        cout << "La pila esta vacia. No se puede realizar pop." << endl;
        return -1; // Valor predeterminado en caso de pila vacía
    }
}

int pila_con_arreglo::peek()
{
    if (!estaVacia())
    {
        return arreglo[puntero_superior];
    }
    else
    {
        cout << "La pila esta vacia. No hay elementos para ver." << endl;
        return -1; // Valor predeterminado en caso de pila vacía
    }
}

int pila_con_arreglo::tamano()
{
    return puntero_superior + 1;
}

int main()
{
    int capacidad = 3;
    /*     cout << "Ingrese la capacidad maxima de la pila: ";
        cin >> capacidad;  */

    pila_con_arreglo miPila(capacidad);

    while (true)
    {
        int opcion;
        cout << "1. Push (Agregar)  2. Pop (Eliminar) 3. Peek o Top (Superior)  4. Tamano (getSize)  5. Mostrar  6. Salir" << endl;
        cout << "Seleccione una opcion: \n";
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
                cout << "La pila esta vacia. No se puede realizar pop." << endl;
            }
            break;

        case 3:
            if (!miPila.estaVacia())
            {
                cout << "Elemento en la parte superior de la pila: " << miPila.peek() << endl;
            }
            else
            {
                cout << "La pila esta vacía. No hay elementos para ver." << endl;
            }
            break;

        case 4:
            cout << "Tamano de la pila: " << miPila.tamano() << endl;
            break;

        case 5:
            if (!miPila.estaVacia())
            {
                cout << "Pila:" << endl;
                cout << "Indice\tValor" << endl;

                for (int i = 0; i <= miPila.tamano() - 1; i++)
                {
                    cout << i << "\t" << miPila.arreglo[i] << endl;
                }
            }
            else
            {
                cout << "La pila esta vacia." << endl;
            }
            break;

        case 6:
            cout << "Fin del programa";
            return 0;

        default:
            cout << "Opcion invalida." << endl;
        }
    }

    return 0;
}
