#include <stdio.h>
#include <stdlib.h>

int main()
{
    int entier;

    printf("Entrez une valeur entière: ");
    scanf("%d", &entier);

    if (entier%2 == 0)
    {
        printf("%d est un nombre pair.\n", entier);
    }
    else
    {
        printf("%d est un nombre impair.\n", entier);
    }
    return 0;
}

