#include "Facile.h"
#include "tableau.h"
#include "Tour_joueur.h"
#include "SaisirBateau.h"

void facile()
{
    int x ;
    int y ;
    int t = 1;
    Tableau T1;
    GenererTab1(T1);
    afficher(T1);
    printf("placez votre Torpilleur (2 cases) \n");
    saisirbateaux1(T1, 2);
    printf("placez votre premier contre-torpilleurs (3 cases) \n");
    saisirbateaux1(T1, 3);
    printf("placez votre second contre-torpilleurs (3 cases) \n");
    saisirbateaux1(T1, 3);
    printf("placez votre croiseur (4 cases) \n");
    saisirbateaux1(T1, 4);
    printf("placez votre porte-avions (5 cases) \n");
    saisirbateaux1(T1, 5);
    Tableau T2;
    printf("l'IA place ses bateaux... \n") ;
    //placer aléatoirement les bateaux sur le plateau
    while(t != 0){
        t = t+1 ;
        if (t%2 == 0){
            tour_joueur(T1,T2);
        }
        else {
           srand(time(NULL)) ;
            x = rand();
            y = rand();
            if (T1[x][y] == '~') {
                T1[x][y] = 'O' ; }
                else {
                    T1[x][y] = 'X'; }
        }
    }
}
