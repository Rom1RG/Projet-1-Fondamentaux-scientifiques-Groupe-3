/* contient toutes les fonctions nécessaires pour la manipulation de la
structure de données et la lecture du fichier*/
#ifndef DONNEES_H_INCLUDED
#define DONNEES_H_INCLUDED
typedef struct tableaux tableaux; //Défini une structure composé de deux tableaux qui contiendront le pouls et le tmp
struct tableaux
{
    int*temps;
    int*poul;

};

typedef struct tableauxoriginal tableauxoriginal;
struct tableauxoriginal
{
    int*temps;
    int*poul;
};


void do_tab(int *temps[],int *poul[],int a);//fonction qui transforme le .csv en double tableau rempli des donnés

int nbrl();

void affichagedesvaleurstrieescroitmps(tableauxoriginal tablu);

void affichagedesvaleurstrieesdectmps(tableauxoriginal tablu);

void affichagedesvaleurstrieescroipouls(tableaux tablu);

void affichagedesvaleurstrieesdecpouls(tableaux tablu);

int rechercheDichopoul(tableauxoriginal tab, int nbVal, int val);


#endif // DONNEES_H_INCLUDED
