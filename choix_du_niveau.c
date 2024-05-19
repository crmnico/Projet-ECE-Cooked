#include "Header.h"

void choix_du_niveaux(){
rest(500);
    initialisation_niveau();
    while(!key[KEY_ESC]) {
        clear_bitmap(page);
        if (getpixel(calque_carte[0], mouse_x, mouse_y) == makecol(255, 0, 0)) {     //AMERIQUE DU NORD
            blit(calque_carte[1], page, 0, 0, 0, 0, TAILLE_ECRAN_L, TAILLE_ECRAN_H);
            if (mouse_b) {
                niveau[0].actuel=1,niveau[1].actuel=0,niveau[2].actuel=0,niveau[3].actuel=0,niveau[4].actuel=0,niveau[5].actuel=0,niveau[6].actuel=0,niveau[7].actuel=0;
                jeu();
            }
        } else if (getpixel(calque_carte[0], mouse_x, mouse_y) == makecol(255, 216, 0)){       //AMERIQUE DU SUD
            blit(calque_carte[2], page, 0, 0, 0, 0, TAILLE_ECRAN_L, TAILLE_ECRAN_H);
            if (mouse_b) {
                niveau[0].actuel=0,niveau[1].actuel=1,niveau[2].actuel=0,niveau[3].actuel=0,niveau[4].actuel=0,niveau[5].actuel=0,niveau[6].actuel=0,niveau[7].actuel=0;
                jeu();
            }
        }else if (getpixel(calque_carte[0], mouse_x, mouse_y) == makecol(0, 38, 255)) {       //EUROPE
            blit(calque_carte[3], page, 0, 0, 0, 0, TAILLE_ECRAN_L, TAILLE_ECRAN_H);
            if (mouse_b) {
                niveau[0].actuel=0,niveau[1].actuel=0,niveau[2].actuel=1,niveau[3].actuel=0,niveau[4].actuel=0,niveau[5].actuel=0,niveau[6].actuel=0,niveau[7].actuel=0;
                jeu();
            }
        }else if(getpixel(calque_carte[0], mouse_x, mouse_y) == makecol(255, 106, 0)){         //ASIE
            blit(calque_carte[4], page, 0, 0, 0, 0, TAILLE_ECRAN_L, TAILLE_ECRAN_H);
            if (mouse_b) {
                niveau[0].actuel=0,niveau[1].actuel=0,niveau[2].actuel=0,niveau[3].actuel=1,niveau[4].actuel=0,niveau[5].actuel=0,niveau[6].actuel=0,niveau[7].actuel=0;
                jeu();
            }
        }else if(getpixel(calque_carte[0], mouse_x, mouse_y) == makecol(127, 0, 55)){         //OCEANNIE
            blit(calque_carte[5], page, 0, 0, 0, 0, TAILLE_ECRAN_L, TAILLE_ECRAN_H);
            if (mouse_b) {
                niveau[0].actuel=0,niveau[1].actuel=0,niveau[2].actuel=0,niveau[3].actuel=0,niveau[4].actuel=1,niveau[5].actuel=0,niveau[6].actuel=0,niveau[7].actuel=0;
                jeu();
            }
        }else if(getpixel(calque_carte[0], mouse_x, mouse_y) == makecol(0, 255, 144)){         //ZONE 51
            blit(calque_carte[6], page, 0, 0, 0, 0, TAILLE_ECRAN_L, TAILLE_ECRAN_H);
            if (mouse_b) {
                niveau[0].actuel=0,niveau[1].actuel=0,niveau[2].actuel=0,niveau[3].actuel=0,niveau[4].actuel=0,niveau[5].actuel=1,niveau[6].actuel=0,niveau[7].actuel=0;
                jeu();
            }
        }else if(getpixel(calque_carte[0], mouse_x, mouse_y) == makecol(0, 255, 33)){         //AFRIQUE
            blit(calque_carte[7], page, 0, 0, 0, 0, TAILLE_ECRAN_L, TAILLE_ECRAN_H);
            if (mouse_b) {
                niveau[0].actuel=0,niveau[1].actuel=0,niveau[2].actuel=0,niveau[3].actuel=0,niveau[4].actuel=0,niveau[5].actuel=0,niveau[6].actuel=1,niveau[7].actuel=0;
                jeu();
            }
        }else if(getpixel(calque_carte[0], mouse_x, mouse_y) == makecol(255,254,145)){         //GROENLAND
            blit(calque_carte[9], page, 0, 0, 0, 0, TAILLE_ECRAN_L, TAILLE_ECRAN_H);
            if (mouse_b) {
                niveau[0].actuel=0,niveau[1].actuel=0,niveau[2].actuel=0,niveau[3].actuel=0,niveau[4].actuel=0,niveau[5].actuel=0,niveau[6].actuel=0,niveau[7].actuel=1;
                jeu();
            }
        }else{       //VIERGE
            blit(calque_carte[8], page, 0, 0, 0, 0, TAILLE_ECRAN_L, TAILLE_ECRAN_H);
        }
        show_mouse(page);
        blit(page,screen,0,0,0,0,TAILLE_ECRAN_L,TAILLE_ECRAN_H);
        rest(10);
    }
}
