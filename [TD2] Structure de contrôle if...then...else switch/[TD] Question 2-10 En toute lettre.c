#include <stdio.h>
#include <stdlib.h>

int main()
{
    int chiffre;
    printf("Entrez un chiffre: ");
    scanf("%d", &chiffre);

    switch(chiffre)
    {
        case 0:
            printf("Zéro");
            break;
        case 1:
            printf("Un");
            break;
        case 2:
            printf("Deux");
            break;
        case 3:
            printf("Trois");
            break;
        case 4:
            printf("Quatre");
            break;
        case 5:
            printf("Cinq");
            break;
        case 6:
            printf("Six");
            break;
        case 7:
            printf("Sept");
            break;
        case 8:
            printf("Huit");
            break;
        case 9:
            printf("Neuf");
            break;
        default:
            printf("%d n'est pas un chiffre", chiffre);
    }


    return 0;
}



