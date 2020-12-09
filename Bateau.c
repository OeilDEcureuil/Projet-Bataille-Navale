#include"Bateau.h"
#include"Tableau.h"

void saisirbateaux1(Tableau T1, int t)
{
    int x, y, z, accès;
    while (accès = 0);{
        printf("Veuillez chosir l'emplacement de votre bateau. \n\n");
        printf("Position horizontale du bateau :");
        scanf("%d", &x);
        printf("\n");
        printf("Position verticale du bateau :");
        scanf("%d", &y);
        printf("Vous avez choisi : %d %d", x, y) ;

        if (T1[x][y] == 'H') {
            printf("Veuillez recommencer vos choix.");
            } else accès = 1;
    }

        printf("Choisir la direction du bateau \n\n");



    if (x-t >= 0)
    {
        printf("2.  Gauche \n");
    }
    if (y-t >= 0)
    {
        printf("1.  Haut \n");
    }
    if (x+t <=10 )
    {
        printf("3.  Droite \n");
    }
    if (y+t <= 10 )
    {
        printf("4.  Bas \n");
    }
    scanf("%d", &z);
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
