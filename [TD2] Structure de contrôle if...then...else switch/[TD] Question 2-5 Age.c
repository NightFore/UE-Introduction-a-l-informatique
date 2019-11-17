#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;

    printf("Entrez l'âge de la personne: ");
    scanf("%d", &age);

    /*
    if (age>=18)
    {
        printf("Peut voter.\n");
    }
    else
    {
        printf("Ne peut pas voter.\n");
    }
    */

    if (age<18)
    {
        printf("Ne peut pas voter.\n");
    }
    else
    {
        printf("Peut voter.\n");
    }

    return 0;
}

