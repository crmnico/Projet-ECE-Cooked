#include "Header.h"

void update_frame() {

    ////PERSONNAGE 1////
    if (perso1.dx != 0 || perso1.dy!= 0) {
        perso1.frame_counter+=1;
    }else
    {
        perso1.frame_counter=0;
    }
    if (perso1.frame_counter >= 7) {
        perso1.frame_counter = 1;
    }

    ////PERSONNAGE 2////
    if (perso2.dx != 0 || perso2.dy != 0) {
        perso2.frame_counter+=1;
    }else
    {
        perso2.frame_counter=0;
    }
    if (perso2.frame_counter >= 7) {
        perso2.frame_counter = 1;
    }
}