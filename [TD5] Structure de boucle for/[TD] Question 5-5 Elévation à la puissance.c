#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
	int x0; int x; int n;

	printf("Veuillez saisir la valeur de x: ");
	scanf("%d", &x);
	x0 = x;

	printf("Veuillez saisir la puissance de x: ");
	scanf("%d", &n);

	for (i=0; i<n; i++)
	{
		printf("x^%d = %d\n", i+1, x);
		x = x * x0;
	}

	return 0;
}
