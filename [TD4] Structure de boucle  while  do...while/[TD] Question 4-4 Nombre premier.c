#include <stdio.h>
#include <stdlib.h>

int estUnNombrePremier(int nombre);

int main()
{
	int i = 0;
	int n_premier = 0;

	while (n_premier < 100)
	{
		i++;
		if (estUnNombrePremier(i) == 1)
		{
            n_premier++;
			printf("Nombre premier %d: %d\n", n_premier, i);
		}
	}

	return 0;
}



int estUnNombrePremier(int nombre)
{
	int j = 2;

	while(j < nombre)
	{
		if ((nombre % j) == 0)
		{
			return 0;
		}
        j++;
	}

	return 1;
}
