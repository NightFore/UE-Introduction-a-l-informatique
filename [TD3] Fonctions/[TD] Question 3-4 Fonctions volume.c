#include <stdio.h>
#include <stdlib.h>

int volumeCube(int a)
{
    return a*a*a;
}

float volumeCylindre(float h, float r)
{
    return 3.14*r*r*h;
}

float volumeSphere(float r)
{
    return 4/3*3.14*r*r*r;
}

int volume(int type)
{
    int a; float h; float r;
    switch(type)
    {
        case 1:
            printf("Entrez la valeur de l'arete du cube: ");
            scanf("%d", a);
            printf("Le volume du cube est egal a: %d\n", volumeCube(a));
            break;
        case 2:
            printf("Entrez la hauteur du cylindre: ");
            scanf("%f", &h);
            printf("Entrez le rayon du cylindre: ");
            scanf("%f", &r);
            printf("Le volume du cylindre est egal a: %f\n", volumeCylindre(h, r));
            break;
        case 3:
            printf("Entrez le rayon de la sphere: ");
            scanf("%f", &r);
            printf("Le volume de la sphere est egal a: %f\n", volumeSphere(r));
            break;
    }
}

int main()
{
    int type;
    printf("Entrez une valeur (1 = Cube, 2 = Cylindre, 3 = Sphere): ");
    scanf("%d", &type);
    volume(type);

    return 0;
}
