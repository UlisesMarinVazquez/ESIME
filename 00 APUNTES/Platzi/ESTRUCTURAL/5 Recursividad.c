#include <stdio.h>
#include <stdlib.h>

//int FACTORIAL(int);
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

int main()
{
    int resultado = FACTORIAL(6); 
    printf("El resultado es: %i", resultado);
    return 0;

}

