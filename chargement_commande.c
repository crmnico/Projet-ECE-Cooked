#include "Header.h"

void chargement_commande(){
    ////PANNEAU/////
    panneau[0] = load_bitmap("Images/commandes/panneau/panneau2.bmp",NULL);  // 2 Ingredients
    panneau[1] = load_bitmap("Images/commandes/panneau/panneau3.bmp",NULL);  // 3 Ingredients
    panneau[2] = load_bitmap("Images/commandes/panneau/panneau4.bmp",NULL);  // 4 Ingredients

    ////PLAT PANNEAU////
    panneau_plat[0] = load_bitmap("Images/commandes/panneau/aliment/burger.bmp",NULL);

    ////ETIQUETTE////
    etiquette[0] = load_bitmap("Images/commandes/etiquette/etiquette1.bmp",NULL);
    etiquette[1] = load_bitmap("Images/commandes/etiquette/etiquette_pain.bmp",NULL);
    etiquette[2] = load_bitmap("Images/commandes/etiquette/etiquette_tomate.bmp",NULL);
    etiquette[3] = load_bitmap("Images/commandes/etiquette/etiquette_salade.bmp",NULL);

    ////ETIQUETTE CUISSON////
    etiquette_cuisson[0] = load_bitmap("Images/commandes/etiquette_cuisson/etiquette_steak.bmp",NULL);
}