#include <stdio.h>
#include <stdlib.h>

int estUnNombreParfait(int nombre);

int main()
{
	int increment = 0;

	while (increment < 10000)
	{
		increment++;
        if (estUnNombreParfait(increment) == 1)
        {
            printf("%d est un nombre parfait\n", increment);
        }
	}

	return 0;
}



int estUnNombreParfait(int nombre)
{
	int k = 1;
	int somme = 0;

    while(k < nombre)
	{
		if ((nombre % k) == 0)
		{
			somme += k;
		}
        k++;
	}

	if (nombre == somme)
	{
		return 1;
	}

    return 0;
}
