#include <iostream>

using namespace std;

class B 
{ 
    private:
    	int a;
    public:
    	int b;
    	void Asignar_ab();
    	int obj_a();
    	void ver_a();
};


void B::Asignar_ab()
{
    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;
}

int B::obj_a()
{
    return a;	
}

void B::ver_a()
{
	cout<<"El valor de a es:"<<a<<endl;
}


class D:public B
{
	int c;
	public:
		void Mul();
		void Ver();
};

void D::Mul()	
{
    c = obj_a() * b;	
}

void D::Ver()
{
    cout<<"La multiplicacion es:"<<c<<endl;
}

int main()
{
D r;
r.Asignar_ab();
r.Mul();
r.Ver();
return 0;
}