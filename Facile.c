#include "Facile.h"



typedef Tableau[];

void facile()
{
    int t = 1;
    Tableau T1;
    GenererTab1(T1);
    afficher(T1);
    saisirbateaux(T1);
    Tableau T2;
    printf("l'IA place ses bateaux...") ;
    //placer aléatoirement les bateaux sur le plateau
    while(t != 0){
        t = t+1 ;
        if (t%2 == 0){
            tour_joueur();
        }
        else {
            rand();
        }
    }
}
