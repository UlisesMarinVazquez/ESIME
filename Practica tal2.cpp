/* 
Crear un programa que tenga una clase llamada Fracción y que sume fracciones mostrando en la pantalla qué tipo de fracción es (propia o impropia) */

#include <iostream>
using namespace std;

class Fraccion 
{
    private:
    int numerador;
    int denominador;

    public:
    Fraccion(int n, int d) 
    {
        numerador = n;
        denominador = d;
    }
    
    void imprimir() 
    {
        cout << numerador << "/" << denominador << endl;
    }
    
    Fraccion sumar(Fraccion f) 
    {
        int n = numerador * f.denominador + f.numerador * denominador;
        int d = denominador * f.denominador;
        return Fraccion(n, d);
    }
    
    bool esPropia() {
        return numerador < denominador;
    }
};

int main() 
{
    int n1, d1, n2, d2;
    cout << "Ingrese el numerador y denominador de la primera fracción: ";
    cin >> n1 >> d1;
    cout << "Ingrese el numerador y denominador de la segunda fracción: ";
    cin >> n2 >> d2;
    
    Fraccion f1(n1, d1);
    Fraccion f2(n2, d2);
    
    Fraccion suma = f1.sumar(f2);
    
    cout << "La suma es: ";
    suma.imprimir();
    
    if (suma.esPropia()) 
    {
        cout << "La fracción es propia." << endl;
    }else 
    {
        cout << "La fracción es impropia." << endl;
    }
    
    return 0;
};
