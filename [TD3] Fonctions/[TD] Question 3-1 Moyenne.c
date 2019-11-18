#include <stdio.h>
#include <stdlib.h>

int calculeMoyenne(int a, int b)
{
    return (a+b)/2;
}

int main()
{
    int a; int b; int moyenne;

    printf("Entrez la valeur de a: ");
    scanf("%d", &a);
    printf("Entrez la valeur de b: ");
    scanf("%d", &b);

    moyenne = calculeMoyenne(a, b);
    printf("La moyenne est égal à: %d\n", moyenne);

    return 0;
}
