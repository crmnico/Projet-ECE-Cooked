#include "Header.h"

void chargement_commande(){
    ////PANNEAU/////
    panneau[0] = load_bitmap("Images/commandes/panneau/panneau2.bmp",NULL);  // 2 Ingredients
    panneau[1] = load_bitmap("Images/commandes/panneau/panneau3.bmp",NULL);  // 3 Ingredients
    panneau[2] = load_bitmap("Images/commandes/panneau/panneau4.bmp",NULL);  // 4 Ingredients

    ////ETIQUETTE////
    etiquette = load_bitmap("Images/commandes/etiquette/etiquette1.bmp",NULL);
    etiquette_cuisson = load_bitmap("Images/commandes/etiquette_cuisson/etiquette_steak.bmp",NULL);
}