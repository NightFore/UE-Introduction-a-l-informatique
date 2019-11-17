#include <stdio.h>
#include <stdlib.h>

int main()
{
    int jour; int mois; int annee;
    printf("Entrez le jour: ");
    scanf("%d", &jour);
    printf("Entrez le mois: ");
    scanf("%d", &mois);
    printf("Entrez l'annee: ");
    scanf("%d", &annee);

    printf("Jour : %d\nMois : %d\nAnnee : %d\nOn est le : %d/%d/%d", jour, mois, annee, jour, mois, annee);

    return 0;
}

