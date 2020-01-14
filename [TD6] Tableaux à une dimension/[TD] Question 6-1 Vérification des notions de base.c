#include <stdio.h>
#include <stdlib.h>

int doubler(int a)
{
	return a*2;
}

void tableau(int tab[10])
{
	int i;

	/* On affiche a present le tableau complet */
	printf("Voici le tableau que vous avez rempli :\n");
	for (i = 0; i < 10; i++)
	{
		tab[i] = doubler(tab[i]);
		printf("%d ", tab[i]);
	}
}

int main ()
{
	int tab[10];
	/* un tableau de 10 entiers est initialisee */

	int i ;
	/* On demande a l’utilisateur de remplir les 10 cases du tableau */
	for (i = 0; i < 10; i++)
	{
		printf("Quelle valeur pour la case %d ?\n", i);
		scanf ("%d", &tab[i]);
	}

	printf("\n");
	tableau(tab);
	printf("\n");

	return 0 ;
}
