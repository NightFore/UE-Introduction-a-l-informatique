#include <stdio.h>
#include <stdlib.h>

int main()
{
    int entier;

    printf("Entrez une valeur entière: ");
    scanf("%d", &entier);

    if (entier/2*2 == entier)
    {
        printf("%d est une valeur paire\n", entier);
    }
    else
    {
        printf("%d est une valeur impaire\n", entier);
    }
    return 0;
}


