
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
-
 */


#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>

using namespace std;

class Restaurante
{
	protected:
		string mesa;
		string alimentos;
			string bebidas;
	public:
		Restaurante(){
			this->mesa = " "; 
			this->alimentos=" "; 
			this->bebidas=" "; 
		}
		
		void setRestaurante(string m,string a, string b){
				this->mesa=m;
				this->alimentos=a; 
				this->bebidas=b;
			}
			
	
};

class Comensal : public Restaurante
{
    
    private:
    string cliente;
    public:
    Comensal(){
        this->cliente=" ";
    }
   void setComensal(string m, string a, string b, string c)
    {
        this-> cliente=c;
        this->alimentos=a;
				this->bebidas=b; 
					this->mesa=m;
    }
    void getComensal(){
			cout<<"Nombre: " + this->cliente<<endl;  
			cout<<"Mesa: " + this->mesa<<endl;
			cout<<"alimentos: " + this->alimentos<<endl;
				cout<<"bebidas: " + this->bebidas<<endl;
			
    }
};




int main()
{
Comensal comensal[5]={Comensal()}; 
int contador = 0;
do{
	
		string m,a,b,c;
		
		cout << "nombre: "<<endl;
	getline(cin,c);
		cout << "mesa: "<<endl;
			getline(cin,m);
			cout << "alimentps: "<<endl;
			getline(cin,a);
			cout << "bebidas: "<<endl;
			getline(cin,b);
		comensal[contador].setComensal(m,a,b,c);
		 
		 contador++;
}while (contador<5);

	for (int i=0;i<5;i++){
		 comensal[i].getComensal() ;
	}
	

	
	

}