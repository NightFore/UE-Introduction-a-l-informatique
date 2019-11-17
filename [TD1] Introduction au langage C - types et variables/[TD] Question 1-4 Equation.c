#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Résolution de ax+b = 0*/
    float a; float b;
    printf("Entrez la valeur de a: ");
    scanf("%f", &a);
    printf("Entrez la valeur de b: ");
    scanf("%f", &b);

    printf("%fx + %f = 0\n", a, b);
    printf("x = %f\n", -b/a);

    return 0;
}
