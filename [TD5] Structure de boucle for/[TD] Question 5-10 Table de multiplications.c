#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i; int j;

	printf("x*y\t|");
	for (i=1; i<=10; i++)
	{
		printf("%d\t", i);
	}

	printf("\n--------------------------------------------------------------------------------\n");

	for (i=1; i<=10; i++)
	{
		printf("%d\t|", i);

		for (j=1; j<=10; j++)
		{
			printf("%d\t", i*j);
		}
		printf("\n");
	}

	return 0;
}
