#include <stdio.h>

void doubleLesImpairs(int tab[], int len_tab)
{
	int i;

	for (i=0; i<len_tab; i++)
	{
		if (i % 2 != 0)
		{
			tab[i] = tab[i] * 2;
		}
	}
}


int main ()
{
	int tab[100]; int len_tab;
	int i;


	printf("Quelle est la taille du tableau?\n");
	scanf ("%d", &len_tab);

	for (i = 0 ; i < len_tab ; i = i + 1)
	{
		printf("Quelle valeur pour la case %d ?\n", i);
		scanf ("%d", &tab[i]);
	}

	doubleLesImpairs(tab, len_tab);

	for (i=0; i<len_tab; i++)
	{
		printf("%d\n", tab[i]);
	}

	return 0;
}
