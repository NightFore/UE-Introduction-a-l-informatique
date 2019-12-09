#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i; int n;

	printf("Veuillez saisir le nombre de termes n: ");
	scanf("%d", &n);

	printf("dec\toct\thex\n");
	for (i=0; i<=n; i++)
	{
		printf("%d\t%o\t%x\n", i, i, i);
	}

	return 0;
}
