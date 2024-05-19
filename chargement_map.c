#include "Header.h"

void chargement_map(){
    niveau[0].map_graphique = load_bitmap("Images/map.bmp", NULL);      //AMERIQUE DU NORD
    niveau[1].map_graphique = load_bitmap("Images/map.bmp", NULL);      //AMERIQUE DU SUD
    niveau[2].map_graphique = load_bitmap("Images/map.bmp", NULL);      //EUROPE
    niveau[3].map_graphique = load_bitmap("Images/map.bmp", NULL);      //ASIE
    niveau[4].map_graphique = load_bitmap("Images/map.bmp", NULL);      //OCEANNIE
    niveau[5].map_graphique = load_bitmap("Images/map.bmp", NULL);      //ZONE 51
    niveau[6].map_graphique = load_bitmap("Images/map.bmp", NULL);      //AFRIQUE
    niveau[7].map_graphique = load_bitmap("Images/map.bmp", NULL);      //GROENLAND
}