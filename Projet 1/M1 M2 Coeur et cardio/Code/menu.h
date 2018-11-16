#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
#include <stdlib.h>
#include <stdio.h>

int menu() //Permet d'afficher le texte du menu.
{
    int choix;
    printf("Veuillez selectionner quel type de clignotement doit etre applique au coeur de LEDs\n");
    printf (" 1. Clignotement total : toutes les LEDs s'allument et s'eteignent en meme temps.\n");
    printf (" 2. Demi-clignotement : Chaque moitie du coeur s'illumine et s'eteignent a tour de role. \n");
    printf (" 3. Un tiers du ceur s'illumine a chaque battement (d'abord 3, puis 3, puis 4). \n");
    printf (" 4. Clignotement chenille : Les LEDs s'illuminent et s'eteignent a tour de role\n");
    printf (" 5. Une seule LED au choix clignotera\n");
    scanf("%d", &choix);
    return choix;

}





#endif // MENU_H_INCLUDED
