#include "tableau.h"
#include "SaisirBateau.h"
#define    RAND_MAX  9
#define    RAND_MIN  0


void saisirBateauxJoueur(Tableau T1, int t)
{
    int x, y, z, i, G, D, H, B, compteur, activation, recommence;
    i = 1;
    G = 2;
    D = 2;
    H = 2;
    B = 2;
    activation = 0;
    compteur = 0;
    while (activation == 0)
    {
        printf("Veuillez choisir l'emplacement de votre bateau. \n\n");
        printf("\n colonne de placement du bateau :");
        recommence = 1;
        while (recommence != 0)
        {
            scanf("%d", &y);
            /*printf("%d", y);
            y = y/1;
            printf("%d", y);
            scanf("%d", &x);*/
            if (y > 0)
            {
                if (y < 11)
                {
                    recommence = 0;
                }
                else {printf("entrez un nombre compris entre 1 et 10 \n colonne de placement du bateau :");}
            }
            else {printf("entrez un nombre compris entre 1 et 10 \n colonne de placement du bateau :");}
        }
        printf("\n ligne de placement du bateau :");
        recommence = 1;
        while (recommence != 0)
        {
            scanf("%d", &x);
            x = x/1;
            if (x > 0)
            {
                if (x < 11)
                {
                    recommence = 0;
                }
                else {printf("entrez un nombre compris entre 1 et 10 \n ligne de placement du bateau :");}
            }
            else {printf("entrez un nombre compris entre 1 et 10 \n ligne de placement du bateau :");}
        }
        recommence = 1;
        while (recommence != 0)
        {
            printf("\n Vous avez choisi : %d %d \n", x, y);
            printf("Choisir la direction du bateau \n\n");
            if (y-t >= 0)
            {
                G = 1;
            }
            i = 1;
            while (i < t)
            {
                if (T1[x][y-i] == 'H')
                {
                    G = 2;
                }
                i = i+1;
            }
            if (x-t >= 0)
                {
                    H = 1;
                }
            i = 1;
            while (i < t)
            {
                if (T1[x-i][y] == 'H')
                {
                    H = 2;
                }
                i = i+1;
            }
            if (y+t <=10 )
            {
                    D = 1;
                }
            i = 1 ;
            while (i < t)
            {
                if (T1[x][y+i] == 'H')
                {
                    D = 2;
                }
                i = i+1;
            }
            if (x+t <= 10 )
            {
                B = 1;
            }
            i = 1 ;
            while (i < t)
            {
            if (T1[x+i][y] == 'H')
            {
                B = 2;
            }
            i = i +1;
            }
            if (H == 1)
            {
                printf("1.  Haut \n");
                compteur = compteur + 1 ;
            }
            if (G == 1)
            {
                printf("2.  Gauche \n");
                compteur = compteur + 1 ;
            }
            if (D == 1)
            {
                printf("3.  Droite \n");
                compteur = compteur + 1 ;
            }
            if (B == 1)
            {
                printf("4.  Bas \n");
                compteur = compteur + 1 ;
            }
            if (compteur == 0)
            {
                printf("erreur : bateau implassable.");

            }
                else
                {
                    activation = 1;
                }


            scanf("%d", &z);
            z = z/1;
            if (z > 0)
            {
                if (z < 5)
                {
                    recommence = 0;
                }
                else {printf("entrez un chiffre compris entre 1 et 4 \n");}
            }
            else {printf("entrez un chiffre compris entre 1 et 4 \n");}
        }
    if (H != 1)
    {
        if (z == 1)
        {
            activation = 0;
        }
    }
    if (G != 1)
    {
        if (z == 2)
        {
            activation = 0;
        }
    }
    if (D != 1)
    {
        if (z == 3)
        {
            activation = 0;
        }
    }
    if (B != 1)
    {
        if (z == 4)
        {
            activation = 0;
        }
    }
}
    i = 0;
    if (z == 1)
    {
        while (i < t)
        {
            T1[x-i][y] = 'H' ;
            i = i+1;
        }
    }
    if (z == 2)
    {
        while (i < t)
        {
            T1[x][y-i] = 'H' ;
            i = i+1;
        }
    }
    if (z == 3)
    {
        while (i < t)
        {
            T1[x][y+i] = 'H' ;
            i = i+1;
        }
    }
    if (z == 4)
    {
        while (i < t)
        {
            T1[x+i][y] = 'H' ;
            i = i+1;
        }
    }


    afficher(T1);
}


void saisirBateauxIA(Tableau T1, int t)
{
    int x, y, z, i, G, D, H, B, compteur, activation;
    i = 1;
    G = 2;
    D = 2;
    H = 2;
    B = 2;
    activation = 0;
    compteur = 0;
    while (activation == 0)
    {
        srand(time(NULL)) ;
        x = (rand()%9)+1;
        y = (rand()%9)+1;
        if (y-t >= 0)
        {
            G = 1;
        }
        i = 1;
        while (i < t)
        {
            if (T1[x][y-i] == 'H')
            {
                G = 2;
            }
            i = i+1;
        }
        if (x-t >= 0)
            {
                H = 1;
            }
        i = 1;
        while (i < t)
        {
            if (T1[x-i][y] == 'H')
            {
                H = 2;
            }
            i = i+1;
        }
        if (y+t <=10 )
        {
                D = 1;
            }
        i = 1 ;
        while (i < t)
        {
            if (T1[x][y+i] == 'H')
            {
                D = 2;
            }
            i = i+1;
        }
        if (x+t <= 10 )
        {
            B = 1;
        }
        i = 1 ;
        while (i < t)
        {
        if (T1[x+i][y] == 'H')
        {
            B = 2;
        }
        i = i +1;
        }
        if (H == 1)
        {
            //printf("1.  Haut \n");
            compteur = compteur + 1 ;
        }
        if (G == 1)
        {
            //printf("2.  Gauche \n");
            compteur = compteur + 1 ;
        }
        if (D == 1)
        {
            //printf("3.  Droite \n");
            compteur = compteur + 1 ;
        }
        if (B == 1)
        {
            //printf("4.  Bas \n");
            compteur = compteur + 1 ;
        }
        if (compteur == 0)
        {
            //printf("erreur : bateau implassable.");

        }
            else
            {
                activation = 1;
            }
    //scanf("%d", &z);
    z = rand();
    z = (z%3)+1 ;
    if (H != 1)
    {
        if (z == 1)
        {
            activation = 0;
        }
    }
    if (G != 1)
    {
        if (z == 2)
        {
            activation = 0;
        }
    }
    if (D != 1)
    {
        if (z == 3)
        {
            activation = 0;
        }
    }
    if (B != 1)
    {
        if (z == 4)
        {
            activation = 0;
        }
    }
}
    i = 0;
    if (z == 1)
    {
        while (i < t)
        {
            T1[x-i][y] = 'H' ;
            i = i+1;
        }
    }
    if (z == 2)
    {
        while (i < t)
        {
            T1[x][y-i] = 'H' ;
            i = i+1;
        }
    }
    if (z == 3)
    {
        while (i < t)
        {
            T1[x][y+i] = 'H' ;
            i = i+1;
        }
    }
    if (z == 4)
    {
        while (i < t)
        {
            T1[x+i][y] = 'H' ;
            i = i+1;
        }
    }


    //afficher(T1);
}

