#include <stdio.h>
#include <stdlib.h>
#include "donnees.h"


int main()
{
    int nombre_de_lignes;

    tableaux tbl;
    tableauxoriginal tblo;

    nombre_de_lignes=nbrl(); //Calcul du nombre de ligne

    tbl.poul = malloc(nombre_de_lignes * sizeof(*tbl.poul)); //Allocation dynamique de tableaux.poul
    tbl.temps = malloc(nombre_de_lignes * sizeof(*tbl.temps)); //Allocation dynamique de tableaux.temps
    tblo.poul = malloc(nombre_de_lignes * sizeof(*tblo.poul)); //Allocation dynamique de tableaux original.temps
    tblo.temps = malloc(nombre_de_lignes * sizeof(*tblo.temps)); //Allocation dynamique de tableaux original.poul

    do_tab(tbl.temps,tbl.poul,nombre_de_lignes); //Rempli les tableaux de la structure tableaux
    do_tab(tblo.temps,tblo.poul,nombre_de_lignes); //Rempli les tableaux de la structure tableauxoriginal
    tri_a_bulle(tbl.poul,tbl.temps,nombre_de_lignes); //Tri du tableau.poul

    presentation(tblo,tbl);//Envoie le menu



    return 0;
}


