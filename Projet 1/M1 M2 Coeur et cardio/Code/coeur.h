int pinLed1, pinLed2, pinLed3,pinLed4,pinLed5,pinLed6,pinLed7,pinLed8,pinLed9,pinLed10,temps;

//Les fonctions présentent dans ce code permettent les différent clignotements des LEDs, HIGH = LED allumé; LOW = LED éteinte.
void clignotement_total ()
{
    digitalWrite(pinLed1, HIGH);
    digitalWrite(pinLed2, HIGH);
    digitalWrite(pinLed3, HIGH);
    digitalWrite(pinLed4, HIGH);
    digitalWrite(pinLed5, HIGH);
    digitalWrite(pinLed6, HIGH);
    digitalWrite(pinLed7, HIGH);
    digitalWrite(pinLed8, HIGH);
    digitalWrite(pinLed9, HIGH);
    digitalWrite(pinLed10, HIGH);
    
}

void clignotement_moitie ( int compteur)
{
    if (compteur == 0)
    {
    digitalWrite(pinLed1, HIGH);
    digitalWrite(pinLed2, HIGH);
    digitalWrite(pinLed4, HIGH);  
    digitalWrite(pinLed6, HIGH);   
    digitalWrite(pinLed8, HIGH);
    digitalWrite(pinLed9, HIGH);
    }
    else if ( compteur == 1 )
    {
    digitalWrite(pinLed1, HIGH);  
    digitalWrite(pinLed3, HIGH);
    digitalWrite(pinLed5, HIGH);
    digitalWrite(pinLed7, HIGH);
    digitalWrite(pinLed8, HIGH);
    digitalWrite(pinLed10,HIGH);
    }
}

void clignotement_tiers (int compteur)
{
    if (compteur == 0)
    {
    digitalWrite(pinLed1, HIGH);
    digitalWrite(pinLed4, HIGH);
    digitalWrite(pinLed7, HIGH);
    }
    if (compteur == 1)
    {
    digitalWrite(pinLed2, HIGH);
    digitalWrite(pinLed5, HIGH);
    digitalWrite(pinLed8, HIGH);
    }
    if (compteur == 2)
    {
    digitalWrite(pinLed3, HIGH);
    digitalWrite(pinLed6, HIGH);
    digitalWrite(pinLed9, HIGH);
    digitalWrite(pinLed10,HIGH);
    }
}
void clignotement_chenille(int compteur)
{
    if (compteur == 0)
    {
    digitalWrite(pinLed1, HIGH);
    }
    if (compteur == 1)
    {
    digitalWrite(pinLed2, HIGH);
    }
    if (compteur == 2)
    {
    digitalWrite(pinLed4, HIGH);
    }
    if (compteur == 3)
    {
    digitalWrite(pinLed6, HIGH);
    }
    if (compteur == 4)
    {
    digitalWrite(pinLed9, HIGH);
    }
    if (compteur == 5)
    {
    digitalWrite(pinLed8, HIGH);
    }
    if (compteur == 6)
    {
    digitalWrite(pinLed10, HIGH);
    }
    if (compteur == 7)
    {
    digitalWrite(pinLed7, HIGH);
    }
    if (compteur == 8)
    {
    digitalWrite(pinLed5, HIGH);
    }
    if (compteur == 9)
    {
    digitalWrite(pinLed3, HIGH);
    }

}
void choix_LED( int LED)
{
  digitalWrite(LED, HIGH);
}
