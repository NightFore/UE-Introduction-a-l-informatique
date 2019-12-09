#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	int U;
	int U0=2; int U1=1;

	printf("U0 = %d\n", U0);
	printf("U1 = %d\n", U1);

	for (i=2; i<=20; i++)
	{
		U = U1+U0;
		U0 = U1;
		U1 = U;
		printf("U%d = %d\n", i, U);
	}

	return 0;
}
