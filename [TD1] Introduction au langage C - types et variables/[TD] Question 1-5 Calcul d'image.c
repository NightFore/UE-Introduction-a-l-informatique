#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Image de f(x) = 3x+4*/
    float x; float b;
    printf("Entrez la valeur de x: ");
    scanf("%f", &x);
    printf("3*%f + 4 = %f\n", x, (3*x+4));

    return 0;
}
