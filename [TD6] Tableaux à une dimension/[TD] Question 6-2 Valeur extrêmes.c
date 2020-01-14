#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int i;
	int min; int imin;
	int max; int imax;
	int tab[10];

	for (i = 0 ; i < 10 ; i++)
	{
		printf("Veuillez saisir la valeur de la case %d: \n", i);
		scanf ("%d", &tab[i]);

		if (i == 0)
        {
            min = tab[i]; imin = i;
            max = tab[i]; imax = i;
        }

		if (tab[i] < min)
		{
			min = tab[i];
			imin = i;
		}

		if (tab[i] > max)
		{
			max = tab[i];
			imax = i;
		}
	}

	printf("La valeur minimale est %d a l'indice %d\n", min, imin);
	printf("La valeur maximale est %d a l'indice %d\n", max, imax);

	return 0;
}
