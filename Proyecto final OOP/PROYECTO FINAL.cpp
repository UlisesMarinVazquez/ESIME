/* 
Un programa final de POO con:

- 3 Clases (pública, privada y protegida)
- Heredar al menos dos visibilidades diferentes
- Usar un dato miembro estático
- Una función friend que tenga argumentos de E/S
- Arreglo de objetos
- Constructores sobrecargados
- Sobrecarga de operadores
- Una clase virtual


 */
  

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

        void getRestaurante(string n, string d);

        void getRestaurante();
};

class 


void Restaurante::getRestaurante(string n,string d)
{
				this->nombre=n;
				this->direccion=d; 
}
			

void Restaurante::getRestaurante()
{
			cout<<"Nombre: " + this->nombre<<endl;  
			cout<<"Direcion: " + this->direccion<<endl;
}



int main()
{
	Restaurante restaurante; 

		string n;
		string d;
		cout << "nombre: "<<endl;
	    getline(cin,n);
		cout << "direccion: "<<endl;
		getline(cin,d);

		restaurante.getRestaurante(n,d);
		restaurante.getRestaurante();
	
}

