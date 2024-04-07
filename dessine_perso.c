#include "Header.h"

void dessine_perso() {
    draw_sprite(page,direction_images[perso1.current_direction][perso1.frame_counter],perso1.pos_x,perso1.pos_y);
    draw_sprite(page,direction_images[perso2.current_direction][perso2.frame_counter],perso2.pos_x,perso2.pos_y);
}

