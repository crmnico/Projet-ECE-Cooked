#include "Header.h"

void chargement_menu(){
    calque_menu[0] = load_bitmap("Images/Menu/calque_menu_0.bmp",NULL);
    calque_menu[1] = load_bitmap("Images/Menu/calque_menu_1.bmp",NULL);
    calque_menu[2] = load_bitmap("Images/Menu/calque_menu_2.bmp",NULL);
    calque_menu[3] = load_bitmap("Images/Menu/calque_menu_3.bmp",NULL);
    calque_menu[4] = load_bitmap("Images/Menu/calque_menu_4.bmp",NULL);

    calque_carte[0] = load_bitmap("Images/Menu/calque_carte.bmp",NULL);
    calque_carte[1] = load_bitmap("Images/Menu/calque_carte_1.bmp",NULL);
    calque_carte[2] = load_bitmap("Images/Menu/calque_carte_2.bmp",NULL);
    calque_carte[3] = load_bitmap("Images/Menu/calque_carte_3.bmp",NULL);
    calque_carte[4] = load_bitmap("Images/Menu/calque_carte_4.bmp",NULL);
    calque_carte[5] = load_bitmap("Images/Menu/calque_carte_5.bmp",NULL);
    calque_carte[6] = load_bitmap("Images/Menu/calque_carte_6.bmp",NULL);
    calque_carte[7] = load_bitmap("Images/Menu/calque_carte_7.bmp",NULL);
    calque_carte[8] = load_bitmap("Images/Menu/calque_carte_8.bmp",NULL);   //VIERGE
    calque_carte[9] = load_bitmap("Images/Menu/calque_carte_9.bmp",NULL);

    choix_skins = load_bitmap("Images/Menu/menu_skin.bmp",NULL);
    menu = load_bitmap("Images/Menu/menu.bmp",NULL);
}