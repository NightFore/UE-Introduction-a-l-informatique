#include <stdio.h>
#include <stdlib.h>

int main()
{
    int moyenne;
    int note1 = 8; int note2 = 14;
    printf("La moyenne de %d et %d est %d\n", note1, note2, (note1+note2)/2);
    note1 = 4; note2 = 2;
    printf("La moyenne de %d et %d est %d\n", note1, note2, (note1+note2)/2);
    note1 = 13; note2 = 17;
    printf("La moyenne de %d et %d est %d\n", note1, note2, (note1+note2)/2);

    printf("\n");

    printf("Entrez la note entiere 1: ");
    scanf("%d", &note1);
    printf("Entrez la note entiere 2: ");
    scanf("%d", &note2);
    printf("La moyenne de %d et %d est %d\n", note1, note2, (note1+note2)/2);

    printf("\n");

    float fnote1;
    float fnote2;
    printf("Entrez la note decimal 1: ");
    scanf("%f", &fnote1);
    printf("Entrez la note decimal 2: ");
    scanf("%f", &fnote2);
    printf("La moyenne de %f et %f est %f\n", fnote1, fnote2, (fnote1+fnote2)/2);


    return 0;
}
