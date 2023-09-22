#include <iostream>
#include pila.h
using namespace std;

template<typename T>


class Pila{

    class Nodo{

        private:
        T valor;
        Nodo *pSiguiente;


        public:
        Nodo(T_valor, Nodo *pSiguiente = NULL){
            setValor(_valor);
            setSiguiente(_pSiguiente);

        }
        T getValor(){
            return valor;

        }

        void setValor(T &_valor){
            valor=_valor;
            Nodo *getSiguiente(){
                return pSiguiente;
            }

        }

        void `setSiguiente(Nodo *_pSiguiente){
            pSiguiente = _pSiguiente;

        }


    };

    private:
    Nodo *pCabeza;
    int tamano;


    public:
    Pila(): pCabeza(NULL), tamano(0){

    }
    int geTamano(){return tamano;}
    bool esVacia(){return (pCabeza==NULL);}

    void apilar (T valor)
    {
        new Nodo (valor, cabeza);
        tamano++;

        
    }
    void retirar (){
        if (esVacia())
        throw Pila vac a;
        Nodo *pNodo = pCabeza;
        pCabeza = pCabeza -> getSiguiente();
        delete pNodo;
        tamano--;

    }
    T cima(){
        if (esVacia())
        return null;
        return pCabeza ->getValor();
    }

}

void main(){

    Pila <int> pila;
    pila2.apilar(2);
    pila2.apilar(5);
    pila2.apilar(7);
    cout<<pila2.cima();
    pila2.retirar();
    cout<<pila2.cima();
    pila2.retirar();
    cout<<pila2.cima();
    pila2.retirar();
    cout<<pila2.cima();
    
}
