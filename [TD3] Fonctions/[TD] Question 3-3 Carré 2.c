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

int calculeEtAffiche(int a)
{
    printf("Pour un carre de cote %d, l'aire est %d et le perimetre de %d.\n", a, calculeAire(a), calculePerimetre(a));
    return 0;
}

int main()
{
    calculeEtAffiche(3);
    calculeEtAffiche(5);
    calculeEtAffiche(6);
    calculeEtAffiche(7);
    calculeEtAffiche(10);
    calculeEtAffiche(20);
    calculeEtAffiche(50);
    calculeEtAffiche(75);
    calculeEtAffiche(100);
    calculeEtAffiche(1024);

    return 0;
}


