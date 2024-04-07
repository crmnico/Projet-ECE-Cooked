#include "Header.h"

void colisions_perso(){
    if (((perso1.pos_x+perso1.tx/2)<=(perso2.pos_x-perso2.tx/2))&&((perso1.pos_x-perso1.tx/2)>=(perso2.pos_x+perso2.tx/2))
        &&((perso1.pos_y+perso1.ty/2)>=(perso2.pos_y-perso2.ty/2))&&((perso1.pos_y-perso1.ty/2)<=(perso2.pos_y+perso2.ty/2))){
        perso1.pos_x = perso1.precx,perso1.pos_y = perso1.precy;
        perso2.pos_x = perso2.precx,perso2.pos_y = perso2.precy;
    }
}

/*
     int retour;
    int m[4],imin,i;

    // Calcul des marges d'intersection (a2 par rapport à a1)
    m[0]=perso2.pos_x + perso2.tx - perso1.pos_x; // 0: à droite
    m[1]=perso1.pos_x + perso1.tx - perso2.pos_x; // 1: à gauche
    m[2]=perso2.pos_y + perso2.ty - perso1.pos_y; // 2: en bas
    m[3]=perso1.pos_y + perso1.ty - perso2.pos_y; // 3: en haut

    // Chercher l'indice de la plus petite marge
    imin=0;
    for (i=1;i<4;i++)
        if (m[i]<m[imin])
            imin=i;

    // A priori pas de collision
    retour=0;

    // Si la plus petite marge n'est pas strictement négative
    // alors c'est qu'on a une collision et cette collision est de ce coté
    if (m[imin]>=0)
        retour=imin+1;  // on retourne l'indice du coté + 1 (car 0 signifie "pas de collision")

    return retour;

 */

