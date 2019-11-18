#include <stdio.h>
#include <stdlib.h>

int nombreOrdonnes(int a, int b, int c)
{
    if (a<b<c)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int a; int b; int c;
    do
    {
        printf("Entrez la valeur de a: ");
        scanf("%d", &a);
        printf("Entrez la valeur de b: ");
        scanf("%d", &b);
        printf("Entrez la valeur de c: ");
        scanf("%d", &c);
    } while((a==0) && (b==0) && (c==0));

    printf("%d (0: nombre non ordonnes, 1: nombre ordonnes)", nombreOrdonnes(a, b, c));

    return 0;
}
