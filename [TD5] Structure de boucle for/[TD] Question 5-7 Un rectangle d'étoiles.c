#include <stdio.h>
#include <stdlib.h>

int main()
{
	int l; int c;
	int i; int j;

	printf("Veuillez saisir le nombre de lignes: ");
	scanf("%d", &l);

	printf("Veuillez saisir le nombre de colonnes: ");
	scanf("%d", &c);

	for (i=0; i<l; i++)
	{
		for (j=0; j<c; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
