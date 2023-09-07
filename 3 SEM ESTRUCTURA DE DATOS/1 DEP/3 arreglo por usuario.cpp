#include <iostream>

using namespace std;

int main()
{

    int array[3];
    int a;

    cout << "Ingresa los elementos para el arreglo: \n";

    for (int i = 0; i < 3; i++)
    {
        cin >> a;
        array[i] = a;
    }

    cout << "Los elementos son: \n";
    for (int i = 0; i < 3; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}