#include <stdio.h>
#include <stdlib.h>

int main()
{
	int continu;

	do
    {
		printf("Veuillez entrer une valeur (0 pour quitter le programme): \n");
		scanf("%d", &continu);
	} while (continu != 0);

	printf("Sortie du programme %d\n", continu);

	return 0;
}
