#include"Bateau.h"
#include"Tableau.h"

int PositionBateaux(Tableau T1, int t, int *x, int *y, int *z)
{
    int  acces;
    while (acces = 0);{
        printf("Veuillez chosir l'emplacement de votre bateau. \n\n");
        printf("Position horizontale du bateau :");
        scanf("%d", &x);
        printf("\n");
        printf("Position verticale du bateau :");
        scanf("%d", &y);
        printf("Vous avez choisi : %p %p", &x, &y) ;

        //if (T1[x][y] == 'H') {
        //    printf("Veuillez recommencer vos choix.");
        //    } else acces = 1;
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
    return *x , *y , *z;
}



int bateau2case(Tableau T1, int x, int y){
        int z =0;
        scanf("%d",&z);
        if (z == 1) {
            T1[x][y] = '#';
            T1[x][y-1] = '#';
            return T1;
        }
        else if (z == 2) {
            T1[x][y] = '#';
            T1[x-1][y] = '#';
            return T1;
        }
        else if (z == 3) {
            T1[x][y] = '#';
            T1[x+1][y] = '#';
            return T1;
        }
        else if (z == 4) {
            T1[x][y] = '#';
            T1[x][y+1] = '#';
            return T1;
        }
}
int bateau3case(Tableau T1, int x, int y){
        int z =0;
        scanf("%d",&z);
        if (z == 1) {
            T1[x][y] = '#';
            T1[x][y-1] = '#';
            T1[x][y-2] = '#';
            return T1;
        }
        else if (z == 2) {
            T1[x][y] = '#';
            T1[x-1][y] = '#';
            T1[x-2][y] = '#';
            return T1;
        }
        else if (z == 3) {
            T1[x][y] = '#';
            T1[x+1][y] = '#';
            T1[x+2][y] = '#';
            return T1;
        }
        else if (z == 4) {
            T1[x][y] = '#';
            T1[x][y+1] = '#';
            T1[x][y+2] = '#';
            return T1;
        }



}

int bateau4case(Tableau T1, int x, int y){
        int z =0;
        scanf("%d",&z);
        if (z == 1) {
            T1[x][y] = '#';
            T1[x][y-1] = '#';
            T1[x][y-2] = '#';
            T1[x][y-3] = '#';
            return T1;
        }
        else if (z == 2) {
            T1[x][y] = '#';
            T1[x-1][y] = '#';
            T1[x-2][y] = '#';
            T1[x-3][y] = '#';
            return T1;
        }
        else if (z == 3) {
            T1[x][y] = '#';
            T1[x+1][y] = '#';
            T1[x+2][y] = '#';
            T1[x+3][y] = '#';
            return T1;
        }
        else if (z == 4) {
            T1[x][y] = '#';
            T1[x][y+1] = '#';
            T1[x][y+2] = '#';
            T1[x][y+3] = '#';
            return T1;
        }



}

int bateau5case(Tableau T1, int x, int y){
        int z =0;
        scanf("%d",&z);
        if (z == 1) {
            T1[x][y] = '#';
            T1[x][y-1] = '#';
            T1[x][y-2] = '#';
            T1[x][y-3] = '#';
            T1[x][y-4] = '#';
            return T1;
        }
        else if (z == 2) {
            T1[x][y] = '#';
            T1[x-1][y] = '#';
            T1[x-2][y] = '#';
            T1[x-3][y] = '#';
            T1[x-4][y] = '#';
            return T1;
        }
        else if (z == 3) {
            T1[x][y] = '#';
            T1[x+1][y] = '#';
            T1[x+2][y] = '#';
            T1[x+3][y] = '#';
            T1[x+4][y] = '#';
            return T1;
        }
        else if (z == 4) {
            T1[x][y] = '#';
            T1[x][y+1] = '#';
            T1[x][y+2] = '#';
            T1[x][y+3] = '#';
            T1[x][y+4] = '#';
            return T1;
        }



}
