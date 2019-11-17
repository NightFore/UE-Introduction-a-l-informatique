#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a; int b;
    printf("Entrez la valeur de a: ");
    scanf("%d", &a);
    printf("Entrez la valeur de b: ");
    scanf("%d", &b);

    printf("Permutation des valeurs de a et b\n");
    a = a+b;
    b = a-b;
    a = a-b;

    printf("a = %d\nb = %d\n", a, b);
    return 0;
}


