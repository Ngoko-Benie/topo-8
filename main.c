#include <conio.h>
#include <stdlib.h>

int main()
{
            int choice;

            printf("L�GENDES DE BANTOUA : LE ROYAUME �TERNEL \n \n");

            printf("Contexte : Dans un vaste monde inspir� par les riches cultures et traditions des tribus bantou,\n les joueurs explorent les Royaumes de Bantoua, un \n territoire mystique o� la magie ancienne et les myst�res ancestraux coexistent. Les tribus se disputent \n le contr�le des terres fertiles \n et des ressources pr�cieuses, tandis que des forces sombres menacent l'�quilibre fragile de la r�gion. ");



            printf ("\n     Faites un choix  \n     \n Taper \n \n   1 - Joueur \n   2 - charger une squvegarde  \n   3 - creer un personnage \n   4 - creer une zone de vie \n   5 -  quitter \n");
            scanf("%d", &choice);


            // choix invalid

            while (choice > 5 ||choice <1){

                printf(" Entrez un choix valide selon le menu  \n");
                scanf("%d",&choice);
            }


                // cas de 2

            while (choice == 2){
                printf(" Aucune sauvegarde n'est  presente dans la base de donnees \n Ressayer  \n");
                scanf("%d", &choice);
                }

                // cas 4
                if (choice ==  4){


                    int pourcentage = 0 ;
                    int suite;

                    while (pourcentage <= 100) {
                            pourcentage ++;

                        if (pourcentage == 74){
                                printf("Telechargement  %d `pourcents` \n \n saisissez 47 pour continuer \n", pourcentage);
                                scanf("%d",&suite);

                                if (suite !=47){
                                    printf(" fin du telechargement\n aurevoir");
                                } else {
                                    int ZoneName;
                                    printf("tapez le nom de votre  zone de vie creer \n");
                                    scanf("%d", &ZoneName);

                                }
                          }

                    }
            }



            // debut du jeu

            if (choice  == 1){


                char t;
                printf("il est le chasseur de sangoma, dans sa qu�te de nouveau territoire pour \n l�annexer au tien il entre en conflit avec les guerriers des hauts plateaux dans les hautes montagnes, \n celui-ci l�inflige d�j� 3 impacts de d�g�t. \n \n faites un choix \n \n F - pour fuir les guerriers \n Q - Pour faire appel a la pretresse ");
                    scanf("%f", &t);
                    while  (t== "F"){
                        printf(" bien");
                    }

            }


            // cas generale

            switch(choice){

                 case 3: {
                            printf(" =====================================================================================================");
                            break;
                        }

                case 5: {
                        printf("                      Goodbye!!            ");
                        break;
                       }
                }

    return 0;
}
