#include <stdio.h>
#include <conio.h>

int INCREMENTO(int);

int main()
{
    int A, RES;
    printf("Ingrese un numero entero: ");
    scanf("%i", &A);
    A=A%5;

    RES=INCREMENTO(A);
    printf("\nEl resultado incrementado es: %i", RES);


   return 0;
   
}


int INCREMENTO(int a)
{
    int res;
    res=++a;
    return res;
}

