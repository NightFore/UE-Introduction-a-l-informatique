#include <stdio.h>
#include <stdlib.h>

int main()
{
    int echelle;
    printf("Entrez l'échelle: ");
    scanf("%d", &echelle);

    switch(echelle)
    {
        case 1:
            printf("Micro tremblement de terre, non ressenti.");
            break;
        case 2:
            printf("Très mineur, non ressenti mais détecté.");
            break;
        case 3:
            printf("Mineur, causant rarement des dommages.");
            break;
        case 4:
            printf("Léger, secousses notables d'objets à l'intérieur des maisons.");
            break;
        case 5:
            printf("Modéré, légers dommages aux édifices bien construits.");
            break;
        case 6:
            printf("Fort, destructeur dans des zones allant jusqu'à 180 kilomètres à la ronde si elles sont peuplés.");
            break;
        case 7:
            printf("Majeur, dommages modérés à sévères dans des zones plus vastes.");
            break;
        case 8:
            printf("Important, dommages sérieux dans des zones à des centaines de kilomètres à la ronde.");
            break;
        case 9:
            printf("Dévastateur, dévaste des zones sur des milliers de kilomètres à la ronde.");
            break;
        default:
            printf("Hors-échelle");
    }


    return 0;
}
