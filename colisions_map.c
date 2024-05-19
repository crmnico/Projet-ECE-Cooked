#include "Header.h"

void colisions_map() {
    //REGARDE QUELLE NIVEAU ON EST
    int niv;
    for (int j = 0; j < 8; ++j) {
        if (niveau[j].actuel==1) niv = j;
    }

    int m1[8][2], m2[8][2];

    m1[0][0] = perso1.pos_x / 40, m1[0][1] = ((perso1.pos_y + 15) / 40) - 3;    //NORD
    m1[1][0] = perso1.pos_x / 40, m1[1][1] = ((perso1.pos_y - 15) / 40) - 3;    //SUD
    m1[2][0] = (perso1.pos_x + 15) / 40, m1[2][1] = (perso1.pos_y / 40) - 3;    //EST
    m1[3][0] = (perso1.pos_x - 15) / 40, m1[3][1] = (perso1.pos_y / 40) - 3;    //OUEST
    m1[4][0] = (perso1.pos_x - 12) / 40, m1[4][1] = ((perso1.pos_y + 12) / 40) - 3; //NORD-OUEST
    m1[5][0] = (perso1.pos_x + 12) / 40, m1[5][1] = ((perso1.pos_y - 12) / 40) - 3; //SUD-EST
    m1[6][0] = (perso1.pos_x - 12) / 40, m1[6][1] = ((perso1.pos_y - 12) / 40) - 3; //SUD-OUEST
    m1[7][0] = (perso1.pos_x + 12) / 40, m1[7][1] = ((perso1.pos_y + 12) / 40) - 3; //NORD-EST

    m2[0][0] = perso2.pos_x / 40, m2[0][1] = ((perso2.pos_y + 15) / 40) - 3;  //NORD
    m2[1][0] = perso2.pos_x / 40, m2[1][1] = ((perso2.pos_y - 15) / 40) - 3;  //SUD
    m2[2][0] = (perso2.pos_x + 15) / 40, m2[2][1] = (perso2.pos_y / 40) - 3;  //EST
    m2[3][0] = (perso2.pos_x - 15) / 40, m2[3][1] = (perso2.pos_y / 40) - 3;  //OUEST
    m2[4][0] = (perso2.pos_x - 12) / 40, m2[4][1] = ((perso2.pos_y + 12) / 40) - 3;    //NORD_OUEST
    m2[5][0] = (perso2.pos_x + 12) / 40, m2[5][1] = ((perso2.pos_y - 12) / 40) - 3;    //SUD_EST
    m2[6][0] = (perso2.pos_x - 12) / 40, m2[6][1] = ((perso2.pos_y - 12) / 40) - 3;    //SUD_OUEST
    m2[7][0] = (perso2.pos_x + 12) / 40, m2[7][1] = ((perso2.pos_y + 12) / 40) - 3;    //NORD-EST


    for (int i = 0; i < 8; ++i) {
        if ((niveau[niv].map[m1[i][1]][m1[i][0]]) != 0) {
            perso1.pos_x = perso1.precx, perso1.pos_y = perso1.precy;
        }
        if ((niveau[niv].map[m2[i][1]][m2[i][0]]) != 0) {
            perso2.pos_x = perso2.precx, perso2.pos_y = perso2.precy;
        }
    }
}