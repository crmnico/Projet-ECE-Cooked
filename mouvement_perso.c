#include "Header.h"

void mouvement_perso1(){
    perso1.precdx = perso1.dx, perso1.precdy = perso1.dy;       // Pour les priorites des actions
    if(key[KEY_LEFT] && key[KEY_DOWN]) perso1.dy = VITESSE_PERSO*0.71,  perso1.dx = -VITESSE_PERSO*0.71;
    else if(key[KEY_RIGHT] && key[KEY_DOWN]) perso1.dy = VITESSE_PERSO*0.71,  perso1.dx = VITESSE_PERSO*0.71;
    else if(key[KEY_UP] && key[KEY_RIGHT]) perso1.dy = -VITESSE_PERSO*0.71, perso1.dx = VITESSE_PERSO*0.71;
    else if(key[KEY_UP] && key[KEY_LEFT]) perso1.dy = -VITESSE_PERSO*0.71, perso1.dx = -VITESSE_PERSO*0.71;
    else if (key[KEY_UP]) perso1.dy = -VITESSE_PERSO, perso1.dx=0;
    else if (key[KEY_DOWN]) perso1.dy = VITESSE_PERSO, perso1.dx=0;
    else if (key[KEY_LEFT]) perso1.dx = -VITESSE_PERSO, perso1.dy=0;
    else if (key[KEY_RIGHT]) perso1.dx = VITESSE_PERSO, perso1.dy=0;
    else perso1.dx = 0,  perso1.dy = 0;
}

void mouvement_perso2(){
    perso2.precdx = perso2.dx, perso2.precdy = perso2.dy;       // Pour les priorites des actions
    if(key[KEY_A] && key[KEY_S]) perso2.dy = VITESSE_PERSO*0.71, perso2.dx = -VITESSE_PERSO*0.71;
    else if(key[KEY_D] && key[KEY_S]) perso2.dy = VITESSE_PERSO*0.71, perso2.dx = VITESSE_PERSO*0.71;
    else if(key[KEY_W] && key[KEY_D]) perso2.dy = -VITESSE_PERSO*0.71, perso2.dx = VITESSE_PERSO*0.71;
    else if(key[KEY_W] && key[KEY_A]) perso2.dy = -VITESSE_PERSO*0.71, perso2.dx = -VITESSE_PERSO*0.71;
    else if (key[KEY_W]) perso2.dy = -VITESSE_PERSO, perso2.dx=0;
    else if (key[KEY_S]) perso2.dy = VITESSE_PERSO, perso2.dx=0;
    else if (key[KEY_A]) perso2.dx = -VITESSE_PERSO, perso2.dy=0;
    else if (key[KEY_D]) perso2.dx = VITESSE_PERSO, perso2.dy=0;
    else perso2.dx = 0, perso2.dy = 0;
}

void action_perso1(){
    perso1.action=0;
    if(key[KEY_C])perso1.action=1;
    else if (key[KEY_V])perso1.action=2;
}

void action_perso2(){
    perso2.action=0;
    if(key[KEY_L])perso2.action=1;
    else if (key[KEY_M])perso2.action=2;
}