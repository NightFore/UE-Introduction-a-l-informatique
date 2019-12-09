#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a; int b; int c; int nbmax;

    printf("Entrez la valeur de a: ");
    scanf("%d", &a);
    printf("Entrez la valeur de b: ");
    scanf("%d", &b);
    printf("Entrez la valeur de c: ");
    scanf("%d", &c);


    if ((a>b) && (a>c))
    {
        nbmax = a;
    }
    else
    {
        if ((b>a) && (b>c))
        {
            nbmax = b;
        }
        else
        {
            nbmax = c;
        }
    }
    printf("Le maximum est égal à: %d", nbmax);

    return 0;
}
