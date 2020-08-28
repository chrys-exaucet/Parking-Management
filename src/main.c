#include <stdio.h>
#include <stdlib.h>
#include"../../Bibliothèques/parking.h"

int main()
{
    int choix , reponse;
do
{
        system("cls");
        system("color 0D");

        printf("\n|*************************************************************************************************|\n");
        printf("\n|                                                                                                 |\n");
        printf("\n|                                           PARKING                                               |\n");
        printf("\n|                                                                                                 |\n");
        printf("\n|*************************************************************************************************|\n");
        printf("\n|            Bienvenu au guichet                                                                  |\n");
        printf("\n|*************************************************************************************************|\n");
        printf("\n|            1: Initialiser votre file                                                            |\n");
        printf("\n|            2: Inserer un vehicule                                                               |\n");
        printf("\n|            3:Vider toute la file                                                                |\n");
        printf("\n|            4:afficher toute la file                                                             |\n");
        printf("\n|            5: Supprimer un vehicule                                                             |\n");
        printf("\n|            0: Quitter                                                                           |\n");
        printf("\n**************************************************************************************************\n");


        printf(" Entrer votre choix :  ");
        scanf("%d",&choix);

        system("cls");
        system("color 8F");



        switch(choix)
        {
/*********************************************sortie du programme********************************************************/
            case 0 :
                        system("color 0A");

                        printf("A bientot\n");
                        exit(0);

                        break ;
/********************************************initialisation de la file************************************************/

            case 1 :
                        system("color 0B") ;

                        mafile = initialiser();
                        printf(" File initialisee\n");

                        break;

/*******************************************Enfilage****************************************************/

            case 2 :
                        system("color 0D") ;

                        printf("Entrer les caracteristiques du vehicule\n");

                        printf("Marque :  ");
                        scanf("%s",vehicule.marque);

                        printf("\nCouleur  :  ");
                        scanf("%s",vehicule.couleur);

                        printf("\nType :  ");
                        scanf("%d",&vehicule.type);

                         printf("\n puissance fiscale :  ");
                        scanf("%d",&vehicule.puissanceFiscale);


                        enfiler(&mafile,vehicule);
                        printf(" vehicule insere .\n");
                        break;


/**********************************************vidange***********************************************/
            case 3:
                        system("color 4D") ;

                        vider (&mafile);
                        printf(" File entierement videe.\n");
                        break ;
/**********************************************affichage**********************************************/

            case 4 :
                        system("color 5E") ;

                       if(estVide(mafile)==1)
                            printf(" La file est vide . \n");
                       else
                        {
                            printf("\n Les vehicules de votre file sont : \n");
                            afficher(mafile);
                        }

                        break;

 /***************************************************************************************************************/
            case 5 :
                        if(estVide(mafile))
                            printf("aucun client.\n");
                        else
                            defiler(&mafile);
                            printf("vehicule en tete supprime\n");

                        break;

/**********************************************invalidation de l'entree******************************************/

            default:
                        system("color 0B") ;

                        printf("entree invalide\n");
                        break;
        }

/***************************************************************************************************************/

    printf("\n Entrer 1 pour retourner au menu principal:  ");
    scanf("%d",&reponse);


}while(reponse==1);     // condition de continuité


    return 0 ;


}
