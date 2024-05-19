#include "Header.h"


void choix_pseudo() {
    /*
    // Initialisation des pseudos
    char pseudoJoueur1[100] = "";
    char pseudoJoueur2[100] = "";
    menu_pseudo = load_bitmap("Images/Menu/menu_pseudo.bmp", NULL);
    while(!key[KEY_ENTER]) {
        clear_bitmap(page);
        blit(menu_pseudo, page, 0, 0, 0, 0, SCREEN_W, SCREEN_H);

        // Demander les pseudos aux joueurs
        textout_ex(page, font, "Entrez le pseudo du joueur 1:", 220, 120, makecol(0, 0, 0), -1);
        textout_ex(page, font, "Entrez le pseudo du joueur 2:", 220, 340, makecol(0, 0, 0), -1);

        int key;
        int index1 = 0;
        int index2 = 0;
        int player = 1; // Indicateur du joueur en train de saisir son pseudo

        do {
            if (keypressed()) {
                key = readkey();

                // Récupérer les entrées clavier pour les pseudos
                if (key >> 8 != KEY_ENTER) {
                    if (key >> 8 != KEY_BACKSPACE) {
                        if (player == 1 && index1 < 99) {
                            if (key >> 8 == KEY_SPACE) {
                                pseudoJoueur1[index1++] = ' ';
                            } else {
                                pseudoJoueur1[index1++] = (char) key;
                            }
                            pseudoJoueur1[index1] = '\0';
                        } else if (player == 2 && index2 < 99) {
                            if (key >> 8 == KEY_SPACE) {
                                pseudoJoueur2[index2++] = ' ';
                            } else {
                                pseudoJoueur2[index2++] = (char) key;
                            }
                            pseudoJoueur2[index2] = '\0';
                        }
                    } else if (player == 1 && index1 > 0) {
                        index1--;
                        pseudoJoueur1[index1] = '\0';
                    } else if (player == 2 && index2 > 0) {
                        index2--;
                        pseudoJoueur2[index2] = '\0';
                    }

                    // Afficher les pseudos entrés
                    clear_bitmap(page);
                    blit(menu_pseudo, page, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
                    textout_ex(page, font, "Entrez le pseudo du joueur 1:", 80, 200, makecol(0, 0, 0), -1);
                    textout_ex(page, font, "Entrez le pseudo du joueur 2:", 450, 200, makecol(0, 0, 0), -1);
                    textout_ex(page, font, pseudoJoueur1, 80, 220, makecol(0, 0, 0), -1);
                    textout_ex(page, font, pseudoJoueur2, 450, 220, makecol(0, 0, 0), -1);
                }

                // Passer au joueur suivant après avoir appuyé sur la touche Espace
                if (key >> 8 == KEY_SPACE) {
                    player = 2;
                }
            }
        } while (!((key >> 8 == KEY_ENTER) && (index1 > 0) && (index2 > 0)));

        strcpy(perso1.pseudo, pseudoJoueur1);
        strcpy(perso2.pseudo, pseudoJoueur2);

        blit(page, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);  // Effacer l'écran
        */
        choix_skin();
   // }
}
