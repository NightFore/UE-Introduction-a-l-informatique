#include <stdio.h>
#include <stdlib.h>

int main()
{
	int secret = 42;
	int deviner;
	int tentative = 0;

	/* Tentative */
	do{
		printf("Quel le nombre secret? ");
		scanf("%d", &deviner);
		tentative += 1;

		if (secret < deviner)
        {
			printf("Plus petit!\n");
		}

		if (secret > deviner)
        {
			printf("Plus grand!\n");
		}

		printf("\n");
	} while (secret != deviner);

    /* Succès */
	printf("Gagné!\nNombre de tentative(s): %d\n", tentative);

	if (tentative == 1)
    {
		printf("N'est-ce pas tricheur?\n");
    }

	if ((tentative >= 2) && (tentative <= 5))
    {
		printf("Bien joué!\n");
    }

	if ((tentative >= 6) && (tentative <= 9))
    {
		printf("Pas mal!\n");
    }

	if (tentative == 10)
    {
		printf("Compliqué, n'est-ce pas?!\n");
    }

	if (tentative > 10)
    {
		printf("Mais t'es vraiment mauvais à ce jeu :)\n");
    }

	return 0;
}
