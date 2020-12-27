#include <stdio.h>
#include <stdlib.h>
#include "Facile.h"
#include "Moyen.h"
#include "Versus.h"
#include "tableau.h"


void main(){
    int decompte = 0;
    int c ;
    while (decompte == 0)
    {
        system("cls");
        printf("Choississez une option : \n 1. IA facile. ; \n 2. IA moyenne. ; \n 3. joueur contre joueur. \n 4. quitter le programme. \n \n ") ;
        scanf("%d", &c);
        c = c/1;
        if (c == 1) {
            printf("Vous avez choisis : contre IA en facile. \n");
            facile();
        }
        else if (c == 2) {
            printf("Vous avez choisis : contre IA en moyen. \n");
            //démarrer le programme Moyen
        }
        else if (c == 3) {
            printf("Vous avez choisis : joueur contre joueur. \n");
            //démarrer le programme Versus
        }
        else if (c == 4){
            printf("fin du programme. \n");
            decompte = 1 ;
        }
        else {
            printf("Erreur : veuillez choisir une option disponible. \n");
        }
    }

    //Tableau T1;
    //GenererTab1(T1);
    //afficher(T1);

}

