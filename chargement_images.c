#include "Header.h"

void chargement_images(){

    page = create_bitmap(TAILLE_ECRAN_L, TAILLE_ECRAN_H);

    feu[0] = load_bitmap("Images/personnages/feu1.bmp",NULL);
    feu[1] = load_bitmap("Images/personnages/feu2.bmp",NULL);
    feu[2] = load_bitmap("Images/personnages/feu3.bmp",NULL);
    feu[3] = load_bitmap("Images/personnages/attention.bmp",NULL);

    chargement_objets();
    chargement_perso1();
    chargement_commande();
    chargement_menu();
}