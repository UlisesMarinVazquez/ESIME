

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

    for (int i = 0; i < 3; i++)
    {
        cout << "Los elementos son: \n"
             << array[i];
    }

    return 0;
}
