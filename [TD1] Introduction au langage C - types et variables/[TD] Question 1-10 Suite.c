#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a; int r; int n;
    printf("Entrez la valeur de u0: ");
    scanf("%d", &a);
    printf("Entrez la valeur de r: ");
    scanf("%d", &r);
    printf("Entrez le nombre de termes: ");
    scanf("%d", &n);

    int l = a + (n-1)*r;
    printf("Le dernier terme est égal à: %d\n", l);
    int s = (n * (a+l))/2;
    printf("La somme des termes est égal à: %d\n", s);

    return 0;
}

