#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i; int j;
	int l;

	printf("Veuillez saisir le nombre de lignes: ");
	scanf("%d", &l);

	for (i=0; i<l; i++)
	{
		for (j=0; j<l; j++)
		{
			if (i>j)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}
