#include "Header.h"

void initialisation_perso(){
    perso1.pos_x = TAILLE_ECRAN_L / 2;
    perso1.pos_y = (TAILLE_ECRAN_H / 2)+150;
    perso2.pos_x= TAILLE_ECRAN_L / 2;
    perso2.pos_y = (TAILLE_ECRAN_H / 2);
    perso1.frame_counter=0;
    perso2.frame_counter=0;
    perso1.current_direction=NORTH;
    perso2.current_direction=NORTH;
    perso1.en_main_as=NULL;
    perso1.en_main_al=NULL;
    perso2.en_main_as=NULL;
    perso2.en_main_al=NULL;
    perso1.num_skin=0;
    perso2.num_skin=0;
}