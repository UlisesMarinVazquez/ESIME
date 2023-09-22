
#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

struct Nodo
{
    int dato;
    Nodo *s;
} *p, *aux, *u;

void insertar(int dat);
void borrar();
void listar();

int main()
{
    int opc, y;
    do
    {
        cout << "\n1. Insertar";
        cout << "\t2. Borrar";
        cout << "\t3. Listar";
        cout << "\t4. Salir";
        cout << "\n Ingrese opcion: ";
        cin >> opc;
        switch (opc)
        {
        case 1:
            cout << "Ingrese dato: ";
            cin >> y;
            insertar(y);
            cout << "\nDato insertado!!";
            break;
        case 2:
            borrar();
            break;
        case 3:
            listar();
            break;
        case 4:
            exit(1);
        default:
            cout << "\n Opcion no valida!!";
            break;
        }
    } while (opc);

    return 0;
}

void insertar(int dat)
{
    aux = new (Nodo);
    aux->dato = dat;
    if (u)
    {
        u->s = aux;
        aux->s = NULL;
        u = aux;
    }
    else
    {
        p = u = aux;
    }
}

void borrar()
{
    if (p)
    {
        aux = p;
        cout << "\nElimino a " << p->dato;
        p = aux->s;
        delete (aux);
    }
    else
    {
        cout << "\n No hay datos";
    }
}

void listar()
{
    /*  int i; */
    if (!u)
    {
        cout << "\n No hay datos en la cola";
        return;
    }
    aux = p;
    while (aux)
    {
        cout << "\n"
             /* << ++i << " - " */
             << aux->dato;
        aux = aux->s;
    }
}
