#include "Header.h"

void chargement_perso1(){

    ////PERSONNAGE 1////
    direction_images[1][NORTH][0] = load_bitmap("Images/personnages/1/1_1_1.bmp",NULL);
    direction_images[1][NORTH][1] = load_bitmap("Images/personnages/1/1_1_2.bmp",NULL);
    direction_images[1][NORTH][2] = load_bitmap("Images/personnages/1/1_1_3.bmp",NULL);
    direction_images[1][NORTH][3] = load_bitmap("Images/personnages/1/1_1_4.bmp",NULL);
    direction_images[1][NORTH][4] = load_bitmap("Images/personnages/1/1_1_5.bmp",NULL);

    direction_images[1][WEST][0] = load_bitmap("Images/personnages/1/1_2_1.bmp",NULL);
    direction_images[1][WEST][1] = load_bitmap("Images/personnages/1/1_2_2.bmp",NULL);
    direction_images[1][WEST][2] = load_bitmap("Images/personnages/1/1_2_3.bmp",NULL);
    direction_images[1][WEST][3] = load_bitmap("Images/personnages/1/1_2_4.bmp",NULL);
    direction_images[1][WEST][4] = load_bitmap("Images/personnages/1/1_2_5.bmp",NULL);

    direction_images[1][SOUTH][0] = load_bitmap("Images/personnages/1/1_3_1.bmp",NULL);
    direction_images[1][SOUTH][1] = load_bitmap("Images/personnages/1/1_3_2.bmp",NULL);
    direction_images[1][SOUTH][2] = load_bitmap("Images/personnages/1/1_3_3.bmp",NULL);
    direction_images[1][SOUTH][3] = load_bitmap("Images/personnages/1/1_3_4.bmp",NULL);
    direction_images[1][SOUTH][4] = load_bitmap("Images/personnages/1/1_3_5.bmp",NULL);

    direction_images[1][EAST][0] = load_bitmap("Images/personnages/1/1_4_1.bmp",NULL);
    direction_images[1][EAST][1] = load_bitmap("Images/personnages/1/1_4_2.bmp",NULL);
    direction_images[1][EAST][2] = load_bitmap("Images/personnages/1/1_4_3.bmp",NULL);
    direction_images[1][EAST][3] = load_bitmap("Images/personnages/1/1_4_4.bmp",NULL);
    direction_images[1][EAST][4] = load_bitmap("Images/personnages/1/1_4_5.bmp",NULL);


    ////PERSONNAGE 2////
    direction_images[2][NORTH][0] = load_bitmap("Images/personnages/2/2_1_1.bmp",NULL);
    direction_images[2][NORTH][1] = load_bitmap("Images/personnages/2/2_1_2.bmp",NULL);
    direction_images[2][NORTH][2] = load_bitmap("Images/personnages/2/2_1_3.bmp",NULL);
    direction_images[2][NORTH][3] = load_bitmap("Images/personnages/2/2_1_4.bmp",NULL);
    direction_images[2][NORTH][4] = load_bitmap("Images/personnages/2/2_1_5.bmp",NULL);

    direction_images[2][WEST][1] = load_bitmap("Images/personnages/2/2_2_2.bmp",NULL);
    direction_images[2][WEST][2] = load_bitmap("Images/personnages/2/2_2_3.bmp",NULL);
    direction_images[2][WEST][3] = load_bitmap("Images/personnages/2/2_2_4.bmp",NULL);
    direction_images[2][WEST][4] = load_bitmap("Images/personnages/2/2_2_5.bmp",NULL);

    direction_images[2][SOUTH][0] = load_bitmap("Images/personnages/2/2_3_1.bmp",NULL);
    direction_images[2][SOUTH][1] = load_bitmap("Images/personnages/2/2_3_2.bmp",NULL);
    direction_images[2][SOUTH][2] = load_bitmap("Images/personnages/2/2_3_3.bmp",NULL);
    direction_images[2][SOUTH][3] = load_bitmap("Images/personnages/2/2_3_4.bmp",NULL);
    direction_images[2][SOUTH][4] = load_bitmap("Images/personnages/2/2_3_5.bmp",NULL);

    direction_images[2][EAST][0] = load_bitmap("Images/personnages/2/2_4_1.bmp",NULL);
    direction_images[2][EAST][1] = load_bitmap("Images/personnages/2/2_4_2.bmp",NULL);
    direction_images[2][EAST][2] = load_bitmap("Images/personnages/2/2_4_3.bmp",NULL);
    direction_images[2][EAST][3] = load_bitmap("Images/personnages/2/2_4_4.bmp",NULL);
    direction_images[2][EAST][4] = load_bitmap("Images/personnages/2/2_4_5.bmp",NULL);


    ////PERSONNAGE 3////
    direction_images[3][NORTH][0] = load_bitmap("Images/personnages/3/3_1_1.bmp",NULL);
    direction_images[3][NORTH][1] = load_bitmap("Images/personnages/3/3_1_2.bmp",NULL);
    direction_images[3][NORTH][2] = load_bitmap("Images/personnages/3/3_1_3.bmp",NULL);
    direction_images[3][NORTH][3] = load_bitmap("Images/personnages/3/3_1_4.bmp",NULL);
    direction_images[3][NORTH][4] = load_bitmap("Images/personnages/3/3_1_5.bmp",NULL);

    direction_images[3][WEST][0] = load_bitmap("Images/personnages/3/3_2_1.bmp",NULL);
    direction_images[3][WEST][1] = load_bitmap("Images/personnages/3/3_2_2.bmp",NULL);
    direction_images[3][WEST][2] = load_bitmap("Images/personnages/3/3_2_3.bmp",NULL);
    direction_images[3][WEST][3] = load_bitmap("Images/personnages/3/3_2_4.bmp",NULL);
    direction_images[3][WEST][4] = load_bitmap("Images/personnages/3/3_2_5.bmp",NULL);

    direction_images[3][SOUTH][0] = load_bitmap("Images/personnages/3/3_3_1.bmp",NULL);
    direction_images[3][SOUTH][1] = load_bitmap("Images/personnages/3/3_3_2.bmp",NULL);
    direction_images[3][SOUTH][2] = load_bitmap("Images/personnages/3/3_3_3.bmp",NULL);
    direction_images[3][SOUTH][3] = load_bitmap("Images/personnages/3/3_3_4.bmp",NULL);
    direction_images[3][SOUTH][4] = load_bitmap("Images/personnages/3/3_3_5.bmp",NULL);

    direction_images[3][EAST][0] = load_bitmap("Images/personnages/3/3_4_1.bmp",NULL);
    direction_images[3][EAST][1] = load_bitmap("Images/personnages/3/3_4_2.bmp",NULL);
    direction_images[3][EAST][2] = load_bitmap("Images/personnages/3/3_4_3.bmp",NULL);
    direction_images[3][EAST][3] = load_bitmap("Images/personnages/3/3_4_4.bmp",NULL);
    direction_images[3][EAST][4] = load_bitmap("Images/personnages/3/3_4_5.bmp",NULL);


    ////PERSONNAGE 4////
    direction_images[4][NORTH][0] = load_bitmap("Images/personnages/4/4_1_1.bmp",NULL);
    direction_images[4][NORTH][1] = load_bitmap("Images/personnages/4/4_1_2.bmp",NULL);
    direction_images[4][NORTH][2] = load_bitmap("Images/personnages/4/4_1_3.bmp",NULL);
    direction_images[4][NORTH][3] = load_bitmap("Images/personnages/4/4_1_4.bmp",NULL);
    direction_images[4][NORTH][4] = load_bitmap("Images/personnages/4/4_1_5.bmp",NULL);

    direction_images[4][WEST][0] = load_bitmap("Images/personnages/4/4_2_1.bmp",NULL);
    direction_images[4][WEST][1] = load_bitmap("Images/personnages/4/4_2_2.bmp",NULL);
    direction_images[4][WEST][2] = load_bitmap("Images/personnages/4/4_2_3.bmp",NULL);
    direction_images[4][WEST][3] = load_bitmap("Images/personnages/4/4_2_4.bmp",NULL);
    direction_images[4][WEST][4] = load_bitmap("Images/personnages/4/4_2_5.bmp",NULL);

    direction_images[4][SOUTH][0] = load_bitmap("Images/personnages/4/4_3_1.bmp",NULL);
    direction_images[4][SOUTH][1] = load_bitmap("Images/personnages/4/4_3_2.bmp",NULL);
    direction_images[4][SOUTH][2] = load_bitmap("Images/personnages/4/4_3_3.bmp",NULL);
    direction_images[4][SOUTH][3] = load_bitmap("Images/personnages/4/4_3_4.bmp",NULL);
    direction_images[4][SOUTH][4] = load_bitmap("Images/personnages/4/4_3_5.bmp",NULL);

    direction_images[4][EAST][0] = load_bitmap("Images/personnages/4/4_4_1.bmp",NULL);
    direction_images[4][EAST][1] = load_bitmap("Images/personnages/4/4_4_2.bmp",NULL);
    direction_images[4][EAST][2] = load_bitmap("Images/personnages/4/4_4_3.bmp",NULL);
    direction_images[4][EAST][3] = load_bitmap("Images/personnages/4/4_4_4.bmp",NULL);
    direction_images[4][EAST][4] = load_bitmap("Images/personnages/4/4_4_5.bmp",NULL);


    ////PERSONNAGE 5////
    direction_images[5][NORTH][0] = load_bitmap("Images/personnages/5/5_1_1.bmp",NULL);
    direction_images[5][NORTH][1] = load_bitmap("Images/personnages/5/5_1_2.bmp",NULL);
    direction_images[5][NORTH][2] = load_bitmap("Images/personnages/5/5_1_3.bmp",NULL);
    direction_images[5][NORTH][3] = load_bitmap("Images/personnages/5/5_1_4.bmp",NULL);
    direction_images[5][NORTH][4] = load_bitmap("Images/personnages/5/5_1_5.bmp",NULL);

    direction_images[5][WEST][0] = load_bitmap("Images/personnages/5/5_2_1.bmp",NULL);
    direction_images[5][WEST][1] = load_bitmap("Images/personnages/5/5_2_2.bmp",NULL);
    direction_images[5][WEST][2] = load_bitmap("Images/personnages/5/5_2_3.bmp",NULL);
    direction_images[5][WEST][3] = load_bitmap("Images/personnages/5/5_2_4.bmp",NULL);
    direction_images[5][WEST][4] = load_bitmap("Images/personnages/5/5_2_5.bmp",NULL);

    direction_images[5][SOUTH][0] = load_bitmap("Images/personnages/5/5_3_1.bmp",NULL);
    direction_images[5][SOUTH][1] = load_bitmap("Images/personnages/5/5_3_2.bmp",NULL);
    direction_images[5][SOUTH][2] = load_bitmap("Images/personnages/5/5_3_3.bmp",NULL);
    direction_images[5][SOUTH][3] = load_bitmap("Images/personnages/5/5_3_4.bmp",NULL);
    direction_images[5][SOUTH][4] = load_bitmap("Images/personnages/5/5_3_5.bmp",NULL);

    direction_images[5][EAST][0] = load_bitmap("Images/personnages/5/5_4_1.bmp",NULL);
    direction_images[5][EAST][1] = load_bitmap("Images/personnages/5/5_4_2.bmp",NULL);
    direction_images[5][EAST][2] = load_bitmap("Images/personnages/5/5_4_3.bmp",NULL);
    direction_images[5][EAST][3] = load_bitmap("Images/personnages/5/5_4_4.bmp",NULL);
    direction_images[5][EAST][4] = load_bitmap("Images/personnages/5/5_4_5.bmp",NULL);


    ////PERSONNAGE 6////
    direction_images[6][NORTH][0] = load_bitmap("Images/personnages/6/6_1_1.bmp",NULL);
    direction_images[6][NORTH][1] = load_bitmap("Images/personnages/6/6_1_2.bmp",NULL);
    direction_images[6][NORTH][2] = load_bitmap("Images/personnages/6/6_1_3.bmp",NULL);
    direction_images[6][NORTH][3] = load_bitmap("Images/personnages/6/6_1_4.bmp",NULL);
    direction_images[6][NORTH][4] = load_bitmap("Images/personnages/6/6_1_5.bmp",NULL);

    direction_images[6][WEST][0] = load_bitmap("Images/personnages/6/6_2_1.bmp",NULL);
    direction_images[6][WEST][1] = load_bitmap("Images/personnages/6/6_2_2.bmp",NULL);
    direction_images[6][WEST][2] = load_bitmap("Images/personnages/6/6_2_3.bmp",NULL);
    direction_images[6][WEST][3] = load_bitmap("Images/personnages/6/6_2_4.bmp",NULL);
    direction_images[6][WEST][4] = load_bitmap("Images/personnages/6/6_2_5.bmp",NULL);

    direction_images[6][SOUTH][0] = load_bitmap("Images/personnages/6/6_3_1.bmp",NULL);
    direction_images[6][SOUTH][1] = load_bitmap("Images/personnages/6/6_3_2.bmp",NULL);
    direction_images[6][SOUTH][2] = load_bitmap("Images/personnages/6/6_3_3.bmp",NULL);
    direction_images[6][SOUTH][3] = load_bitmap("Images/personnages/6/6_3_4.bmp",NULL);
    direction_images[6][SOUTH][4] = load_bitmap("Images/personnages/6/6_3_5.bmp",NULL);

    direction_images[6][EAST][0] = load_bitmap("Images/personnages/6/6_4_1.bmp",NULL);
    direction_images[6][EAST][1] = load_bitmap("Images/personnages/6/6_4_2.bmp",NULL);
    direction_images[6][EAST][2] = load_bitmap("Images/personnages/6/6_4_3.bmp",NULL);
    direction_images[6][EAST][3] = load_bitmap("Images/personnages/6/6_4_4.bmp",NULL);
    direction_images[6][EAST][4] = load_bitmap("Images/personnages/6/6_4_5.bmp",NULL);


    ////PERSONNAGE 7////
    direction_images[7][NORTH][0] = load_bitmap("Images/personnages/7/7_1_1.bmp",NULL);
    direction_images[7][NORTH][1] = load_bitmap("Images/personnages/7/7_1_2.bmp",NULL);
    direction_images[7][NORTH][2] = load_bitmap("Images/personnages/7/7_1_3.bmp",NULL);
    direction_images[7][NORTH][3] = load_bitmap("Images/personnages/7/7_1_4.bmp",NULL);
    direction_images[7][NORTH][4] = load_bitmap("Images/personnages/7/7_1_5.bmp",NULL);

    direction_images[7][WEST][0] = load_bitmap("Images/personnages/7/7_2_1.bmp",NULL);
    direction_images[7][WEST][1] = load_bitmap("Images/personnages/7/7_2_2.bmp",NULL);
    direction_images[7][WEST][2] = load_bitmap("Images/personnages/7/7_2_3.bmp",NULL);
    direction_images[7][WEST][3] = load_bitmap("Images/personnages/7/7_2_4.bmp",NULL);
    direction_images[7][WEST][4] = load_bitmap("Images/personnages/7/7_2_5.bmp",NULL);

    direction_images[7][SOUTH][0] = load_bitmap("Images/personnages/7/7_3_1.bmp",NULL);
    direction_images[7][SOUTH][1] = load_bitmap("Images/personnages/7/7_3_2.bmp",NULL);
    direction_images[7][SOUTH][2] = load_bitmap("Images/personnages/7/7_3_3.bmp",NULL);
    direction_images[7][SOUTH][3] = load_bitmap("Images/personnages/7/7_3_4.bmp",NULL);
    direction_images[7][SOUTH][4] = load_bitmap("Images/personnages/7/7_3_5.bmp",NULL);

    direction_images[7][EAST][0] = load_bitmap("Images/personnages/7/7_4_1.bmp",NULL);
    direction_images[7][EAST][1] = load_bitmap("Images/personnages/7/7_4_2.bmp",NULL);
    direction_images[7][EAST][2] = load_bitmap("Images/personnages/7/7_4_3.bmp",NULL);
    direction_images[7][EAST][3] = load_bitmap("Images/personnages/7/7_4_4.bmp",NULL);
    direction_images[7][EAST][4] = load_bitmap("Images/personnages/7/7_4_5.bmp",NULL);


    ////PERSONNAGE 8////
    direction_images[8][NORTH][0] = load_bitmap("Images/personnages/8/8_1_1.bmp",NULL);
    direction_images[8][NORTH][1] = load_bitmap("Images/personnages/8/8_1_2.bmp",NULL);
    direction_images[8][NORTH][2] = load_bitmap("Images/personnages/8/8_1_3.bmp",NULL);
    direction_images[8][NORTH][3] = load_bitmap("Images/personnages/8/8_1_4.bmp",NULL);
    direction_images[8][NORTH][4] = load_bitmap("Images/personnages/8/8_1_5.bmp",NULL);

    direction_images[8][WEST][0] = load_bitmap("Images/personnages/8/8_2_1.bmp",NULL);
    direction_images[8][WEST][1] = load_bitmap("Images/personnages/8/8_2_2.bmp",NULL);
    direction_images[8][WEST][2] = load_bitmap("Images/personnages/8/8_2_3.bmp",NULL);
    direction_images[8][WEST][3] = load_bitmap("Images/personnages/8/8_2_4.bmp",NULL);
    direction_images[8][WEST][4] = load_bitmap("Images/personnages/8/8_2_5.bmp",NULL);

    direction_images[8][SOUTH][0] = load_bitmap("Images/personnages/8/8_3_1.bmp",NULL);
    direction_images[8][SOUTH][1] = load_bitmap("Images/personnages/8/8_3_2.bmp",NULL);
    direction_images[8][SOUTH][2] = load_bitmap("Images/personnages/8/8_3_3.bmp",NULL);
    direction_images[8][SOUTH][3] = load_bitmap("Images/personnages/8/8_3_4.bmp",NULL);
    direction_images[8][SOUTH][4] = load_bitmap("Images/personnages/8/8_3_5.bmp",NULL);

    direction_images[8][EAST][0] = load_bitmap("Images/personnages/8/8_4_1.bmp",NULL);
    direction_images[8][EAST][1] = load_bitmap("Images/personnages/8/8_4_2.bmp",NULL);
    direction_images[8][EAST][2] = load_bitmap("Images/personnages/8/8_4_3.bmp",NULL);
    direction_images[8][EAST][3] = load_bitmap("Images/personnages/8/8_4_4.bmp",NULL);
    direction_images[8][EAST][4] = load_bitmap("Images/personnages/8/8_4_5.bmp",NULL);
}