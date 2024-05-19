#include "Header.h"

void dessine_perso() {

    ////PERSONNAGE 1////
    if(perso1.current_direction==NORTH) {
        draw_sprite(page, direction_images[perso1.num_skin][NORTH][perso1.frame_counter/2], perso1.pos_x-15,perso1.pos_y-15);
    }else if(perso1.current_direction==SOUTH){
        draw_sprite(page, direction_images[perso1.num_skin][SOUTH][perso1.frame_counter/2], perso1.pos_x-15,perso1.pos_y-15);
    }else if((perso1.current_direction==WEST)||(perso1.current_direction==SOUTHWEST)||(perso1.current_direction==NORTHWEST)){
        draw_sprite(page, direction_images[perso1.num_skin][WEST][perso1.frame_counter/2], perso1.pos_x-15,perso1.pos_y-15);
    }else if((perso1.current_direction==EAST)||(perso1.current_direction==SOUTHEAST)||(perso1.current_direction==NORTHEAST)){
        draw_sprite(page, direction_images[perso1.num_skin][EAST][perso1.frame_counter/2], perso1.pos_x-15,perso1.pos_y-15);
    }

    ////PERSONNAGE 2////
    if(perso2.current_direction==NORTH) {
        draw_sprite(page, direction_images[perso2.num_skin][NORTH][perso2.frame_counter/2], perso2.pos_x-15,perso2.pos_y-15);
    }else if(perso2.current_direction==SOUTH){
        draw_sprite(page, direction_images[perso2.num_skin][SOUTH][perso2.frame_counter/2], perso2.pos_x-15,perso2.pos_y-15);
    }else if((perso2.current_direction==WEST)||(perso2.current_direction==SOUTHWEST)||(perso2.current_direction==NORTHWEST)){
        draw_sprite(page, direction_images[perso2.num_skin][WEST][perso2.frame_counter/2], perso2.pos_x-15,perso2.pos_y-15);
    }else if((perso2.current_direction==EAST)||(perso2.current_direction==SOUTHEAST)||(perso2.current_direction==NORTHEAST)){
        draw_sprite(page, direction_images[perso2.num_skin][EAST][perso2.frame_counter/2], perso2.pos_x-15,perso2.pos_y-15);
    }
}

