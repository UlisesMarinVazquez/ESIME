

// Hope that it meets the required expectations.

#include <iostream>
#include <string.h>
#include <windows.h>
#include <conio.h>
#include <stdio.h>
#include <time.h>

using namespace std;

void gotoxy(int col,int row);
int getkey();
void Coder_specs ();

struct hamburguesa   // Hamburguesa Specifications.
{
    int hamburguesa_type;
    int pan;
    bool ensalada;
    int salsa;
    int queso;
    float precio;
    hamburguesa *link;
};

class ordenLista        // Class declaration for adding burgers, making opcion etc.
{
private:

    hamburguesa *b;

    void add(hamburguesa *b)
{
    int opcion;

        gotoxy(10,8);
        cout<<"SELECCIONA TIPO DE HAMBURGUESA:"<<endl;
        gotoxy(10,10);
        cout<<"a) Hamburguesa basica con queso";
        gotoxy(10,11);
        cout<<"b) Hamburguesa de pollo";
        gotoxy(10,12);
        cout<<"c) Hamburguesa de carne";
        gotoxy(10,13);
        cout<<"d) Hamburguesa de Bistec";
        gotoxy(10,15);

        opcion = getkey();

        if(opcion == 97) //a) Hamburguesa basica con queso
        {
            b->hamburguesa_type = 1;
            b->precio = 1.50;
            cout<<"Pedido : Hamburguesa basica con queso";
        }
        else if(opcion == 98) //b)Hamburguesa de pollo
        {
            b->hamburguesa_type = 2;
            b->precio = 3.00;
            cout<<"Pedido : Hamburguesa de pollo";
        }
        else if(opcion == 99) //c) Hamburguesa de carne
        {
            b->hamburguesa_type = 3;
            b->precio = 3.00;
            cout<<"Pedido : Hamburguesa de carne";
        }
        else if(opcion == 100) //d) Hamburguesa de Bistec
        {
            b->hamburguesa_type = 4;
            b->precio = 5.00;
            cout<<"Pedido : Hamburguesa de Bistec";
        }
        else
        {
            b->hamburguesa_type = 1;
            b->precio = 1.50;
            cout<<"Your opcion is illegal, set default hamburguesa type, Hamburguesa basica con queso";
        }

        gotoxy(10,17);
        cout<<"SELECCIONA TIPO DE PAN:";
        gotoxy(10,19);
        cout<<"a) Pan Blanco";
        gotoxy(10,20);
        cout<<"b) Blanco";
        gotoxy(10,22);

        opcion = getkey();

        if(opcion == 97) //a) Pan Blanco
        {
            b->pan = 1;
            b->precio = b->precio + 0.50;
            cout<<"Pedido : Pan Blanco";
        }
        else if(opcion == 98) //b) Blanco
        {
            b->pan = 2;
            cout<<"Pedido : Blanco";
        }
        else
        {
            b->pan = 2;
            cout<<"Your opcion is illegal, set default pan type, Blanco";
        }

        gotoxy(10,24);
        cout<<"ADD SALADS:";
        gotoxy(10,26);
        cout<<"a) Si";
        gotoxy(10,27);
        cout<<"b) No";
        gotoxy(10,29);

        opcion = getkey();

        if(opcion == 97) //a) Si
        {
            b->ensalada = 1;
            cout<<"You add ensalada";
        }
        else if(opcion == 98) //b) No
        {
            b->ensalada = 0;
            cout<<"You remove ensalada";
        }
        else
        {
            b->ensalada = 1;
            cout<<"Your opcion is illegal, set default, Si";
        }

        gotoxy(10,31);
        cout<<"SELECT Salsa TYPE:";
        gotoxy(10,33);
        cout<<"a) Ninguna";
        gotoxy(10,34);
        cout<<"b) Tomate";
        gotoxy(10,35);
        cout<<"c) BBQ";
        gotoxy(10,36);
        cout<<"d) Chile Picante";
        gotoxy(10,38);

        opcion = getkey();

        if(opcion == 97) //a) Ninguna
        {
            b->salsa = 1;
            cout<<"Pedido : Ninguna";
        }
        else if(opcion == 98) //b) Tomate
        {
            b->salsa = 2;
            cout<<"Pedido : Tomate";
        }
        else if(opcion == 99) //c) BBQ
        {
            b->salsa = 3;
            cout<<"Pedido : BBQ";
        }
        else if(opcion == 100) //d) Chile Picante
        {
            b->salsa = 4;
            cout<<"Pedido : Chile Picante";
        }
        else
        {
            b->salsa = 2;
            cout<<"Your opcion is illegal, set default salsa type, Tomate";
        }

        gotoxy(10,40);
        cout<<"SELECT Queso Pieza:";
        gotoxy(10,42);
        cout<<"1) 1 Pieza";
        gotoxy(10,43);
        cout<<"2) 2 Piezas";
        gotoxy(10,44);
        cout<<"3) 0 Pieza";
        gotoxy(10,46);

        opcion = getkey();

        if(opcion == 49) //1) 1 Pieza
        {
            b->queso = 1;
            b->precio = b->precio + 0.70;
            cout<<"Pedido : 1 Pieza";
        }
        else if(opcion == 50) //2) 2 Pieza
        {
            b->queso = 2;
            b->precio = b->precio + 1.40;
            cout<<"Pedido : 2 Piezas";
        }
        else if(opcion == 51) //3) 0 Pieza
        {
            b->queso = 0;
            cout<<"Pedido : 0 Pieza";
        }
        else
        {
            b->queso = 1;
            b->precio = b->precio + 0.70;
            cout<<"Your Choice is illegal, set default, 1 Pieza";
        }

        gotoxy(10,48);
        cout<<"Thanks, Your Order Successfully Add to Order List. Price : RM "<<b->precio;
        gotoxy(0,50);
}

public:

   ordenLista() // Constructor.
    {
        b = NULL;
    }

    void addburger()
    {
        hamburguesa *q, *t;

        if(b == NULL)
        {
            b = new hamburguesa;
            add(b);
            b->link = NULL;

        }
        else
        {
            q = b;

            while(q->link != NULL)
                q = q->link;

            t = new hamburguesa;
            add(t);
            t->link = NULL;
            q->link = t;
        }
    }

    void viewlist()  // Info of Hamburguesa Types.
    {
        hamburguesa *temp;
        int burgerno = 1,x = 5,y = 10;
        float precio = 0;

        temp = b;

        while(temp != NULL)
        {
            gotoxy(x,y);
            cout<<"Hamburguesa #"<<burgerno<<" :";
            y++;
            gotoxy(x,y);

            if(temp->hamburguesa_type == 1)
            {
                cout<<"Hamburguesa basica con queso      $80";
            }
            else if(temp->hamburguesa_type == 2)
            {
                cout<<"Hamburguesa de pollo           $90";
            }
            else if(temp->hamburguesa_type == 3)
            {
                cout<<"Hamburguesa de carne              $90";
            }
            else
            {
                cout<<"Hamburguesa de Bistec             $100";
            }

            y++;
            gotoxy(x,y);

            if(temp->ensalada)
            {
                cout<<"Ensaladas(Si)";
            }
            else
            {
                cout<<"Ensaladas(No)";
            }

            y++;
            gotoxy(x,y);

            if(temp->queso == 1)
            {
                cout<<"Queso(1 Pieza)         RM 0.70";
            }
            else if(temp->queso == 2)
            {
                cout<<"Queso(2 Pieza)         RM 1.40";
            }
            else if(temp->queso == 3)
            {
                cout<<"Queso(0 Pieza)";
            }

            y++;
            gotoxy(x,y);

            if(temp->salsa == 1)
            {
                cout<<"Salsa (Ninguna)";
            }
            else if(temp->salsa == 2)
            {
                cout<<"Salsa (Tomate)";
            }
            else if(temp->salsa ==3)
            {
                cout<<"Salsa (BBQ)";
            }
            else if(temp->salsa == 4)
            {
                cout<<"Salsa (Chile Picante)";
            }

            y++;
            gotoxy(x,y);

            if(temp->pan == 1)
            {
                cout<<"Pan (Pan Blanco)         RM 0.50";
            }
            else
            {
                cout<<"Pan (Blanco)";
            }

            y+=3;
            burgerno++;
            precio = precio + temp->precio;

            temp = temp->link;
        }

        gotoxy(x,y);
        cout<<"-----------------------------------";
        y++;
        gotoxy(x,y);
        cout<<"Total                    RM "<<precio;
        y+=2;
        gotoxy(5,y);
    }

    void submitorder()
    {
        FILE *fp;
        fp = fopen("record.dat","a+");

        if(fp == NULL)
        {
            cout<<endl<<"Error : Cannot create record file"<<endl;
            exit(1);
        }

        hamburguesa *d, *temp;

        temp = b;

        while(temp != NULL)
        {
            if(temp->hamburguesa_type == 1)
            {
                fputs("Hamburguesa basica con queso          $80\n",fp);
            }
            else if(temp->hamburguesa_type == 2)
            {
                fputs("Hamburguesa de pollo               $90\n",fp);
            }
            else if(temp->hamburguesa_type == 3)
            {
                fputs("Hamburguesa de carne                  $90\n",fp);
            }
            else
            {
                fputs("Hamburguesa de Bistec                 $100\n",fp);
            }

            temp = temp->link;
        }

        fclose(fp);

        if(b == NULL)
            return;

        while(b != NULL)
        {
            d = b->link;
            delete b;
            b = d;
        }
    }

    void deleteorderlist() //For deleting an existing order.
    {
        int opcion;

        gotoxy(18,10);
        cout<<"Are You Sure that You Want To Delete The Current Order List ? (y/n)";
        gotoxy(0,25);

        opcion = getkey();

        if(opcion == 121)
        {
            hamburguesa *d;

            if(b == NULL)
                return;

            while(b != NULL)
            {
                d = b->link;
                delete b;
                b = d;
            }
        }
    }

    void summaryreport()
    {
        FILE *fp;

        int x=34, y=8;
        char str[100];

        gotoxy(x,y);
        cout<<"SELL RECORD";
        x=22;
        y+=4;

        fp = fopen("record.dat","r");

        if(fp == NULL)
            return;

        while(fgets(str,99,fp)!=NULL)
        {
            gotoxy(x,y);
            cout<<str;
            y++;
        }

        fclose(fp);
    }
};

int main()
{

    time_t current_time;
    int useroption, programrunning, ordernumber, receiptno;
    ordenLista ol;

    programrunning = 1;
    ordernumber = 0;
    receiptno = 1;

    while(programrunning)
    {   gotoxy(20,2);

        cout<<"Current Time =>  "<< ctime(&current_time)<<endl;
        gotoxy(32,3);
        cout<<"YY Hamburguesa STORE";
        gotoxy(35,6);
        cout<<"MENU PRINCIPAL";
        gotoxy(5,10);
        cout<<"1. MOSTRAR LISTA DE HAMBURGUESAS";
        gotoxy(5,12);
        cout<<"2. NUEVA ORDEN";
        gotoxy(5,14);
        cout<<"3. VER PEDIDO";
        gotoxy(5,16);
        cout<<"4. ELIMINAR ORDEN";
        gotoxy(5,18);
        cout<<"5. INFORME RESUMIDO";
        gotoxy(5,20);
        cout<<"6. SALIDA";
        gotoxy(0,25);

        useroption = getkey();

        system("cls");

        if(useroption == 49) //1. MOSTRAR LISTA DE HAMBURGUESAS
        {
            gotoxy(32,2);
            cout<<"YY Hamburguesa STORE";
            gotoxy(32,6);
            cout<<"AVAILABLE Hamburguesa";

            gotoxy(02,10);
            cout<<"a) Hamburguesa basica con queso - Pan, Ensalada, Queso, Salsa                  $80";
            gotoxy(02,11);
            cout<<"b) Hamburguesa de pollo - Pan, Ensalada, Queso, Salsa, Empanada de Pollo       $90";
            gotoxy(02,12);
            cout<<"c) Hamburguesa de carne - Pan, Ensalada, Queso, Salsa, Empanada de Carne       $90";
            gotoxy(02,13);
            cout<<"d) Hamburguesa de Bistec - Pan, Ensalada, Queso, Salsa, Empanada de Bistec     $100";
            gotoxy(02,16);
            cout<<"Opciones: \n";
            gotoxy(02,17);
            cout<<"- Pan [Pan Blanco or Blanco] *additional RM 0.50 charge for whole mean Pan";
            gotoxy(02,18);
            cout<<"- Salsa [Ninguna, Tomato or BBQ or Chile Picante]";
            gotoxy(02,19);
            cout<<"- Queso[0-2 pieces] *additional RM 0.70 charge for every additional Pieza";
            gotoxy(02,20);
            cout<<"**No Discount for any removal of ingredient";
            gotoxy(0,25);

            getch();
        }
        else if(useroption == 50) //2. NUEVA ORDEN
        {
            gotoxy(32,2);
            cout<<"YY Hamburguesa STORE";
            gotoxy(35,6);
            cout<<"NUEVA ORDEN";

            if(ordernumber == 3)
            {
                gotoxy(8,13);
                cout<<"Your Order List is full. Please submit order to make NUEVA ORDEN";
            }
            else
            {
                ordernumber++;
                ol.addburger();
            }

            getch();
        }
        else if(useroption == 51) //3. VER PEDIDO
        {
            int opcion;

            gotoxy(32,2);
            cout<<"YY Hamburguesa STORE";
            gotoxy(34,6);
            cout<<"NUEVA ORDEN";

            gotoxy(5,8);
            cout<<"Receipt No #: "<<receiptno;

            ol.viewlist();

            cout<<"Submit Order ? (y/n)";

            opcion = getkey();

            if(opcion == 121)
            {
                receiptno++;
                ordernumber = 0;
                ol.submitorder();
            }
        }
        else if(useroption == 52) //4. ELIMINAR ORDEN
        {
            gotoxy(32,2);
            cout<<"YY Hamburguesa STORE";
            gotoxy(34,6);
            cout<<"ELIMINAR ORDEN";

            ordernumber = 0;

            ol.deleteorderlist();
        }
        else if(useroption == 53) //5.INFORME RESUMIDO
        {
            gotoxy(32,2);
            cout<<"YY Hamburguesa STORE";
            gotoxy(33,6);
            cout<<"INFORME RESUMIDO";

            ol.summaryreport();

            getch();
        }
        else if(useroption == 54) //7. SALIDA
        {   Coder_specs();
            Sleep(5000);
            system("cls");
            programrunning = 0;

        }

        system("cls");
    }

    return 0;
}

void gotoxy(int col,int row) // For managing Alignment.
{
    HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD position = {col,row};
    SetConsoleCursorPosition(hStdout,position);
}

int getkey() // Getting Key from the user, well we referred it as an individual function .
{
    int ch;
    ch=getch();
    if(ch==0)
    {
        ch=getch();
        return ch;
    }
    return ch;
}
void Coder_specs () {


int array1[2] = {45360,45365}; //Matric No.
system ("color fc");
gotoxy(30,7);
cout<<"Shashwata Chowdhury= "<<array1[0]<<endl;
gotoxy(30,10);
cout <<"Thank you!" <<endl;
Sleep(5000);
system("cls");


}
