#include <stdio.h>
#include <stdlib.h>

int main()
{
    float val;
    float *ap;
    ap= &val;
    *ap= 3.1416;
    printf("El valor de la variable es: %f ", val);
    
    return 0;
}
