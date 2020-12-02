#include"Bateau.h"
#include"Tableau.h"

int PositionBateaux(Tableau T1, int x, int y)
{

    printf("Veuillez chosir l'emplacement de votre bateau. \n\n");
    printf("Position horizontale du bateau :");
    scanf("%d", &x);
    printf("\n");
    printf("Position verticale du bateau :");
    scanf("%d", &y);
    return (T1,x,y);
}

void DirectionBateau(Tableau T1, int x, int y)
{
    printf("Choisir la direction du bateau \n\n" );

    if (T1[x-1][y-1] != 0 )
        {
            printf("2.  Droite \n");
            printf("3.  Bas \n");
        }

       if (T1[x-1][y+1] != 0 )
            {
                printf("1.  Haut \n");
                printf("2.  Droite \n");
            }
        else if (T1[x+1][y-1] != 0 )
                {
                    printf("3.  Bas \n");
                    printf("4.  Gauche \n");
                }
            else if (T1[x+1][y+1] != 0 )
                    {
                        printf("1.  Haut \n");
                        printf("4.  Gauche \n");
                    }
                else if (T1[x-1][y] != 0 )
                        {
                            printf("1.  Haut \n");
                            printf("2.  Droite \n");
                            printf("3.  Bas \n");
                        }
                    else if (T1[x+1][y] != 0 )
                            {
                                printf("1.  Haut \n");
                                printf("3.  Bas \n");
                                printf("4.  Gauche \n");
                            }
                        else if (T1[x][y-1] != 0 )
                                {
                                    printf("1.  Haut \n");
                                    printf("2.  Droite \n");
                                    printf("4.  Gauche \n");
                                }
                            else if (T1[x][y+1] != 0 )
                                    {
                                        printf("2.  Droite \n");
                                        printf("3.  Bas \n");
                                        printf("4.  Gauche \n");
                                    }

                                    else    printf("1.  Haut \n");
                                            printf("2.  Droite \n");
                                            printf("3.  Bas \n");
                                            printf("4.  Gauche \n");





}

