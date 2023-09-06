#include <stdio.h>
#include <stdlib.h>

char publicText[]={" GLOBAL"};
void check();

int main()
{
    
    char privateText[]={" local"};
    printf("Imprimir desde la funcion MAIN. \n\n");
    printf("Variable global: %s", publicText);
    //printf("\n%s", publicText);
    printf("\nVariable local: %s", privateText);
    //printf("\n%s", privateText);

    check();
    
    return 0;
    
}

void check()
{
    printf("\n\nImprimir desde la funcion CHECK.");
    printf("\n\nVariable global: %s", publicText);

    //printf("\n%s", privateText);

}