#include "Header.h"

void initialisation_perso(){
    perso1.pos_x = TAILLE_ECRAN_L / 2;
    perso1.pos_y = TAILLE_ECRAN_H / 2;
    perso2.pos_x= (TAILLE_ECRAN_L / 2)-100;
    perso2.pos_y = (TAILLE_ECRAN_H / 2)-100;
    perso1.frame_counter=0;
    perso2.frame_counter=0;
    perso1.current_direction=NORTH;
    perso2.current_direction=NORTH;
    perso1.tx = 10;
    perso1.ty = 10;
    perso2.tx = 10;
    perso2.ty = 10;
}