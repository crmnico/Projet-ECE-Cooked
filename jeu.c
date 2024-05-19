#include "Header.h"

void jeu(){
    clear_bitmap(page);

    debut_jeu = clock();
    initialisation_file();
    ajout_commande();

    //REGARDE QUELLE NIVEAU ON EST
    int niv;
    for (int i = 0; i < 8; ++i) {
        if (niveau[i].actuel==1) niv = i;
    }

    while (!key[KEY_ESC]) {

        clear_bitmap(page);

        blit(niveau[niv].map_graphique, page, 0, 0, 0, 120, TAILLE_ECRAN_L, TAILLE_ECRAN_H);

        ////TOUCHES////
        mouvement_perso1();
        mouvement_perso2();
        action_perso1();
        action_perso2();

        ////PERSONNAGE////
        update_direction();
        update_position();
        update_frame();
        dessine_perso();

        ////OBJETS////
        prendre_objet();
        prendre_nouv_objet();
        update_actions();
        update_decoupe();
        update_position_objet();
        update_tempsCuisson();
        dessine_objet();

        ////COMMANDE/////
        update_commande();
        update_tempsCommands();
        dessine_commande();

        blit(page, screen, 0, 0, 0, 0, TAILLE_ECRAN_L, TAILLE_ECRAN_H);
        rest(10);
    }
}

/*
les modifier quand cuit ou quand couper

score
menu
timer


 graphisme
 groenland
 reglages
 regles

 */