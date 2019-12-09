#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a; int b;

    printf("Entrez la valeur de a: ");
    scanf("%d", &a);
    printf("Entrez la valeur de b: ");
    scanf("%d", &b);


    if (((a>0) && (b>0)) || ((a<0) && (b<0)))
    {
        printf("Le signe du produit est positif.\n");
    }
    else
    {
        printf("Le signe du produit est négatif.\n");
    }

    return 0;
}
