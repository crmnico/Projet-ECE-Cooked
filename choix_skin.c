#include "Header.h"

void choix_skin() {
    chargement_perso1();
    initialisation_perso();
    while (!key[KEY_ENTER]) {
        clear_bitmap(page);
        while (perso1.num_skin==0) {
            blit(choix_skins, page, 0, 0, 0, 0, TAILLE_ECRAN_L, TAILLE_ECRAN_H);
            if ((mouse_x >= 50) && (mouse_x <= 170) && (mouse_y >= 70) && (mouse_y <= 190) && (mouse_b)) perso1.num_skin=1;       //skin1
            else if ((mouse_x >= 50) && (mouse_x <= 170) && (mouse_y >= 250) && (mouse_y <= 370) && (mouse_b)) perso1.num_skin=2;      //skin2
            else if ((mouse_x >= 50) && (mouse_x <= 170) && (mouse_y >= 430) && (mouse_y <= 550) && (mouse_b)) perso1.num_skin=3;      //skin3
            else if ((mouse_x >= 50) && (mouse_x <= 170) && (mouse_y >= 610) && (mouse_y <= 730) && (mouse_b)) perso1.num_skin=4;      //skin4
            else if ((mouse_x >= 220) && (mouse_x <= 340) && (mouse_y >= 70) && (mouse_y <= 190) && (mouse_b)) perso1.num_skin=5;      //skin5
            else if ((mouse_x >= 220) && (mouse_x <= 340) && (mouse_y >= 250) && (mouse_y <= 370) && (mouse_b)) perso1.num_skin=6;     //skin6
            else if ((mouse_x >= 220) && (mouse_x <= 340) && (mouse_y >= 430) && (mouse_y <= 550) && (mouse_b)) perso1.num_skin=7;     //skin7
            else if ((mouse_x >= 220) && (mouse_x <= 340) && (mouse_y >= 610) && (mouse_y <= 730) && (mouse_b)) perso1.num_skin=8;    //skin8
            if(perso1.num_skin!=0) draw_sprite(direction_images[perso1.num_skin][SOUTH][0],page,200,430);
            show_mouse(page);
            blit(page,screen,0,0,0,0,TAILLE_ECRAN_L,TAILLE_ECRAN_H);
        }
        rest(1000);
        while (perso2.num_skin==0) {
            blit(choix_skins, page, 0, 0, 0, 0, TAILLE_ECRAN_L, TAILLE_ECRAN_H);
            if ((mouse_x >= 50) && (mouse_x <= 170) && (mouse_y >= 70) && (mouse_y <= 190) && (mouse_b)) perso2.num_skin=1;       //skin1
            else if ((mouse_x >= 50) && (mouse_x <= 170) && (mouse_y >= 250) && (mouse_y <= 370) && (mouse_b)) perso2.num_skin=2;      //skin2
            else if ((mouse_x >= 50) && (mouse_x <= 170) && (mouse_y >= 430) && (mouse_y <= 550) && (mouse_b)) perso2.num_skin=3;      //skin3
            else if ((mouse_x >= 50) && (mouse_x <= 170) && (mouse_y >= 610) && (mouse_y <= 730) && (mouse_b)) perso2.num_skin=4;      //skin4
            else if ((mouse_x >= 220) && (mouse_x <= 340) && (mouse_y >= 70) && (mouse_y <= 190) && (mouse_b)) perso2.num_skin=5;      //skin5
            else if ((mouse_x >= 220) && (mouse_x <= 340) && (mouse_y >= 250) && (mouse_y <= 370) && (mouse_b)) perso2.num_skin=6;     //skin6
            else if ((mouse_x >= 220) && (mouse_x <= 340) && (mouse_y >= 430) && (mouse_y <= 550) && (mouse_b)) perso2.num_skin=7;     //skin7
            else if ((mouse_x >= 220) && (mouse_x <= 340) && (mouse_y >= 610) && (mouse_y <= 730) && (mouse_b)) perso2.num_skin=8;    //skin8
            if(perso2.num_skin!=0) draw_sprite(direction_images[perso2.num_skin][SOUTH][0],page,580,430);
            draw_sprite(direction_images[perso1.num_skin][SOUTH][0],page,200,430);
            show_mouse(page);
            blit(page,screen,0,0,0,0,TAILLE_ECRAN_L,TAILLE_ECRAN_H);
        }
        choix_du_niveaux();
    }
}