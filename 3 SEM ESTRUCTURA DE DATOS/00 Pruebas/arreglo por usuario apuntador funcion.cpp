#include <iostream>

using namespace std;

void crearArreglo(int *p);
void imprimirArreglo(int *p);

int main()
{

    int array[3];
    int *p = array;
    crearArreglo(p);
    imprimirArreglo(p);
}

void crearArreglo(int *p)
{
    cout << "Ingresa los 3 elementos para el arreglo: \n";
    int a;
    for (int i = 0; i < 3; i++)
    {
        cin >> a;
        *(p + i) = a;
    }
}

void imprimirArreglo(int *p)
{
    cout << "Los elementos son: \n";

    for (int i = 0; i < 3; i++)
    {
        cout << *(p + i) << " ";
    }
}