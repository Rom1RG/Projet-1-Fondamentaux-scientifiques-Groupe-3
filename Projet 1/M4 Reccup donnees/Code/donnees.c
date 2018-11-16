#include <stdio.h>
#include <stdlib.h>
#include "donnees.h"

void do_tab(int *temps[],int *poul[],int a) //Fonction qui rempli les tableaux
{
    int i;
    FILE *fichier = fopen("Battements.csv", "r");
    if (fichier != NULL)
    {
        for (i=0;i<a;i++)
        {
            fscanf(fichier,"%d;%d", &temps[i], &poul[i]); //
        }
        fclose(fichier);
    }
}

int nbrl() //compte le nombre de lignes
{
    FILE *fichier = fopen("Battements.csv", "r");
    int c;
    int nLignes = 0;
    while((c=fgetc(fichier)) != EOF)
        {
            if(c=='\n')
            nLignes++;
        }
    fclose(fichier);
    return nLignes;
}

void affichagedesvaleurstrieescroitmps(tableauxoriginal tablu)
{
    int i;
    int a;
    a=nbrl();
    for (i=0;i<a;i++)
    {
        printf("%dms;%dbpm\n", tablu.temps[i],tablu.poul[i]);
    }
}
void affichagedesvaleurstrieescroipouls(tableaux tablu)
{
    int i;
    int a;
    a=nbrl();
    for (i=0;i<a;i++)
    {
        printf("%dms;%dbpm\n",tablu.temps[i],tablu.poul[i]);
    }
}
void affichagedesvaleurstrieesdecpouls(tableaux tablu)
{
    int i;
    int a;
    a=nbrl();
    for (i=a-1;i>=0;i--)
    {
        printf("%dms;%dbpm\n",tablu.temps[i],tablu.poul[i]);
    }
}
void affichagedesvaleurstrieesdectmps(tableauxoriginal tablu)
{
    int i;
    int a;
    a=nbrl();
    for (i=a-1;i>=0;i--)
    {
        printf("%dms;%dbpm\n", tablu.temps[i],tablu.poul[i]);
    }
}
int rechercheDichopoul(tableauxoriginal tab, int nbVal, int val){

      /* d�claration des variables locales � la fonction */
      int trouve;  //vaut faux tant que la valeur "val" n'aura pas �t� trouv�e
      int id;  //indice de d�but
      int ifin;  //indice de fin
      int im;  //indice de "milieu"
      /* initialisation de ces variables avant la boucle de recherche */
      trouve = 0;  //la valeur n'a pas encore �t� trouv�e
      id = 0;  //intervalle de recherche compris entre 0...
      ifin = nbVal;  //...et nbVal

      /* boucle de recherche */
      while(!trouve && ((ifin - id) > 1))
        {

        im = (id + ifin)/2;  //on d�termine l'indice de milieu

        trouve = (tab.temps[im] == val);  //on regarde si la valeur recherch�e est � cet indice

        if(tab.temps[im] > val) ifin = im;  //si la valeur qui est � la case "im" est sup�rieure � la valeur recherch�e, l'indice de fin "ifin" << devient >> l'indice de milieu, ainsi l'intervalle de recherche est restreint lors du prochain tour de boucle
        else id = im;  //sinon l'indice de d�but << devient >> l'indice de milieu et l'intervalle est de la m�me fa�on restreint
      }

      /* test conditionnant la valeur que la fonction va renvoyer */
      if(tab.temps[id] == val) return(id);  //si on a trouv� la bonne valeur, on retourne l'indice
      else return(-1);  //sinon on retourne -1

    }
