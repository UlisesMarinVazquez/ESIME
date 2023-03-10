#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int *pr;
    int op,y,n=0,r,x,i=1,k;
	int arr[5];
	bool band=false;

    do
    {
        cout<<"SELECIONE UNA OPCION: "<<endl;
        cout<<"10. INTRODUCE UN DATO\n";
        cout<<"1. INSERTAR AL INICIO\n";
        cout<<"2. INSERTAR AL FINAL\n";
        cout<<"3. ELIMINAR AL INICIO\n";
        cout<<"4. ELIMINAR AL FINAL\n";
        cout<<"5. INSERTAR ANTES DE\n";
        cout<<"6. INSERTAR DESPUES DE\n";
        cout<<"7. ELIMINAR ANTES DE\n";
        cout<<"8. ELIMINAR DESPUES DE\n";
        cout<<"9. ELIMINAR ELEMENTO\n";
        cout<<"11. INTRODUCE EL DATO A MODIFICAR\n";
        
        cin>>op;

        switch (op)
        {
            case 1:
            if (n<5)
            {
             cout<<"\nINTRODUCE UN DATO"   /* code */
            }
            

            if(n<Tam){
					printf("\nIntroduce un dato: ");
					scanf("%i", &y);
					for(int i=Tam;i>0;i--){
						arr[i]=arr[i-1];
					}
					arr[0]=y;
					n++;
				}
				else{
					printf("\nNo hay espacio.");
				}
			     break;
        
        }


    } while ();
    
}
