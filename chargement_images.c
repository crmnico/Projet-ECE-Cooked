#include "Header.h"

void chargement_images(){
    page = create_bitmap(TAILLE_ECRAN_L, TAILLE_ECRAN_H);
    map = load_bitmap("Images/map.bmp", NULL);
    menu = load_bitmap("Images/menu.bmp",NULL);
    objet = load_bitmap("Images/commandes/etiquette/etiquette_pain.bmp",NULL);
    chargement_perso1();
    chargement_commande();
    chargement_menu();
}