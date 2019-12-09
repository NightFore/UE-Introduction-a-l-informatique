#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a; int b; int c; int nbmin;

    printf("Entrez la valeur de a: ");
    scanf("%d", &a);
    printf("Entrez la valeur de b: ");
    scanf("%d", &b);
    printf("Entrez la valeur de c: ");
    scanf("%d", &c);


    if ((a<b) && (a<c))
    {
        nbmin = a;
    }
    else
    {
        if ((b<a) && (b<c))
        {
            nbmin = b;
        }
        else
        {
            nbmin = c;
        }
    }
    printf("Le minimum est égal à: %d", nbmin);

    return 0;
}


