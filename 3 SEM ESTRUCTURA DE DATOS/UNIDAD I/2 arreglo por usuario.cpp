#include <iostream>

using namespace std;

void arrayPorUsuario(int[], int);

int main()
{
    int b;
    cout << "Ingresa la dimension del arreglo: \n";
    cin >> b;
    int array[b];
    arrayPorUsuario(array, b);
    return 0;
}

void arrayPorUsuario(int arr[], int size)
{
    int a;
    cout << "Ingresa los elementos para el arreglo: \n";
    for (int i = 0; i < size; i++)
    {
        cin >> a;
        arr[i] = a;
    }

    cout << "Los elementos son: \n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
