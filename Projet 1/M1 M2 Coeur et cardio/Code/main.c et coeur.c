#include "coeur.h"
#include "param.h"

int etatled = 0; //variable de type float
int mark = 0; // variable de type int 
int bpm = 0; // variable de type int
int totalbpm=0; //variable de type float
unsigned long times = 0; //variable de type unsigned long
int i = 1; //variable de type int
unsigned long condition = 5000; //variable de type unsigned long
int compteur = -1;


void setup()
{
  pinLed1 = 2;
  pinLed2 = 3;
  pinLed3 = 4;
  pinLed4 = 5;
  pinLed5 = 6;
  pinLed6 = 7;
  pinLed7 = 8;
  pinLed8 = 9;
  pinLed9 = 10;
  pinLed10 = 11;
  pinMode(pinLed1, OUTPUT);
  pinMode(pinLed2, OUTPUT);
  pinMode(pinLed3, OUTPUT);
  pinMode(pinLed4, OUTPUT);
  pinMode(pinLed5, OUTPUT);
  pinMode(pinLed6, OUTPUT);
  pinMode(pinLed7, OUTPUT);
  pinMode(pinLed8, OUTPUT);
  pinMode(pinLed9, OUTPUT);
  pinMode(pinLed10, OUTPUT);
  digitalWrite(pinLed1, LOW);
  digitalWrite(pinLed2, LOW);
  digitalWrite(pinLed3, LOW);
  digitalWrite(pinLed4, LOW);
  digitalWrite(pinLed5, LOW);
  digitalWrite(pinLed6, LOW);
  digitalWrite(pinLed7, LOW);
  digitalWrite(pinLed8, LOW);
  digitalWrite(pinLed9, LOW);
  digitalWrite(pinLed10,LOW);
  Serial.begin(9600); //Définis le débit de données a 9600 bauds
  pinMode(A0, OUTPUT); // Met la broche Analogique A0 en sortie
  
}



void loop() 
{
  etatled = analogRead(A0); //Affecter la valeur lu en A0 a la variable "etatled"
  //Serial.println(etatled);
  if (etatled > 100 && mark == 0) { //déclaration du si
    bpm = bpm + 1 ; //Incrémentation de bpm a chaque cycle
    mark = 1; // Marqueur permettant de ne pas faire plusieurs fois le calcul sur la meme intentité
    compteur +=1;
    switch (PARAM) //Boucle qui permet d'appeller le mode de clignotement , le compteur permet de mémoriser l'avancement dans une fonction
  {
    case 1 :
      clignotement_total ();
      break;
    case 2 :
      if ( compteur > 1 )
      {
        compteur = 0 ;
      }
      clignotement_moitie (compteur);
      
      break;
    case 3 :
    if ( compteur > 2 )
      {
        compteur = 0 ;
      }
      clignotement_tiers (compteur);
      break;
    case 4 :
    if ( compteur > 9 )
      {
        compteur = 0 ;
      }
      clignotement_chenille (compteur);
      break;
    case 5 :
      choix_LED ( LED);
      break;
    
    
  }


  }
  else if (etatled == 0 && mark == 1) { //else if permettant de reset le marqueur dès que la  tension est concidérer comme état bas
    mark = 0; // reset du marqueur
    digitalWrite(pinLed1, LOW);
    digitalWrite(pinLed2, LOW);
    digitalWrite(pinLed3, LOW);
    digitalWrite(pinLed4, LOW);
    digitalWrite(pinLed5, LOW);
    digitalWrite(pinLed6, LOW);
    digitalWrite(pinLed7, LOW);
    digitalWrite(pinLed8, LOW);
    digitalWrite(pinLed9, LOW);
    digitalWrite(pinLed10, LOW);

  }

  //Serial.println(bpm);
 
  if(millis()==condition*i){ //if permettant de gerer le temps
    totalbpm = bpm *12;  // calcul propre au battements par minutes
    Serial.print(millis()); // Afficher le temps en ms dans le moniteur série
    Serial.print(";"); 
    Serial.println(totalbpm); // Afficher la variable totalbpm dans le moniteur série
    bpm=0; // reset de bpm
    i=i+1; //Incrémentation de la variable i permettant de réaliser l'affichage toutes les 10 secondes
  }
  
  }
