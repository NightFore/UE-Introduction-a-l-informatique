#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 0;
	printf("Programme 1 (While)\n");
	while(i<=100)
	{
		if (i%2 == 0)
		{
			printf("%d\n", i);
		}
		i++;
	}

    printf("\n");

    int j = 0;
	printf("Programme 2 (For)\n");
	for(j=0; j<=100; j=j+2)
	{
		printf("%d\n", j);
	}

	return 0;
}
