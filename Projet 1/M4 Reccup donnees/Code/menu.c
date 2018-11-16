#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "donnees.h"
void presentation (tableauxoriginal tbltrieoriginal,tableaux tbltrie)
{
    int i;
    int etoile1,etoile2;
    int a;
    int quoi=9;//variable qui permet de savoir ce que veut l'utilisateur
    int nbr1,nbr2;
    int temps;
    int pouls;
    int nbr_de_pouls=0;
    int numero_de_case;
    a=nbrl(); //a deviens le nombre de lignes
    while (quoi!=0)
    {
        for (etoile1=0;etoile1<76;etoile1++)
        {
            printf("*");
        }
        printf("\n");
        printf("*   -Tapez 1 Si vous voulez les donnees triees par temps croissant         *\n");
        printf("*   -Tapez 2 Si vous voulez les donnees triees par temps decroissant       *\n");
        printf("*   -Tapez 3 Si vous voulez les donnees triees par pouls croissant         *\n");
        printf("*   -Tapez 4 Si vous voulez les donnees triees par pouls decroissant       *\n");
        printf("*   -Tapez 5 Si vous voulez le pouls a un temps donne                      *\n");
        printf("*   -Tapez 6 Si vous voulez le pouls maximal et minimal                    *\n");
        printf("*   -Tapez 7 Si vous voulez la moyenne de pouls entre deux temps donnees   *\n");
        printf("*   -Tapez 8 Si vous voulez le nombre de lignes des tableaux               *\n");
        printf("*   -Tapez 0 Si vous voulez quitter le programme                           *\n");

        for (etoile2=0;etoile2<76;etoile2++)
        {
            printf("*");
        }
        printf("\n");
        printf("\n");
        printf("Choisissez ce que vous voulez ->");
        scanf("%d",&quoi);
        printf("\n");
        if (quoi==1)
        {
            printf("Voici les donnees par ordre croissant de temps:\n");
            affichagedesvaleurstrieescroitmps(tbltrieoriginal);//Affiche les valeurs triées croissant par rapport aux temps
            printf("\n");
        }
        if (quoi==2)
        {
            printf("Voici les donnees par ordre croissant de temps:\n");
            affichagedesvaleurstrieesdectmps(tbltrieoriginal);//Affiche les valeurs triées décroissant par rapport aux temps
            printf("\n");
        }
        if (quoi==3)
        {
            printf("Voici les donnees triees par ordre croissant de pouls:\n");
            affichagedesvaleurstrieescroipouls(tbltrie);//Affiche les valeurs triées croissant par rapport aux pouls
            printf("\n");
        }
        if (quoi==4)
        {
            printf("Voici les donnees triees par ordre decroissant de pouls:\n");
            affichagedesvaleurstrieesdecpouls(tbltrie);//Affiche les valeurs triées decroissant par rapport aux pouls
            printf("\n");
        }

        if (quoi==5)
        {
            printf("Entrez le temps en ms\n");
            scanf("%d",&temps);
            numero_de_case=rechercheDichopoul(tbltrieoriginal,a,temps);
            if (numero_de_case==-1)
            {
                printf("Le temps de %dms ms n'est pas dans le tableau\n\n",temps);
            }
            if (numero_de_case!=-1)
            {
                printf("A %dms le poul est de %dbpm\n\n",temps,tbltrieoriginal.poul[numero_de_case]);  //Cherche un poul pour un temps donné
            }

        }
        if (quoi==6)
        {
            printf("La valeur maximal est %dbpm",tbltrie.poul[a-1]); //cherche le poul maximal
            printf(" et la valeur minimal est %dbpm\n\n",tbltrie.poul[1]);   //cherche le poul minimal
        }

        if (quoi==7)
        {
            printf("Donnez votre premier nombre\n");
            scanf("%d",&nbr1);                          //Entre le premier temps (le plus petit)
            printf("Donnez votre deusieme nombre\n");
            scanf("%d",&nbr2);                          //Entre le deuxiéme temps (le plus grand)
            printf("La moyenne entre %dms et %dms est de %dbpm\n\n",nbr1,nbr2,moyenneentre2(nbr1,nbr2,tbltrieoriginal,a)); //calcul la moyenne entre deux nombres
        }
        if (quoi==8)
        {
            printf("Les tableaux comptent chacun %d lignes\n\n",a);
        }

    }
}
