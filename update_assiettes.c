#include "Header.h"

void update_position_objet(){
    if (perso1.en_main_as != NULL) {
        switch (perso1.current_direction) {
            case NORTH:
                perso1.en_main_as->pos_x = perso1.pos_x;
                perso1.en_main_as->pos_y = perso1.pos_y - 15;
                break;
            case SOUTH:
                perso1.en_main_as->pos_x = perso1.pos_x;
                perso1.en_main_as->pos_y = perso1.pos_y + 15;
                break;
            case EAST:
                perso1.en_main_as->pos_x = perso1.pos_x + 15;
                perso1.en_main_as->pos_y = perso1.pos_y;
                break;
            case WEST:
                perso1.en_main_as->pos_x = perso1.pos_x - 15;
                perso1.en_main_as->pos_y = perso1.pos_y;
                break;
            case NORTHWEST:
                perso1.en_main_as->pos_x = perso1.pos_x - 15;
                perso1.en_main_as->pos_y = perso1.pos_y - 15;
                break;
            case NORTHEAST:
                perso1.en_main_as->pos_x = perso1.pos_x + 15;
                perso1.en_main_as->pos_y = perso1.pos_y - 15;
                break;
            case SOUTHWEST:
                perso1.en_main_as->pos_x = perso1.pos_x - 15;
                perso1.en_main_as->pos_y = perso1.pos_y + 15;
                break;
            case SOUTHEAST:
                perso1.en_main_as->pos_x = perso1.pos_x + 15;
                perso1.en_main_as->pos_y = perso1.pos_y + 15;
                break;
            }
    }
    if(perso1.en_main_al!=NULL){
        switch (perso1.current_direction) {
            case NORTH:
                perso1.en_main_al->pos_x = perso1.pos_x;
                perso1.en_main_al->pos_y = perso1.pos_y - 15;
                break;
            case SOUTH:
                perso1.en_main_al->pos_x = perso1.pos_x;
                perso1.en_main_al->pos_y = perso1.pos_y + 15;
                break;
            case EAST:
                perso1.en_main_al->pos_x = perso1.pos_x + 15;
                perso1.en_main_al->pos_y = perso1.pos_y;
                break;
            case WEST:
                perso1.en_main_al->pos_x = perso1.pos_x - 15;
                perso1.en_main_al->pos_y = perso1.pos_y;
                break;
            case NORTHWEST:
                perso1.en_main_al->pos_x = perso1.pos_x - 15;
                perso1.en_main_al->pos_y = perso1.pos_y - 15;
                break;
            case NORTHEAST:
                perso1.en_main_al->pos_x = perso1.pos_x + 15;
                perso1.en_main_al->pos_y = perso1.pos_y - 15;
                break;
            case SOUTHWEST:
                perso1.en_main_al->pos_x = perso1.pos_x - 15;
                perso1.en_main_al->pos_y = perso1.pos_y + 15;
                break;
            case SOUTHEAST:
                perso1.en_main_al->pos_x = perso1.pos_x + 15;
                perso1.en_main_al->pos_y = perso1.pos_y + 15;
                break;
        }
    }

    if (perso2.en_main_as != NULL) {
        switch (perso2.current_direction) {
            case NORTH:
                perso2.en_main_as->pos_x = perso2.pos_x;
                perso2.en_main_as->pos_y = perso2.pos_y - 15;
                break;
            case SOUTH:
                perso2.en_main_as->pos_x = perso2.pos_x;
                perso2.en_main_as->pos_y = perso2.pos_y + 15;
                break;
            case EAST:
                perso2.en_main_as->pos_x = perso2.pos_x + 15;
                perso2.en_main_as->pos_y = perso2.pos_y;
                break;
            case WEST:
                perso2.en_main_as->pos_x = perso2.pos_x - 15;
                perso2.en_main_as->pos_y = perso2.pos_y;
                break;
            case NORTHWEST:
                perso2.en_main_as->pos_x = perso2.pos_x - 15;
                perso2.en_main_as->pos_y = perso2.pos_y - 15;
                break;
            case NORTHEAST:
                perso2.en_main_as->pos_x = perso2.pos_x + 15;
                perso2.en_main_as->pos_y = perso2.pos_y - 15;
                break;
            case SOUTHWEST:
                perso2.en_main_as->pos_x = perso2.pos_x - 15;
                perso2.en_main_as->pos_y = perso2.pos_y + 15;
                break;
            case SOUTHEAST:
                perso2.en_main_as->pos_x = perso2.pos_x + 15;
                perso2.en_main_as->pos_y = perso2.pos_y + 15;
                break;
            }
    }
    if(perso2.en_main_al!=NULL){
        switch (perso2.current_direction) {
            case NORTH:
                perso2.en_main_al->pos_x = perso2.pos_x;
                perso2.en_main_al->pos_y = perso2.pos_y - 15;
                break;
            case SOUTH:
                perso2.en_main_al->pos_x = perso2.pos_x;
                perso2.en_main_al->pos_y = perso2.pos_y + 15;
                break;
            case EAST:
                perso2.en_main_al->pos_x = perso2.pos_x + 15;
                perso2.en_main_al->pos_y = perso2.pos_y;
                break;
            case WEST:
                perso2.en_main_al->pos_x = perso2.pos_x - 15;
                perso2.en_main_al->pos_y = perso2.pos_y;
                break;
            case NORTHWEST:
                perso2.en_main_al->pos_x = perso2.pos_x - 15;
                perso2.en_main_al->pos_y = perso2.pos_y - 15;
                break;
            case NORTHEAST:
                perso2.en_main_al->pos_x = perso2.pos_x + 15;
                perso2.en_main_al->pos_y = perso2.pos_y - 15;
                break;
            case SOUTHWEST:
                perso2.en_main_al->pos_x = perso2.pos_x - 15;
                perso2.en_main_al->pos_y = perso2.pos_y + 15;
                break;
            case SOUTHEAST:
                perso2.en_main_al->pos_x = perso2.pos_x + 15;
                perso2.en_main_al->pos_y = perso2.pos_y + 15;
                break;
        }
    }
}