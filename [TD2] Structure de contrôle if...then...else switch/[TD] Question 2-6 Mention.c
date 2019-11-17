#include <stdio.h>
#include <stdlib.h>

int main()
{
    int moyenne;

    printf("Entrez la moyenne: ");
    scanf("%d", &moyenne);

    if (moyenne<10)
    {
        printf("Recalé");
    }
    else
    {
        if (moyenne<12)
        {
            printf("Passable");
        }
        else
        {
            if (moyenne<14)
            {
                printf("Assez bien");
            }
            else
            {
                if (moyenne<16)
                {
                    printf("Bien");
                }
                else
                {
                    printf("Très bien");
                }
            }
        }
    }



    return 0;
}


