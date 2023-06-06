





#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>

using namespace std;

class Restaurante
{
	private:

		string nombre;
		string direccion;

	public:

		Restaurante()
        {
			this->nombre = " "; 
			this->direccion=" ";
        }
		
void setRestaurante(string n,string d)
{
				this->nombre=n;
				this->direccion=d; 
}
			
void getRestaurante()
{
			cout<<"Nombre: " + this->nombre<<endl;  
			cout<<"Direcion: " + this->direccion<<endl;
}

};

int main()
{
	Restaurante restaurante; 

		string n;
		string d;
		cout << "nombre: "<<endl;
	    getline(cin,n);
		cout << "direccion: "<<endl;
		getline(cin,d);
		restaurante.setRestaurante(n,d);
		restaurante.getRestaurante();
	
}