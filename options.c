#include "Header.h"

void menu_options() {
    options = load_bitmap("Images/options.bmp",NULL);
    while (!key[KEY_ESC]) {
        clear_bitmap(page);
        blit(options,page,0,0,0,0,TAILLE_ECRAN_L,TAILLE_ECRAN_H);
        blit(page,screen,0,0,0,0,TAILLE_ECRAN_L,TAILLE_ECRAN_H);
    }
}