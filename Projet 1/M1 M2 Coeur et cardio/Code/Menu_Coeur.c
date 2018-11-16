#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "generationCode.h"

int choix;
int temps;
int LED;
void main ()
{
    choix = menu(); //Genere le param.h
    if (choix == 5)
    {
        printf(" Choississez quelle LED allumer\n"); //Si le choix est 5 une led s'allume (selon notre choix).
        scanf ("%d", &LED );
    }
    ecrire_fichier(choix, LED); //Appelle la fonction qui permet de generer le param.h avec les paramètres demandé.
}
