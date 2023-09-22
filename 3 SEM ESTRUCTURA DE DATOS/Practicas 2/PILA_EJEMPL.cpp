#include <iostream>

using namespace std;

template <typename T>
class Pila
{
private:
    class Nodo
    {
    public:
        T valor;
        Nodo *pSiguiente;

        Nodo(T _valor, Nodo *_pSiguiente = nullptr) : valor(_valor), pSiguiente(_pSiguiente) {}
    };

    Nodo *pCabeza;
    int tamano;

public:
    Pila() : pCabeza(nullptr), tamano(0) {}

    int getTamano() { return tamano; }
    bool esVacia() { return (pCabeza == nullptr); }

    void apilar(T valor)
    {
        Nodo *nuevoNodo = new Nodo(valor, pCabeza);
        pCabeza = nuevoNodo;
        tamano++;
    }

    void retirar()
    {
        if (esVacia())
        {
            throw runtime_error("La pila está vacía");
        }
        Nodo *pNodo = pCabeza;
        pCabeza = pCabeza->pSiguiente;
        delete pNodo;
        tamano--;
    }

    T cima()
    {
        if (esVacia())
        {
            throw runtime_error("La pila está vacía");
        }
        return pCabeza->valor;
    }
};

int main()
{
    Pila<int> pila;
    pila.apilar(2);
    pila.apilar(5);
    pila.apilar(7);
    cout << pila.cima() << endl;
    pila.retirar();
    cout << pila.cima() << endl;
    pila.retirar();
    cout << pila.cima() << endl;
    pila.retirar();
    cout << pila.cima() << endl;
    return 0;
}
