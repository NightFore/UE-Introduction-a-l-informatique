#include <stdio.h>

void init_grille(int tab[10][10]);
void affiche_grille(int tab[10][10]);
int broder(int tab[10][10], int x, int y);
int verifier_broder(int tab[10][10]);

int main ()
{
	int tab[10][10];
    int x; int y;
	int erreur = 0;
	int temp;

	init_grille(tab);

	do
    {
        affiche_grille(tab);

        printf("Entrez la position X: ");
        scanf("%d", &y);

        printf("Entrez la position Y: ");
        scanf("%d", &x);

        temp = broder(tab, x, y);
        if (temp == 1)
        {
            printf("Invalide!\n");
            erreur++;
        }
    } while (verifier_broder(tab) != 0);

	return 0 ;
}



void init_grille(int tab[10][10])
{
	int i; int j;
    for (i=0; i<10; i++)
    {
        for (j=0; j<10; j++)
        {
            tab[i][j] = 0;
        }
    }
}

void affiche_grille(int tab[10][10])
{
	int i; int j;
    for (i=0; i<10; i++)
    {
        for (j=0; j<10; j++)
        {
            if (tab[i][j] == 1)
            {
                printf("X ", tab[i][j]);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n");
}

int broder(int tab[10][10], int x, int y)
{
    if (tab[x][y] == 0 && 0<x<9 && 0<y<9)
    {
        tab[x][y] = 1;
        return 0;
    }
    else
    {
        return 1;
    }
    print("\n");
}

int verifier_broder(int tab[10][10])
{
    int i; int j;

    for (i=0; i<10; i++)
    {
        for (j=0; j<10; j++)
        {
            if (tab[i][j] == 0)
            {
                return 1;
            }
        }
    }
    return 0;
}
