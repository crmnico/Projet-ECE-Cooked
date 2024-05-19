#include "Header.h"

int colisions_perso(){
    if ((sqrt((perso1.pos_x-perso2.pos_x)*(perso1.pos_x-perso2.pos_x)+(perso1.pos_y-perso2.pos_y)*(perso1.pos_y-perso2.pos_y)))<=30) {
        perso1.pos_x = perso1.precx, perso1.pos_y = perso1.precy;
        perso2.pos_x = perso2.precx, perso2.pos_y = perso2.precy;
    }
}
//IDEE : POUVOIR POUSSER L4AUTRE QUAND IL BOUGE PAS