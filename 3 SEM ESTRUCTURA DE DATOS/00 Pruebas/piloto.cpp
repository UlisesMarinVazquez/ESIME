

#include <iostream>

using namespace std;

int main()
{

    int i, opcion, a, b, c, d, p;
    int n = 0;
    int array[5];

    do
    {
        cout << "ELIGE UNA OPCIÓN: ";
        cout << "1. INSERTAR AL INICIO";
        cout << "2. INSERTAR AL FINAL";
        cout << "3. ELIMINAR AL INICIO";
        cout << "4. ELIMINAR AL FINAL";
        cout << "5. IMPRIMIR";
        cout << "6. ELIMINAR X LUGAR: ";
        cout << "7. BUSQUEDA DE ELEMENTO: \n";
        cin >> opcion;

        while (opcion < 1 && opcion > 8)
        {
            cout << "\n OPCION INVALIDA, REINTENTA \n";
            cin >> opcion;
        }

        switch (opcion)
        {
        case 1:
            if (n > 0 && n < 5)
            {
                cin >> a;
                n++;

                for (int i = n; i > 0; i--)
                {

                    array[i] = array[i - 1];
                }
                array[0] = a;
            }
            else if (n == 0)
            {
                cin >> a;
                array[0] = a;
                n++;
            }
            else
            {
                cout << "No hay espacio";
            }
            cout << "";

            break;

        default:
            break;
        }
    }
}
