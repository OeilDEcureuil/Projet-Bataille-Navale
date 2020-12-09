#include"Bateau.h"
#include"Tableau.h"

int PositionBateaux( int x, int y, Tableau T1)
{

    printf("Veuillez chosir l'emplacement de votre bateau. \n\n");
    printf("Position horizontale du bateau :");
    scanf("%d", &x);
    printf("\n");
    printf("Position verticale du bateau :");
    scanf("%d", &y);
   //return (x,y);
//}

//void DirectionBateau(Tableau T1, int x, int y)
//{

    printf("Choisir la direction du bateau \n\n" );

    if (T1[x-1][y-1] != '~' )
        {
            printf("2.  Droite \n");
            printf("3.  Bas \n");
        }

       if (T1[x-1][y+1] != '~' )
            {
                printf("1.  Haut \n");
                printf("2.  Droite \n");
            }
        else if (T1[x+1][y-1] != '~' )
                {
                    printf("3.  Bas \n");
                    printf("4.  Gauche \n");
                }
            else if (T1[x+1][y+1] != '~' )
                    {
                        printf("1.  Haut \n");
                        printf("4.  Gauche \n");
                    }
                else if (T1[x-1][y] != '~' )
                        {
                            printf("1.  Haut \n");
                            printf("2.  Droite \n");
                            printf("3.  Bas \n");
                        }
                    else if (T1[x+1][y] != '~' )
                            {
                                printf("1.  Haut \n");
                                printf("3.  Bas \n");
                                printf("4.  Gauche \n");
                            }
                        else if (T1[x][y-1] != '~' )
                                {
                                    printf("1.  Haut \n");
                                    printf("2.  Droite \n");
                                    printf("4.  Gauche \n");
                                }
                            else if (T1[x][y+1] != '~' )
                                    {
                                        printf("2.  Droite \n");
                                        printf("3.  Bas \n");
                                        printf("4.  Gauche \n");
                                    }

                                    else    printf("1.  Haut \n");
                                            printf("2.  Droite \n");
                                            printf("3.  Bas \n");
                                            printf("4.  Gauche \n");

        printf("\n \n");
        return 0;
}

int bateau2case(Tableau T1, int x, int y){
        int z =0;
        scanf("%d",z);
        if (z == 1) {
            T1[x][y] = '#';
            T1[x][y-1] = '#';
            return T1;
        }
        else return 0;




}

