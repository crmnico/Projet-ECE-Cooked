#include "Header.h"

void update_position() {
    // ENREGISTRER POSITION ACTUELLE
    perso1.precx = perso1.pos_x;
    perso1.precy = perso1.pos_y;

    perso2.precx = perso2.pos_x;
    perso2.precy = perso2.pos_y;

    // Move object 2 according to the specified offset
    perso1.pos_x += perso1.dx;
    perso1.pos_y += perso1.dy;

    // Move object 2 according to the specified offset
    perso2.pos_x += perso2.dx;
    perso2.pos_y += perso2.dy;

    colisions_map();
    colisions_perso();

}