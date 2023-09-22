
#include <iostream>
#include <stdlib.h> /* new */

using namespace std;

struct Nodo // Estructura que contiene un campo con un entero "dato" y un puntero "*p" tipo Nodo
{
    int dato;
    Nodo *p;
};

void agregarPila(Nodo *&, int);

int main()
{

    Nodo *pila = NULL;

    int n1, n2;
    cout << "Ingresa un numero entero a la pila: ";
    cin >> n1;
    agregarPila(pila, n1);
    cout << "\nIngresa un numero entero a la pila: ";
    cin >> n2;
    agregarPila(pila, n2);

    return 0;
}

void agregarPila(Nodo *&pila, int n)
{
    Nodo *nuevoNodo = new Nodo(); // 1. crear el espacio en memoria para almacenar un nodo
    nuevoNodo->dato = n;          // 2. Cargar el valor dentro del nodo
    nuevoNodo->p = pila;          // 3. Cargar el puntero pila dentro del nodo *p
    pila = nuevoNodo;             // 4. Asignar el nuevo nodo a pila
    cout << "El dato " << n << " fue agregado correctamente.\n"
         << endl;
}
