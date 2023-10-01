#include <iostream>
#include <cstdlib> // Se usa cstdlib para la función exit()

#define max 40

using namespace std;

struct Cola
{
    int q[max];
    int frente;
    int final;

    void INSERTAR(int elem);
    int ELIMINAR(void);
    void CREAR(void);
    void IMPRIMIR(void);
};

void Cola::CREAR(void)
{
    frente = -1; // Inicializar frente a -1 para indicar Cola vacía
    final = -1;  // Inicializar final a -1 para indicar Cola vacía
    cout << "\n La Cola ha sido creada";
}

void Cola::INSERTAR(int elem)
{
    if (final < max - 1) // Verifica si hay espacio libre
    {
        if (frente == -1) // Si la Cola está vacía, ajusta el frente
            frente = 0;
        final = final + 1;
        q[final] = elem;
    }
    else
    {
        cout << "Cola llena..." << endl;
        exit(1);
    }
}

int Cola::ELIMINAR(void)
{
    int elem;
    if (frente != -1) // Verifica que la Cola no esté vacía
    {
        elem = q[frente];
        if (frente == final) // Si hay un solo elemento
        {
            frente = -1;
            final = -1;
        }
        else
            frente = frente + 1;
    }
    else
    {
        cout << "Cola VACIA" << endl;
        exit(1);
    }
    return elem;
}

void Cola::IMPRIMIR(void)
{
    if (frente == -1)
    {
        cout << "La Cola esta vacia." << endl;
        return;
    }

    for (int i = frente; i <= final; i++)
        cout << q[i] << " ";
    cout << endl;
}

int main()
{

    Cola q1;
    int op, n, e;
    q1.CREAR();

    cout << "Ingresa una opción: ";
    cin >> op;
    switch (op < 1 || op > 4)
    {
    case 1;

        cout << "\nIngresa la cantidad de elementos a introducir a la COLA: ";
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cout << "\nIngrese elemento: ";
            cin >> e;
            q1.INSERTAR(e);
        }

    break;
        case 2;

        default:
        break;
    }

    q1.CREAR();
    cout << "\nCuantos elementos desea introducir a la Cola? ";
    cin >> n;

    cout << "\nLos elementos de la Cola son: ";
    q1.IMPRIMIR();
    q1.ELIMINAR();
    q1.IMPRIMIR();
    return 0;
}
