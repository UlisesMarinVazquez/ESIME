#include <stdio.h>
#include <stdlib.h>

int FACTORIAL(int n);

int main()
{
   char resp;
   
    do
    {
    int n;
    printf("Ingresa un numero positivo: ");
    scanf("%i", &n);
    printf("El resultado de %i factorial es: %i", n, FACTORIAL(n));
    printf("\n\nQuieres calcular otro factorial? (s/n): ");
    scanf(" %c", &resp);
    }while(resp == 's' || resp== 'S');
    
    return 0;
}


int FACTORIAL(int n)
{
    if (n>1)
    {
        return n*FACTORIAL(n-1);
    }else
    {
        return 1;
    }
}

