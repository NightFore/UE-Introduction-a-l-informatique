#include <stdio.h>
#include <stdlib.h>

int calculeAire(int a)
{
    return a*a;
}

int calculePerimetre(int a)
{
    return a*4;
}

int main()
{
    int longueur;

    printf("Entrez la longueur du carré: ");
    scanf("%d", &longueur);

    printf("L'aire du carré est égal à: %d\n", calculeAire(longueur));
    printf("Le perimètre du carré est égal à: %d\n", calculePerimetre(longueur));

    return 0;
}

