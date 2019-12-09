#include <stdio.h>
#include <stdlib.h>

int main()
{
    int deplacement;

    printf("Entrez la valeur du déplacement: ");
    scanf("%d", &deplacement);

    switch(deplacement)
    {
        case 6:
            printf("Le personnage va à droite\n");
            break;
        case 4:
            printf("Le personnage va à gauche.\n");
            break;
        case 8:
            printf("Le personnage va en haut.\n");
            break;
        case 2:
            printf("Le personnage va en bas.\n");
            break;
        default:
            printf("Erreur de saisie, le personnage ne bouge pas.\n");
    }

    /*
    do
    {
        printf("Entrez la valeur du déplacement: ");
        scanf("%d", &deplacement);

        switch(deplacement)
        {
            case 6:
                printf("Le personnage va à droite\n");
                break;
            case 4:
                printf("Le personnage va à gauche.\n");
                break;
            case 8:
                printf("Le personnage va en haut.\n");
                break;
            case 2:
                printf("Le personnage va en bas.\n");
                break;
            default:
                printf("Erreur de saisie, le personnage ne bouge pas.\n");
        }
    } while(deplacement != 0);
    */

    return 0;
}

