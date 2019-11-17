#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Calculer la surface dÅfun rectangle en fonction de sa longueur et de sa largeur.*/
    int longueur; int largeur;
    printf("Entrez la longueur: ");
    scanf("%d", &longueur);
    printf("Entrez la largeur: ");
    scanf("%d", &largeur);
    printf("La surface sur rectangle est egal a: %d", (longueur*largeur));

    return 0;
}
