#include <stdio.h>
#include <stdlib.h>

int main()
{
	int nombre = 0;
	int increment = 0;

    while (nombre == 0)
    {
        printf("Entrez une valeur autre que 0: ");
        scanf("%d", &nombre);
    }

	printf("u%d = %d\n", increment, nombre);
	do
	{
		if (nombre % 2 == 0)
		{
			nombre /= 2;
		}

		else
		{
			nombre = nombre*3 + 1;
		}

		increment++;
		printf("u%d = %d\n", increment, nombre);

	} while (nombre != 1);

	return 0;
}

