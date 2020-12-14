void saisirbateaux1(Tableau T1)
{
    int x, y, z;
    printf("Veuillez chosir l'emplacement de votre bateau. \n\n");
    printf("Position horizontale du bateau :");
    scanf("%d", &x);
    printf("\n");
    printf("Position verticale du bateau :");
    scanf("%d", &y);
    printf("Choisir la direction du bateau \n\n");

    if (T1[x-1][y] != '  ~' )
        {
            printf("1.  Haut \n");
            printf("2.  Droite \n");
            printf("3.  Bas \n");
        }
        else if (T1[x+1][y] != '  ~' )
            {
                printf("1.  Haut \n");
                printf("3.  Bas \n");
                printf("4.  Gauche \n");
            }
            else if (T1[x][y-1] == NULL )
                {
                    printf("1.  Haut \n");
                    printf("2.  Droite \n");
                    printf("4.  Gauche \n");
                }
                else if (T1[x][y+1] == NULL )
                    {
                        printf("2.  Droite \n");
                        printf("3.  Bas \n");
                        printf("4.  Gauche \n");
                    }
                    else if (T1[x-1][y-1] == NULL )
                        {
                            printf("2.  Droite \n");
                            printf("3.  Bas \n");
                        }
                        else if (T1[x-1][y+1] == NULL )
                            {
                                printf("1.  Haut \n");
                                printf("2.  Droite \n");
                            }
                            else if (T1[x+1][y-1] == NULL )
                                {
                                   printf("3.  Bas \n");
                                   printf("4.  Gauche \n");
                                }
                                else if (T1[x+1][y+1] == NULL )
                                    {
                                        printf("1.  Haut \n");
                                        printf("4.  Gauche \n");
                                    }
                                    else    printf("1.  Haut \n");
                                            printf("2.  Droite \n");
                                            printf("3.  Bas \n");
                                            printf("4.  Gauche \n");





}




//V2 

void saisirbateaux1(Tableau T1, int t)  
{
    int x, y, z, i, G, D, H, B;
    i = 1;
    G = 2;
    D = 2;
    H = 2;
    B = 2;
    printf("Veuillez chosir l'emplacement de votre bateau. \n\n");
    printf("Position horizontale du bateau :");
    scanf("%d", &x);
    printf("\n");
    printf("Position verticale du bateau :");
    scanf("%d", &y);
    printf("Vous avez choisi : %d %d \n", x, y) ;
    printf("Choisir la direction du bateau \n\n");

    if (y+1-t >= 0)
    {
        G = 1;
    }
    i = 1;
    while (i < t)
    {
        if (T1[x][y+1-i] == 'H')
        {
            G = 2;
        }
        i = i+1;
    }
    if (x+1-t >= 0)
    {
        H = 1;
    }
    i = 1;
    while (i < t)
    {
        if (T1[x+1-i][y] == 'H')
        {
            H = 2;
        }
        i = i+1;
    }
    if (y-1+t <=10 )
    {
        D = 1;
    }
    i = 1 ;
    while (i < t)
    {
        if (T1[x][y-1+i] == 'H')
        {
            D = 2;
        }
        i = i+1;
    }
    if (x-1+t <= 10 )
    {
        B = 1;
    }
    i = 1 ;
    while (i < t)
    {
        if (T1[x-1+i][y] == 'H')
        {
            B = 2;
        }
        i = i +1;
    }
    if (H == 1)
    {
        printf("1.  Haut \n");
    }
    if (G == 1)
    {
        printf("2.  Gauche \n");
    }
    if (D == 1)
    {
        printf("3.  Droite \n");
    }
    if (B == 1)
    {
        printf("4.  Bas \n");
    }
    scanf("%d", &z);
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
