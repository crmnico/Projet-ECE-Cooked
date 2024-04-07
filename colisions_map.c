#include "Header.h"

void colisions_map(){
    int nx_1,ny_1,nx_2,ny_2;
    nx_1=1+(perso1.pos_x+20)/40;
    ny_1=1+((perso1.pos_y+40)/40)-3;
    nx_2=1+(perso2.pos_x+20)/40;
    ny_2=1+((perso2.pos_y+40)/40)-3;
    printf("%d %d %d %d\n",nx_1,ny_1,nx_2,ny_2);
    for (int i = 0; i < 11; ++i) {
        printf("%c %c %c %c %c\n", map_niv1[i][1], map_niv1[i][10], map_niv1[i][15], map_niv1[i][19]);
    }
    if ((map_niv1[ny_1][nx_1])!=0){
        perso1.pos_x = perso1.precx, perso1.pos_y = perso1.precy;
    }
    if ((map_niv1[ny_2][nx_2])!=0){
        perso2.pos_x = perso2.precx, perso2.pos_y = perso2.precy;
    }
}