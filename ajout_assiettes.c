#include "Header.h"

void ajout_assiettes() {
    Assiette *assiette = malloc(sizeof(Assiette));
    assiette->nb_ingredients=0;

    if(perso2.action==1) {
            assiette->en_main = 2;
            perso2.en_main_as = assiette;
            update_position_objet();
    }
    else {
        assiette->en_main = 1;
        perso1.en_main_as = assiette;
        update_position_objet();
    }

    assiette->next = NULL;

    // Si la file est vide, la nouvelle commande est à la fois le premier et le dernier élément
    if (file_assiette.debut == NULL) {
        file_assiette.debut = assiette;
        file_assiette.fin = assiette;
        assiette->previous = NULL;
    } else {
        // Sinon, la nouvelle commande est ajoutée à la fin
        assiette->previous = file_assiette.fin;
        file_assiette.fin->next = assiette;
        file_assiette.fin = assiette;
    }
}