







#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
using namespace std;

class Restaurante{
	protected:
			string nombre;
			string direccion;
			string ncomensal;
			string producto;
	public:
		Restaurante();
		void setRestaurante(string, string);
		void getRestaurante();
	void setcomensal(string );
		friend void MostrarComensal( Restaurante &comensal);
    
};

class Menu:public Restaurante{
    private:
    float precio;
  static int cont;
      int acu{};
    
    public:
    Menu() : acu{cont++}
    {}
    int getID() const{return acu;}
    void setMenu(string,float);
       void getMenu();
};
int Menu :: cont{1};

void Menu::setMenu(string _producto,float _precio){
			
				producto=_producto; 
				precio=_precio;
				}


void Menu::getMenu(){
    cout<<producto<<" ";
    cout<<"$"<<precio<<endl;
}

Restaurante::Restaurante(){
}


void Restaurante::setRestaurante(string _nombre,string _direccion){
				nombre=_nombre; 
				direccion=_direccion;
			}
			
			void Restaurante::setcomensal(string _ncomensal){
				ncomensal=_ncomensal; 
			}
			
			
void Restaurante::getRestaurante(){
			cout<<"Bienvenido a " + nombre<<endl;  
			cout<<"Sucursal " + direccion<<endl;
			}			
			
void MostrarComensal( Restaurante &comensal){
   cout<<comensal.ncomensal<<endl;
}
int main(){
    string fit, fat;
    char vs;
	Restaurante restaurante; 

		restaurante.setRestaurante("Restaurante equipo 4","ESIME CULHUACAN");
		restaurante.getRestaurante();
		
		Restaurante comensal;
		string _ncomensal;
		cout << "Gracias por venir! cuál es su nombre?"<<endl;
			getline(cin,_ncomensal);
	
			comensal.setcomensal(_ncomensal);
		Menu producto1, producto2, producto3, producto4, producto5, producto6, producto7, producto8;
			  producto1.setMenu("pizza hawaiana grande",250);
			 producto2.setMenu("Orden de 5 tacos al pastor",100);
			  producto3.setMenu("Tamal oaxaqueño",40);
			  producto4.setMenu("Hamburgesa con papas fritas",150);
			 producto5.setMenu("Coca cola 600 ml",50);
			 producto6.setMenu("Caguama",80);
			 producto7.setMenu("Ensalada gei",500);
			  producto8.setMenu("Te verde",200);
	
		cout << "Bienvenido ";
			MostrarComensal(comensal);
				//cout << "Tenemos dos modalidades para tus ordenes, un menú fit y un menu normal. Escribe f para fit o n para normal respectivamente"<<endl;
		   cout<<"Menu completo"<<endl;
cout<<producto1.getID()<< " "; 
producto1.getMenu();
        cout<<producto2.getID()<< " ";
          producto2.getMenu();
          cout<<producto3.getID()<< " ";
           producto3.getMenu();
           cout<<producto4.getID()<< " ";
            producto4.getMenu();
            cout<<producto5.getID()<< " ";
             producto5.getMenu();
             cout<<producto6.getID()<< " ";
              producto6.getMenu();
     cout<<producto7.getID()<< " ";
         producto7.getMenu();
                cout<<producto8.getID()<< " ";
        producto8.getMenu();
}
