#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include"parking.h"

File initialiser ()
{
    File file ;
    file.in = NULL ;
    file.out = NULL ;
    file.counter = 0 ;
    return file ;

}
/*******************************/
int estVide ( File file )
{
    return ( file.counter == 0 ) ? 1 : 0 ;

}

/*******************************/
void enfiler ( File * adrFile, Vehicule node )
{
     Vehicule * ptrClient ;
     ptrClient = ( Vehicule * ) malloc ( sizeof ( Vehicule ) ) ;
     *ptrClient= node ;
     ptrClient->suivant = NULL ;
     adrFile->counter ++ ;
if (adrFile->counter == 1 )
    {
        adrFile->in = ptrClient ;
        adrFile->out = ptrClient;
    }
else
    {
        adrFile->in->suivant = ptrClient ;
        adrFile->in = ptrClient ;
    }

}
/**********************************************/
void defiler ( File * adrFile )
{
    Vehicule * q ;
    if ( 1 != estVide ( *adrFile ) )
        {
            q = adrFile->out ;
            adrFile->out = q->suivant ;
            free ( q ) ;
            adrFile->counter -- ;
            if ( adrFile->counter == 0 )
                {
                    adrFile->in = NULL ;
                }

}
}
/************************************************/
void vider ( File *file )
{
     if ( 1 == estVide ( * file ) )
        {
             return ;
        }
     else
        {
            defiler ( file ) ;
            vider ( file ) ;
        }
}
/*******************************************************************************************************************************
affichage de la liste */

void afficher ( File file )
 {
     Vehicule * p ;
     p = file.out;
     while ( p != NULL )
        {
            printf ( "%s -%s- type %d-puissance : %d \n", p->marque, p->couleur,p->type,p->puissanceFiscale) ;
            p = p->suivant ;
        }
}

/***********************************************************************************************/
