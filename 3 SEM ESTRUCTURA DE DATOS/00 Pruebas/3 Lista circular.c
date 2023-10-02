
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

// Estructuras Doblemente enlazadas
typedef struct nododoble
{
    int dato;
    struct nodoc *sig;
    struct nodoc *ant;

} tipoNodo;

// PROTOTIPOS
tipoNodo *nuevo_elemento();
void crearc();
void presentar();
void presentar_recorrido();
void insertar();
void insertarfinalc();
void insertarordenadoc();
void insertarinicioc();
void modificar();
void buscar();
void ordenar();
void ordenarc();
void ordenarcdesc();
void eliminar();
void eliminar_cabeza();
void cuadro(int x1, int y1, int x2, int y2, char c);

tipoNodo *cab;
tipoNodo *cola;

tipoNodo *nuevo_elemento()
{
    tipoNodo *nodo1;
    nodo1 = (tipoNodo *)malloc(sizeof(tipoNodo));
    if (!nodo1)
        cout <<”No se ha reservado memoria para el nuevo “;
    return nodo1;
}

// MENU PRINCIPAL
void main()
{
    clrscr();
    creardoble();
    clrscr();
    char opc =’ ‘;

    do
    {

        clrscr();
        cuadro(1, 10, 35, 56,’’);
        gotoxy(13, 3);
        cout <<”->[LISTAS ENLAZADAS CIRCULARES] < -\n”;
        gotoxy(12, 6);
        cout <<” MENU PRINCIPAL\n”;
        gotoxy(12, 9);
        cout <<” [1] : INSERTAR \n”;
        gotoxy(12, 12);
        cout <<” [2] : MODIFICAR\n”;
        gotoxy(12, 15);
        cout <<” [3] : BUSCAR\n”;
        gotoxy(12, 18);
        cout <<” [4] : ORDENAR\n”;
        gotoxy(12, 21);
        cout <<” [5] : ELIMINAR\n”;
        gotoxy(12, 24);
        cout <<” [6] : PRESENTAR\n”;
        gotoxy(12, 27);
        cout <<” [7] : PRESENTAR RECORRIDO\n”;
        gotoxy(12, 30);
        cout <<” [8] : SALIR DEL MENU\n”;
        gotoxy(12, 33);
        cout <<” Elegir una Opci¢n[]“;
        gotoxy(32, 33);
        cin >> opc;

        switch (opc)
        {
            case’1': clrscr(); insertar();
            ;
            getch();
            break;
            case’2': clrscr(); modificar();
            getch();
            break;
            case’3': clrscr(); buscar();
            getch();
            break;
            case’4': clrscr(); ordenar();
            getch();
            break;
            case’5': clrscr(); eliminar();
            getch();
            break;

            case’6': clrscr(); presentar();
            getch();
            break;
            case’7': clrscr(); presentar_recorrido();
            getch();
            break;
        }

}while(opc!=’8');
 
getch();
}

// CREAR LA CABEZA
void crearc()
{
clrscr();
int dat;
gotoxy(20, 20);
cout <<”Ingrese Elemento : “;
cin >> dat;
cab = nuevo_elemento();
cab->dato = dat;
cola = cab;
cola->sig = cab;
cab->ant = cola;
getch();
}

void insertar()
{
clrscr();
char opc =’ ‘;

do
{

    clrscr();
    cuadro(1, 10, 25, 56,’’);
    gotoxy(13, 3);
    cout <<”->[INSERTAR ELEMENMTOS A LA LISTA ENLAZADA] < -\n”;
    gotoxy(12, 6);
    cout <<” [1] : INSERTAR ORDENADO\n”;
    gotoxy(12, 9);
    cout <<” [2] : INSERTAR CABEZA\n”;
    gotoxy(12, 12);
    cout <<” [3] : INSERTAR AL FINAL\n”;
    gotoxy(12, 15);
    cout <<” [4] : REGRESAR\n”;
    gotoxy(12, 17);
    cout <<” Elegir una Opci¢n[]“;
    gotoxy(32, 17);
    cin >> opc;
    switch (opc)
    {
        case’1': clrscr(); insertarordenadoc();
        getch();
        break;

        case’2': clrscr();

            insertarinicioc();
        getch();
        break;

        case’3': clrscr(); insertarfinalc();
        getch();
        break;
    }

}
 while(opc!=’4');
 
getch();
}

void insertarfinalc()
{
clrscr();
nodoc *elem;
elem = nuevo_elemento();
clrscr();
gotoxy(20, 20);
cout <<”\t\t” <<”INGRESE VALOR :\t”;
cin >> elem->dato;
cola->sig = elem;
elem->ant = cola;
elem->sig = cab;
cab->ant = elem;
cola = elem;
getch();
}

void insertarordenadoc()
{
nodoc *ant;
nodoc *Aux;
nodoc *post;
int dat;
Aux = nuevo_elemento();
ant = nuevo_elemento();
post = nuevo_elemento();
gotoxy(18, 22);
cout <<”Ingrese un elemento : “;
cin >> dat;
Aux->dato = dat;
if (Aux->dato > cab->dato)
{
    ant = cab;
    post = cab->sig;
    while ((Aux->dato > post->dato) && (post->sig != cab))
    {
        ant = post;
        post = post->sig;
    }
    if (post->sig == cab)
    {
        if (Aux->dato < post->dato)
        {
            Aux->sig = post;
            post->ant = Aux;
            ant->sig = Aux;
            Aux->ant = ant;
        }
        else
        {
            Aux->sig = cab;
            post->sig = Aux;
            Aux->ant = post;
            cab->ant = Aux;
            cola = Aux;
        }
    }
    else
    {
        Aux->sig = post;
        post->ant = Aux;
        ant->sig = Aux;
        Aux->ant = ant;
    }
}
else
{
    Aux->dato = dat;
    Aux->sig = cab;
    cab->ant = Aux;
    Aux->ant = cola;
    cab = Aux;
    cola->sig = cab;
}
}
void insertarinicioc()
{
nodoc *Aux;
int dat;
Aux = nuevo_elemento();
gotoxy(18, 22);
cout <<”Ingrese un numero :”;
cin >> dat;
Aux->dato = dat;
Aux->sig = cab;
cab->ant = Aux;
cola->sig = Aux;
Aux->ant = cola;
cab = Aux;
getch();
}

void modificar()
{
clrscr();
nodoc *modificar;
nodoc *ele;
modificar = nuevo_elemento();
int db, encontrado = 0;
modificar = cab;
gotoxy(10, 20);
cout <<”\t” <<”INGRESE EL VALOR A MODIFICAR :\t”;
cin >> db;
for (int c = 0; c <= 1; c++)
{

    while (db != modificar->dato)
    {
        modificar = modificar->sig;
    }
    gotoxy(10, 22);
    cout <<”Elemento existente en la lista”;
    encontrado = 1;
    gotoxy(10, 25);
    cout <<”\t\t” <<”INGRESE VALOR :\t”;
    cin >> ele->dato;
    modificar->dato = ele->dato;

    c++;
}
if (encontrado == 0)
{
    gotoxy(10, 22);
    cout <<”Elemento no existente en la lista”;
}

getch();
}
void buscar()
{
clrscr();
 cuadro(15,5,50,25,’');
 nodoc *buscar;
 buscar=nuevo_elemento();
 int db,encontrado=0;
 buscar=cab;
 gotoxy(18,15);
 cout<<”Ingrese el numero a buscar: “;
 cin>> db;
 
for(int c=0;c<=1;c++)
 {
        while (buscar->dato != db)
        {

            buscar = buscar->sig;
        }

        gotoxy(18, 18);
        cout <<”Elemento existente en la lista”;
        encontrado = 1;

        c++;
 }
 if(encontrado==0)
 {
        gotoxy(18, 18);
        cout <<”Elemento no existente en la lista”;
 }
 getch();
}

void ordenar()
{
 clrscr();
 char opc =’ ‘;

 do
 {

     clrscr();
     cuadro(1, 10, 25, 56,’’);
     gotoxy(13, 3);
     cout <<”->[ORDENAR LAS LISTAS ENLAZADAS] < -\n”;
     gotoxy(12, 6);
     cout <<” MENU PRINCIPAL\n”;
     gotoxy(12, 9);
     cout <<” [1] : ORDENAR ASCENDENTE\n”;
     gotoxy(12, 12);
     cout <<” [2] : ORDENAR DESCENDENTE\n”;
     gotoxy(12, 15);
     cout <<” [3] : REGRESAR\n”;

     gotoxy(12, 17);
     cout <<” Elegir una Opci¢n[]“;
     gotoxy(32, 17);
     cin >> opc;
     switch (opc)
     {
         case’1': clrscr(); ordenarc();
         break;
         case’2': clrscr(); ordenarcdesc();
         break;
     }

}
 while(opc!=’3');
 
getch();
}
void ordenarc()
{
nodoc *aux;
nodoc *temp;
int vaux;
aux = nuevo_elemento();
temp = nuevo_elemento();
aux = cab;
while (aux->sig != cab)
{
    temp = aux;
    while (temp->sig != cab)
    {
        temp = temp->sig;
        if (aux->dato > temp->dato)
        {
            vaux = aux->dato;
            aux->dato = temp->dato;
            temp->dato = vaux;
        }
    }
    aux = aux->sig;
}
}
void ordenarcdesc()
{
nodoc *aux;
nodoc *temp;
int vaux;
aux = nuevo_elemento();
temp = nuevo_elemento();
aux = cab;
while (aux->sig != cab)
{
    temp = aux;
    while (temp->sig != cab)
    {
        temp = temp->sig;
        if (aux->dato < temp->dato)
        {
            vaux = aux->dato;
            aux->dato = temp->dato;
            temp->dato = vaux;
        }
    }
    aux = aux->sig;
}
}

void presentar()
{
clrscr();
nodoc *recorre;
recorre = nuevo_elemento();
recorre = cab;
cout <<”Elementos insertados :\n\n”;
for (int c = 0; c <= 1; c++)
{
    cout << recorre->dato <<”\t”;
    recorre = recorre->sig;
    while (recorre != cab)
    {
        cout << recorre->dato <<”\t”;
        recorre = recorre->sig;
    }
    c++;
}

getch();
}
void presentar_recorrido()
{
clrscr();
nodoc *recorre;
recorre = nuevo_elemento();
recorre = cab;
cout <<”Elementos insertados :\n\n”;
for (int c = 0; c <= 1; c++)
{
    cout << recorre->dato <<”\t”;
    recorre = recorre->sig;
    while (recorre != cab)
    {
        cout << recorre->dato <<”\t”;
        recorre = recorre->sig;
    }
    cout <<”\n”;
}

getch();
}

void eliminar()
{
presentar();
nodoc *eliminar;
nodoc *asigna;
gotoxy(10, 25);
cout <<”ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»\n”;
gotoxy(10, 26);
cout <<”º º\n”;
gotoxy(10, 27);
cout <<”ºINSERTAR NUMERO A ELIMINARº\n”;
gotoxy(10, 28);
cout <<”º º\n”;
gotoxy(10, 29);
cout <<”ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼\n”;
gotoxy(10, 31);
cout <<”Ingrese el n—mero a eliminar\t”;
cin >> eliminar->dato;
if (eliminar->dato == cab->dato)
{

    eliminar_cabeza();
}

else
{
    nodoc *anterior = cab;
    nodoc *aux = cab->sig;

    while ((aux != NULL) && (aux->dato != eliminar->dato))
    {
        anterior = aux;
        aux = aux->sig;
    }
    if (aux != NULL)
    {
        asigna = aux->sig;
        anterior->sig = asigna;
        aux->ant = anterior;
        aux->ant = NULL;
        aux->sig = NULL;
        free(aux);
    }
    else
    {
        gotoxy(10, 33);
        cout <<”NO SE ENCUENTRA”;
    }
}
}

void eliminar_cabeza()
{
/* nododoble *aux;
aux=cab;
cab=cab->sig;
// cab->ant=cola;
aux->sig=NULL;
cab->ant=cola;
aux->ant=NULL;
free(aux); */
nodoc *aux;
aux = cab;
cab = cab->sig;
// aux->sig=NULL;
aux->ant = NULL;
free(aux);
}

void cuadro(int x1, int y1, int x2, int y2, char simb)
{
for (int i1 = y1; i1 <= y2; i1++)
{
    gotoxy(i1, x1);
    cout << simb;
    gotoxy(i1, x2);
    cout << simb;
}
for (int i2 = x1; i2 <= x2; i2++)
{
    gotoxy(y1, i2);
    cout << simb;
    gotoxy(y2, i2);
    cout << simb;
}
}