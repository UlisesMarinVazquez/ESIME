
#include <iostream>
#include <cstring>

using namespace std;

class Freestyle
{
    private:

    string id;
    int edad;
    string fms;
    int ranking;
    float puntos;
    
    public:

    //void Asignar();
    void Imprimir();
    Freestyle(string n, int ed, string f, int r, float p);

};


Freestyle::Freestyle(string n, int ed, string f, int r, float p)
{
        id=n;
        edad=ed;
        fms=f;
        ranking=r;
        puntos=p;

}


/* void Freestyle::Asignar()
{
    cout<<"Datos del freestyler."<<endl;
    cout<<"Nombre: ";
    cin>>id;
    cout<<"Edad:";
    cin>>edad;
    cout<<"FMS:";
    cin>>fms;
    cout<<"Ranking:";
    cin>>ranking;
    cout<<"Puntos:";
    cin>>puntos;

} */


void Freestyle::Imprimir()
{
    cout<<"Id: "<<id<<" Edad: "<<edad<<" FMS: "<<fms<<" Ranking: "<<ranking<<" Puntos: "<<puntos<<endl;
}



main()
{

    Freestyle f1(Aczino, 34, Mexico, 1, 23.5);
    //f1.Asignar();
    f1.Imprimir();
    //f2.Asignar(); 
    //f2.Imprimir();

}

