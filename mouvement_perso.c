#include "Header.h"

void mouvement_perso1(){
    if (key[KEY_UP]) perso1.dy = -2;
    else if (key[KEY_DOWN]) perso1.dy = 2;
    else if (key[KEY_LEFT]) perso1.dx = -2;
    else if (key[KEY_RIGHT]) perso1.dx = 2;
    else if(key[KEY_LEFT] && key[KEY_DOWN]) perso1.dy = 2,  perso1.dx = -2;
    else if(key[KEY_RIGHT] && key[KEY_DOWN]) perso1.dy = 2,  perso1.dx = 2;
    else if(key[KEY_UP] && key[KEY_RIGHT]) perso1.dy = -2, perso1.dx = 2;
    else if(key[KEY_UP] && key[KEY_LEFT]) perso1.dy = -2, perso1.dx = -2;
    else perso1.dx = 0,  perso1.dy = 0;
}



void mouvement_perso2(){
    if (key[KEY_W]) perso2.dy = -2;
    else if (key[KEY_S]) perso2.dy = 2;
    else if (key[KEY_A]) perso2.dx = -2;
    else if (key[KEY_D]) perso2.dx = 2;
    else if(key[KEY_A] && key[KEY_S]) perso2.dy = 2, perso2.dx = -2;
    else if(key[KEY_D] && key[KEY_S]) perso2.dy = 2, perso2.dx = 2;
    else if(key[KEY_W] && key[KEY_D]) perso2.dy = -2, perso2.dx = 2;
    else if(key[KEY_W] && key[KEY_A]) perso2.dy = -2, perso2.dx = -2;
    else perso2.dx = 0, perso2.dy = 0;
}