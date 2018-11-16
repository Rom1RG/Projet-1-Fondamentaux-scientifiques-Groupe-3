#include <stdio.h>
#include <stdlib.h>
#include "actions.h"
#include "donnees.h"
int moyenneentre2 (int nbr1, int nbr2,tableauxoriginal tbl,int a) //Fonction qui calcul la moyenne entre plusieur nombres donnees
{
    int somme=0,diffnbrs;
    int resultat;
    int i;
    i=nbr1-1; //-1 car [1] donne la deusiéme valeurs
    if (nbr2<=a)
       {
           for (;i<nbr2;i++)
        {
            somme=somme+tbl.poul[i];
        }
        diffnbrs=nbr2-nbr1; //calcul le nombre de valeurs -1
        diffnbrs++;
        resultat=somme/diffnbrs;

        return resultat;
       }
    else
    {
        for (;i<a;i++)
    {
        somme=somme+tbl.poul[i];
    }
    diffnbrs=a-nbr1; //calcul le nombre de valeur -1
    diffnbrs++;
    resultat=somme/diffnbrs;
    }
}

void tri_a_bulle(int *t,int *b, int a) //Fonction qui trie un tableau grâce au trie à bulle
{
	int en_desordre = 1;

	for (int i = 0; i < a && en_desordre; ++i)
	{
		en_desordre = 0;
		for (int j = 1; j < a - i; ++j)
		{
			if (t[j-1] > t[j])
			{
				int temp = t[j-1];
				int temp2 = b[j-1];
				t[j-1] = t[j];
				b[j-1] = b[j];
				t[j] = temp;
				b[j] = temp2;
				en_desordre = 1;
 			}
		}
	}
}


