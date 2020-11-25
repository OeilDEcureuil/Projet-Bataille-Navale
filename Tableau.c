#include "Tableau.h"

typedef char Tableau[10][10];

int GenererTab1(Tableau T1)
{
    int i, j;

    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 10; j++)
        {
            T1[i][j] = '~';
        }
    }
    return T1;
}

void afficher(Tableau T1)
{
    int i, j;

    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 10; j++)
        {
           printf("  %c", T1[i][j]);
        }
        printf("\n");
    }
}
