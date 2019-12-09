#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    /* Exemple 1*/
	printf("Exemple 1\n");
    i = 10;

	do
    {
        printf ("iteration %d \n", i);
        i = i + 1;
	} while ( i < 10 );
	printf("valeur de i apres la boucle : %d \n", i);

	printf("\n");

    /* Exemple 2 */
	printf("Exemple 2\n");
	i = 10;

	while(i<10)
    {
		printf("iteration %d\n", i);
		i = i + 1;
	}
	printf("valeur de i apres la boucle : %d\n", i);

	return 0;
}
