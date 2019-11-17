#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a; int b; int nbmin;

    printf("Entrez la valeur de a: ");
    scanf("%d", &a);
    printf("Entrez la valeur de b: ");
    scanf("%d", &b);


    if (a<b)
    {
        nbmin = a;
    }
    else
    {
        nbmin = b;
    }
    printf("Le minimum est égal à: %d", nbmin);

    return 0;
}


