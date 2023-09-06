#include <stdio.h>

int valor, res;

int main()

{
    valor=20;
    printf("valor 0: %i \n", valor);

    valor=valor+5;
    printf("\nvalor 1: %i \n", valor);
    valor=20;

    valor+=5;
    printf("\nvalor 1 +=: %i \n", valor);
    valor=20;

    valor=valor-5;
    printf("\nvalor 2: %i \n", valor);
    valor=20;

    valor-=5;
    printf("\nvalor 2 -=: %i \n", valor);
    valor=20;

    valor=valor*5;
    printf("\nvalor 3: %i \n", valor);
    valor=20;

    valor*=5;
    printf("\nvalor 3 *=: %i \n", valor);
    valor=20;

    valor=valor/5;
    printf("\nvalor 4: %i \n", valor);
    valor=20;

    valor/=5;
    printf("\nvalor 4 /=: %i \n", valor);
    valor=20;

    valor=valor%5;
    printf("\nvalor 5: %i \n", valor);
    valor=20;

    valor%=5;
    printf("\nvalor 5 mod=: %i \n", valor);
    valor=20;


    res=valor+1;
    printf("\nvalor=valor+1 : %i \n", res);
    printf("  valor es: %i \n\n", valor);
    valor=20;

    res=valor++;
    printf("\nvalor ++ : %i \n", res);
    printf("  valor es: %i \n\n", valor);
    valor=20;

    res=++valor;
    printf("\n ++ valor : %i \n", res);
    printf("  valor es: %i \n\n", valor);
    valor=20;

    res=valor-1;
    printf("\nvalor=valor-1 : %i \n", res);
    printf("  valor es: %i \n\n", valor);
    valor=20;
    
    res=valor--;
    printf("\nvalor --: %i \n", res);
    printf("  valor es: %i \n\n", valor);
    valor=20;

    res=--valor;
    printf("\n -- valor : %i \n", res);
    printf("  valor es: %i \n\n", valor);
    valor=20;



}