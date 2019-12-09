#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int secret = 82;
    int nombre;
    for (i=0; i<10; i++)
    {
        if (nombre != secret)
        {
            printf("Veuillez saisir un nombre (tentative %d): ", i+1);
            scanf("%d", &nombre);

            if (nombre<secret)
            {
                printf("Plus grand!\n");
            }

            if (nombre>secret)
            {
                printf("Plus petit!\n");
            }
            printf("\n");
        }
    }

    if (nombre == secret)
    {
        printf("Vous avez gagne!\n");
    }

    else
    {
        printf("Vous avez perdu...\n");
    }

	return 0;
}
