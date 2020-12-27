#include "Facile.h"
#include "tableau.h"
#include "Tour_joueur.h"
#include "SaisirBateau.h"

void facile()
{
    int continueTourIA ;
    int partie;
    int continueTourJoueur = 0;
    int x, y, k, l ;
    int t = 1;
    int i = 0;
    int j = 0;
    int nombreBateauJoueur = 0;
    int nombreBateauIA = 0;
    Tableau T1;
    GenererTab1(T1);
    afficher(T1);
    printf("placez votre Torpilleur (2 cases) \n");
    saisirBateauxJoueur(T1, 2);
    printf("placez votre premier contre-torpilleurs (3 cases) \n");
    saisirBateauxJoueur(T1, 3);
    printf("placez votre second contre-torpilleurs (3 cases) \n");
    saisirBateauxJoueur(T1, 3);
    printf("placez votre croiseur (4 cases) \n");
    saisirBateauxJoueur(T1, 4);
    printf("placez votre porte-avions (5 cases) \n");
    saisirBateauxJoueur(T1, 5);
    Tableau T2;
    Tableau T2_vue_joueur;
    GenererTab1(T2);
    printf("l'IA place ses bateaux... \n") ;
    saisirBateauxIA(T2, 2);
    printf("..") ;
    saisirBateauxIA(T2, 3);
    printf("...") ;
    saisirBateauxIA(T2, 3);
    printf("...") ;
    saisirBateauxIA(T2, 4);
    printf("....") ;
    saisirBateauxIA(T2, 5);
    printf(".....") ;
    while(t != 0)
    {
        printf("\n %d \n", t);
        i = 0;
        j = 0;
        while (i <= 11)
        {
            while (j <= 11)
            {
                T2_vue_joueur[i][j] = T2[i][j];
                if (T2_vue_joueur[i][j] == 'H')
                {
                    T2_vue_joueur[i][j] = '~';
                }
                j = j + 1;
            }
            j = 0;
            i = i + 1;
        }
        printf("Emplacement flotte adverse : \n");
        afficher(T2_vue_joueur);
        printf("\n Tour n %d \n", t);
        printf("debug : reste tour %d \n", t%2);
        if (t%2 == 0){
                /*continueTourJoueur = 0 ;
                while (continueTourJoueur != 1)
                {
                    system("cls");
                    printf("sauvegarder où continuer ? \n 1.sauvegarder. \n 2.continuer. \n");
                    scanf("%d", &partie);
                    if (partie == 1)
                    {
                        //sauvegarde
                        continueTourJoueur = 1;
                    }
                    if (partie == 2)
                    {
                        */tour_joueur(T2);/*
                        continueTourJoueur = 1;
                    }
                }*/

        }
        else {
                printf("Tour de l'IA :");
                continueTourIA = 0;
                int p = 0;
                while (continueTourIA != 1)
                {
                    p = p+1;
                    srand(time(NULL));
                    x = ((rand()+p)%9)+1;
                    y = ((rand()+p)%9)+1;
                    if (T1[x][y] == 'O')
                    {
                        printf(".")
                    }
                    if (T1[x][y] == '~')
                    {
                        T1[x][y] = 'O' ;
                        continueTourIA = 1;
                    }
                    if (T1[x][y] == 'H')
                    {
                        T1[x][y] = 'X' ;
                        continueTourIA = 1;
                    }
                }
                printf("l'IA tir en %d, %d \n", y, x);
                printf("Votre flotte : \n");
                afficher(T1);
        }
        nombreBateauJoueur = 0;
        for(k = 1; k < 11; k++)
        {
            for(l = 1; l < 11; l++)
            {
                if (T1[k][l] == 'H')
                {
                    nombreBateauJoueur = nombreBateauJoueur + 1;
                }
            }
        }
        nombreBateauIA = 0;
        for(k = 1; k < 11; k++)
        {
            for(l = 1; l < 11; l++)
            {
                if (T2[k][l] == 'H')
                {
                    nombreBateauIA = nombreBateauIA + 1;
                }
            }
        }
        t = t+1 ;
        if (nombreBateauIA == 0)
        {
            system("cls");
            printf("\n VICTOIRE !\n");
            t = 0;
        }
        if (nombreBateauJoueur == 0)
        {
            system("cls");
            printf("\n DEFAITE !\n");
            t = 0;
        }
    }
    printf("Appuyez sur n'importe quelle touche pour continuer.")
}
