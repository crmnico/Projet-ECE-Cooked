#include "Header.h"

void chargement_objets() {

    //OBJET
    //niv1
    objet[0] = load_bitmap("Images/Objets/aliments/0.bmp", NULL);
    objet[1] = load_bitmap("Images/Objets/aliments/1.bmp", NULL);
    objet[2] = load_bitmap("Images/Objets/aliments/2.bmp", NULL);
    objet[3] = load_bitmap("Images/Objets/aliments/3.bmp", NULL);
    //niv2
    objet[4] = load_bitmap("Images/Objets/aliments/4.bmp", NULL);
    objet[5] = load_bitmap("Images/Objets/aliments/5.bmp", NULL);
    objet[6] = load_bitmap("Images/Objets/aliments/6.bmp", NULL);
    objet[7] = load_bitmap("Images/Objets/aliments/7.bmp", NULL);
    //niv3
    objet[8] = load_bitmap("Images/Objets/aliments/8.bmp", NULL);
    objet[9] = load_bitmap("Images/Objets/aliments/9.bmp", NULL);
    objet[10] = load_bitmap("Images/Objets/aliments/10.bmp", NULL);
    objet[11] = load_bitmap("Images/Objets/aliments/11.bmp", NULL);
    //niv4
    objet[12] = load_bitmap("Images/Objets/aliments/12.bmp", NULL);
    objet[13] = load_bitmap("Images/Objets/aliments/13.bmp", NULL);
    objet[14] = load_bitmap("Images/Objets/aliments/14.bmp", NULL);
    objet[15] = load_bitmap("Images/Objets/aliments/15.bmp", NULL);
    //niv5
    objet[16] = load_bitmap("Images/Objets/aliments/16.bmp", NULL);
    objet[17] = load_bitmap("Images/Objets/aliments/17.bmp", NULL);
    objet[18] = load_bitmap("Images/Objets/aliments/18.bmp", NULL);
    objet[19] = load_bitmap("Images/Objets/aliments/19.bmp", NULL);
    //niv6      //ATTENTION PAS BONNE IMAGES
    objet[20] = load_bitmap("Images/Objets/aliments/16.bmp", NULL);
    objet[21] = load_bitmap("Images/Objets/aliments/17.bmp", NULL);
    objet[22] = load_bitmap("Images/Objets/aliments/18.bmp", NULL);
    objet[23] = load_bitmap("Images/Objets/aliments/19.bmp", NULL);
    //niv7
    objet[24] = load_bitmap("Images/Objets/aliments/24.bmp", NULL);
    objet[25] = load_bitmap("Images/Objets/aliments/25.bmp", NULL);
    objet[26] = load_bitmap("Images/Objets/aliments/26.bmp", NULL);
    objet[27] = load_bitmap("Images/Objets/aliments/27.bmp", NULL);
    //niv8
    objet[28] = load_bitmap("Images/Objets/aliments/28.bmp", NULL);
    objet[29] = load_bitmap("Images/Objets/aliments/29.bmp", NULL);
    objet[30] = load_bitmap("Images/Objets/aliments/30.bmp", NULL);
    objet[31] = load_bitmap("Images/Objets/aliments/31.bmp", NULL);

    //OBJET CUISSON
    objet_cuit_couper[0] = load_bitmap("Images/Objets/aliments/cuit_coupe/0.bmp", NULL);
    objet_cuit_couper[1] = load_bitmap("Images/Objets/aliments/cuit_coupe/1.bmp", NULL);
    objet_cuit_couper[2] = load_bitmap("Images/Objets/aliments/cuit_coupe/2.bmp", NULL);
    objet_cuit_couper[3] = load_bitmap("Images/Objets/aliments/cuit_coupe/3.bmp", NULL);
    objet_cuit_couper[4] = load_bitmap("Images/Objets/aliments/cuit_coupe/4.bmp", NULL);
    objet_cuit_couper[5] = load_bitmap("Images/Objets/aliments/cuit_coupe/5.bmp", NULL);
    objet_cuit_couper[6] = load_bitmap("Images/Objets/aliments/cuit_coupe/6.bmp", NULL);
    objet_cuit_couper[7] = load_bitmap("Images/Objets/aliments/cuit_coupe/7.bmp", NULL);
    objet_cuit_couper[8] = load_bitmap("Images/Objets/aliments/cuit_coupe/8.bmp", NULL);
    objet_cuit_couper[9] = load_bitmap("Images/Objets/aliments/cuit_coupe/9.bmp", NULL);
    objet_cuit_couper[10] = load_bitmap("Images/Objets/aliments/cuit_coupe/10.bmp", NULL);
    objet_cuit_couper[11] = load_bitmap("Images/Objets/aliments/cuit_coupe/11.bmp", NULL);
    objet_cuit_couper[12] = load_bitmap("Images/Objets/aliments/cuit_coupe/12.bmp", NULL);
    objet_cuit_couper[13] = load_bitmap("Images/Objets/aliments/cuit_coupe/13.bmp", NULL);
    objet_cuit_couper[14] = load_bitmap("Images/Objets/aliments/cuit_coupe/14.bmp", NULL);
    objet_cuit_couper[15] = load_bitmap("Images/Objets/aliments/cuit_coupe/15.bmp", NULL);
    objet_cuit_couper[16] = load_bitmap("Images/Objets/aliments/cuit_coupe/16.bmp", NULL);
    objet_cuit_couper[17] = load_bitmap("Images/Objets/aliments/cuit_coupe/17.bmp", NULL);
    objet_cuit_couper[18] = load_bitmap("Images/Objets/aliments/cuit_coupe/18.bmp", NULL);
    objet_cuit_couper[19] = load_bitmap("Images/Objets/aliments/cuit_coupe/19.bmp", NULL);
    objet_cuit_couper[20] = load_bitmap("Images/Objets/aliments/cuit_coupe/20.bmp", NULL);
    objet_cuit_couper[21] = load_bitmap("Images/Objets/aliments/cuit_coupe/21.bmp", NULL);
    objet_cuit_couper[22] = load_bitmap("Images/Objets/aliments/cuit_coupe/22.bmp", NULL);
    objet_cuit_couper[23] = load_bitmap("Images/Objets/aliments/cuit_coupe/23.bmp", NULL);


    //PLAT
    plat[0] = load_bitmap("Images/Objets/assittes/0.bmp", NULL);
    plat[1] = load_bitmap("Images/Objets/assittes/1.bmp", NULL);
    plat[9] = load_bitmap("Images/Objets/assittes/9.bmp", NULL);
    plat[15] = load_bitmap("Images/Objets/assittes/15.bmp", NULL);
    plat[17] = load_bitmap("Images/Objets/assittes/17.bmp", NULL);
    plat[25] = load_bitmap("Images/Objets/assittes/25.bmp", NULL);
    plat[31] = load_bitmap("Images/Objets/assittes/31.bmp", NULL);
    plat[33] = load_bitmap("Images/Objets/assittes/33.bmp", NULL);
    plat[41] = load_bitmap("Images/Objets/assittes/41.bmp", NULL);
    plat[47] = load_bitmap("Images/Objets/assittes/47.bmp", NULL);
    plat[49] = load_bitmap("Images/Objets/assittes/49.bmp", NULL);
    plat[57] = load_bitmap("Images/Objets/assittes/57.bmp", NULL);
    plat[63] = load_bitmap("Images/Objets/assittes/63.bmp", NULL);
    plat[65] = load_bitmap("Images/Objets/assittes/65.bmp", NULL);
    plat[73] = load_bitmap("Images/Objets/assittes/73.bmp", NULL);
    plat[79] = load_bitmap("Images/Objets/assittes/79.bmp", NULL);
    plat[97] = load_bitmap("Images/Objets/assittes/97.bmp", NULL);
    plat[105] = load_bitmap("Images/Objets/assittes/105.bmp", NULL);
    plat[111] = load_bitmap("Images/Objets/assittes/111.bmp", NULL);
    plat[113] = load_bitmap("Images/Objets/assittes/113.bmp", NULL);
    plat[121] = load_bitmap("Images/Objets/assittes/121.bmp", NULL);
    plat[127] = load_bitmap("Images/Objets/assittes/127.bmp", NULL);
}