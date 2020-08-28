#ifndef PARKING_H_INCLUDED
#define PARKING_H_INCLUDED

typedef struct Vehicule
 {
    char marque[50];
    char couleur[50];
    int type;
    int puissanceFiscale;
    struct Vehicule * suivant ;
 } Vehicule ;

// Définition de la File

typedef struct file
{
     int counter ;
      Vehicule * in ;
      Vehicule * out ;
} File ;

File mafile ;
Vehicule vehicule;

/**********************************************************************/
File initialiser ();
int estVide ( File file );
void enfiler ( File * adrFile, Vehicule node );
void defiler ( File * adrFile );
void vider ( File *file );
void afficher ( File vehicule );
/**********************************************************************/

#endif // PARKING_H_INCLUDED
