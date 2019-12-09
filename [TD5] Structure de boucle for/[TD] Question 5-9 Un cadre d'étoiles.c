#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i; int j;
	int l; int c;

	printf("Veuillez saisir le nombre de lignes: ");
	scanf("%d", &l);

	printf("Veuillez saisir le nombre de colonnes: ");
	scanf("%d", &c);

	for (i=0; i<l; i++)
    {
        for (j=0; j<c; j++)
        {
            if ((i == 0) || (j == 0) || (i == l-1) || (j == c-1))
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
