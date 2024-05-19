#include "Header.h"

void chargement_map(){
    niveau[0].map_graphique = load_bitmap("Images/map_2.bmp", NULL);      //AMERIQUE DU NORD
    niveau[1].map_graphique = load_bitmap("Images/map_2.bmp", NULL);      //AMERIQUE DU SUD
    niveau[2].map_graphique = load_bitmap("Images/map_2.bmp", NULL);      //EUROPE
    niveau[3].map_graphique = load_bitmap("Images/map_2.bmp", NULL);      //ASIE
    niveau[4].map_graphique = load_bitmap("Images/map_2.bmp", NULL);      //OCEANNIE
    niveau[5].map_graphique = load_bitmap("Images/map_2.bmp", NULL);      //ZONE 51
    niveau[6].map_graphique = load_bitmap("Images/map_7.bmp", NULL);      //AFRIQUE
    niveau[7].map_graphique = load_bitmap("Images/map_2.bmp", NULL);      //GROENLAND
}