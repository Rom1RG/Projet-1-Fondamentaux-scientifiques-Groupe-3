#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "generationCode.h"

int choix;
int temps;
int LED;
void main ()
{
    choix = menu();
    if (choix == 5)
    {
        printf(" Choississez quelle LED allumer\n");
        scanf ("%d", &LED );
    }
    ecrire_fichier(choix, temps, LED);
}
