#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a; int b; int c;
    printf("Entrez la valeur de a: ");
    scanf("%d", &a);
    printf("Entrez la valeur de b: ");
    scanf("%d", &b);
    printf("Entrez la valeur de c: ");
    scanf("%d", &c);

    printf("Permutation des valeurs de a, b et c\n");
    a = a+b;
    b = a-b;
    a = a-b;

    b = b+c;
    c = b-c;
    b = b-c;

    printf("a = %d\nb = %d\nc = %d\n", a, b, c);
    return 0;
}
