#include "Header.h"

void chargement_perso1(){
    direction_images[NORTH][0] = load_bitmap("Images/personnages/homme/nord_1.bmp",NULL);
    direction_images[NORTH][1] = load_bitmap("Images/personnages/homme/nord_2.bmp",NULL);
    direction_images[NORTH][2] = load_bitmap("Images/personnages/homme/nord_3.bmp",NULL);
    direction_images[NORTH][3] = load_bitmap("Images/personnages/homme/nord_4.bmp",NULL);
    direction_images[NORTH][4] = load_bitmap("Images/personnages/homme/nord_5.bmp",NULL);
    direction_images[NORTH][5] = load_bitmap("Images/personnages/homme/nord_6.bmp",NULL);
    direction_images[NORTH][6] = load_bitmap("Images/personnages/homme/nord_7.bmp",NULL);

    direction_images[SOUTH][0] = load_bitmap("Images/personnages/homme/sud_1.bmp",NULL);
    direction_images[SOUTH][1] = load_bitmap("Images/personnages/homme/sud_2.bmp",NULL);
    direction_images[SOUTH][2] = load_bitmap("Images/personnages/homme/sud_3.bmp",NULL);
    direction_images[SOUTH][3] = load_bitmap("Images/personnages/homme/sud_4.bmp",NULL);
    direction_images[SOUTH][4] = load_bitmap("Images/personnages/homme/sud_5.bmp",NULL);
    direction_images[SOUTH][5] = load_bitmap("Images/personnages/homme/sud_6.bmp",NULL);
    direction_images[SOUTH][6] = load_bitmap("Images/personnages/homme/sud_7.bmp",NULL);

    direction_images[EAST][0] = load_bitmap("Images/personnages/homme/est_1.bmp",NULL);
    direction_images[EAST][1] = load_bitmap("Images/personnages/homme/est_2.bmp",NULL);
    direction_images[EAST][2] = load_bitmap("Images/personnages/homme/est_3.bmp",NULL);
    direction_images[EAST][3] = load_bitmap("Images/personnages/homme/est_4.bmp",NULL);
    direction_images[EAST][4] = load_bitmap("Images/personnages/homme/est_5.bmp",NULL);
    direction_images[EAST][5] = load_bitmap("Images/personnages/homme/est_6.bmp",NULL);
    direction_images[EAST][6] = load_bitmap("Images/personnages/homme/est_7.bmp",NULL);

    direction_images[WEST][0] = load_bitmap("Images/personnages/homme/ouest_1.bmp",NULL);
    direction_images[WEST][1] = load_bitmap("Images/personnages/homme/ouest_2.bmp",NULL);
    direction_images[WEST][2] = load_bitmap("Images/personnages/homme/ouest_3.bmp",NULL);
    direction_images[WEST][3] = load_bitmap("Images/personnages/homme/ouest_4.bmp",NULL);
    direction_images[WEST][4] = load_bitmap("Images/personnages/homme/ouest_5.bmp",NULL);
    direction_images[WEST][5] = load_bitmap("Images/personnages/homme/ouest_6.bmp",NULL);
    direction_images[WEST][6] = load_bitmap("Images/personnages/homme/ouest_7.bmp",NULL);

    direction_images[NORTHWEST][0] = load_bitmap("Images/personnages/homme/nord_ouest_1.bmp",NULL);
    direction_images[NORTHWEST][1] = load_bitmap("Images/personnages/homme/nord_ouest_2.bmp",NULL);
    direction_images[NORTHWEST][2] = load_bitmap("Images/personnages/homme/nord_ouest_3.bmp",NULL);
    direction_images[NORTHWEST][3] = load_bitmap("Images/personnages/homme/nord_ouest_4.bmp",NULL);
    direction_images[NORTHWEST][4] = load_bitmap("Images/personnages/homme/nord_ouest_5.bmp",NULL);
    direction_images[NORTHWEST][5] = load_bitmap("Images/personnages/homme/nord_ouest_6.bmp",NULL);
    direction_images[NORTHWEST][6] = load_bitmap("Images/personnages/homme/nord_ouest_7.bmp",NULL);

    direction_images[NORTHEAST][0] = load_bitmap("Images/personnages/homme/nord_est_1.bmp",NULL);
    direction_images[NORTHEAST][1] = load_bitmap("Images/personnages/homme/nord_est_2.bmp",NULL);
    direction_images[NORTHEAST][2] = load_bitmap("Images/personnages/homme/nord_est_3.bmp",NULL);
    direction_images[NORTHEAST][3] = load_bitmap("Images/personnages/homme/nord_est_4.bmp",NULL);
    direction_images[NORTHEAST][4] = load_bitmap("Images/personnages/homme/nord_est_5.bmp",NULL);
    direction_images[NORTHEAST][5] = load_bitmap("Images/personnages/homme/nord_est_6.bmp",NULL);
    direction_images[NORTHEAST][6] = load_bitmap("Images/personnages/homme/nord_est_7.bmp",NULL);

    direction_images[SOUTHWEST][0] = load_bitmap("Images/personnages/homme/sud_ouest_1.bmp",NULL);
    direction_images[SOUTHWEST][1] = load_bitmap("Images/personnages/homme/sud_ouest_2.bmp",NULL);
    direction_images[SOUTHWEST][2] = load_bitmap("Images/personnages/homme/sud_ouest_3.bmp",NULL);
    direction_images[SOUTHWEST][3] = load_bitmap("Images/personnages/homme/sud_ouest_4.bmp",NULL);
    direction_images[SOUTHWEST][4] = load_bitmap("Images/personnages/homme/sud_ouest_5.bmp",NULL);
    direction_images[SOUTHWEST][5] = load_bitmap("Images/personnages/homme/sud_ouest_6.bmp",NULL);
    direction_images[SOUTHWEST][6] = load_bitmap("Images/personnages/homme/sud_ouest_7.bmp",NULL);

    direction_images[SOUTHEAST][0] = load_bitmap("Images/personnages/homme/sud_est_1.bmp",NULL);
    direction_images[SOUTHEAST][1] = load_bitmap("Images/personnages/homme/sud_est_2.bmp",NULL);
    direction_images[SOUTHEAST][2] = load_bitmap("Images/personnages/homme/sud_est_3.bmp",NULL);
    direction_images[SOUTHEAST][3] = load_bitmap("Images/personnages/homme/sud_est_4.bmp",NULL);
    direction_images[SOUTHEAST][4] = load_bitmap("Images/personnages/homme/sud_est_5.bmp",NULL);
    direction_images[SOUTHEAST][5] = load_bitmap("Images/personnages/homme/sud_est_6.bmp",NULL);
    direction_images[SOUTHEAST][6] = load_bitmap("Images/personnages/homme/sud_est_7.bmp",NULL);

    // Check image loading
    if (!direction_images[SOUTH][5] || !direction_images[NORTH][0] || !direction_images[SOUTHEAST][6] || !direction_images[NORTHEAST][3]) {
        allegro_message("Failed to load images!");
        destroy_bitmap(page);
        allegro_exit();
    }


}