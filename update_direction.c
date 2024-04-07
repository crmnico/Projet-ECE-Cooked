#include "Header.h"

void update_direction() {

    ////PERSONNAGE 1////
    if (perso1.dx == 0 && perso1.dy < 0)
        perso1.current_direction = NORTH;
    else if (perso1.dx == 0 && perso1.dy > 0)
        perso1.current_direction = SOUTH;
    else if (perso1.dx > 0 && perso1.dy == 0)
        perso1.current_direction = EAST;
    else if (perso1.dx < 0 && perso1.dy == 0)
        perso1.current_direction = WEST;
    else if (perso1.dx < 0 && perso1.dy < 0)
        perso1.current_direction = NORTHWEST;
    else if (perso1.dx > 0 && perso1.dy < 0)
        perso1.current_direction = NORTHEAST;
    else if (perso1.dx < 0 && perso1.dy > 0)
        perso1.current_direction = SOUTHWEST;
    else if (perso1.dx > 0 && perso1.dy > 0)
        perso1.current_direction = SOUTHEAST;


    ////PERSONNAGE 2////
    if (perso2.dx == 0 && perso2.dy < 0)
        perso2.current_direction = NORTH;
    else if (perso2.dx == 0 && perso2.dy > 0)
        perso2.current_direction = SOUTH;
    else if (perso2.dx > 0 && perso2.dy == 0)
        perso2.current_direction = EAST;
    else if (perso2.dx < 0 && perso2.dy == 0)
        perso2.current_direction = WEST;
    else if (perso2.dx < 0 && perso2.dy < 0)
        perso2.current_direction = NORTHWEST;
    else if (perso2.dx > 0 && perso2.dy < 0)
        perso2.current_direction = NORTHEAST;
    else if (perso2.dx < 0 && perso2.dy > 0)
        perso2.current_direction = SOUTHWEST;
    else if (perso2.dx > 0 && perso2.dy > 0)
        perso2.current_direction = SOUTHEAST;
}