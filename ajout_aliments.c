#include "Header.h"

void ajout_aliments (int y,int x){
    Alliment *alliment = malloc(sizeof(Alliment));

    //REGARDE QUELLE NIVEAU ON EST
    int niv;
    for (int i = 0; i < 8; ++i) {
        if (niveau[i].actuel==1) niv = i;
    }

    if ((niveau[niv].type_x[0]==x)&&(niveau[niv].type_y[0]==y))alliment->objet=1,alliment->cuisson=0,alliment->decoupe = 0;
    else if ((niveau[niv].type_x[1]==x)&&(niveau[niv].type_y[1]==y))alliment->objet=2,alliment->cuisson=0,alliment->decoupe = 1;
    else if ((niveau[niv].type_x[2]==x)&&(niveau[niv].type_y[2]==y))alliment->objet=4,alliment->cuisson=0,alliment->decoupe = 1;
    else if ((niveau[niv].type_x[3]==x)&&(niveau[niv].type_y[3]==y))alliment->objet=8,alliment->cuisson=1,alliment->decoupe = 0;

    if(perso2.action==1) {
        alliment->en_main = 2;
        perso2.en_main_al = alliment;
        update_position_objet();
    }
    else {
        alliment->en_main = 1;
        perso1.en_main_al = alliment;
        update_position_objet();
    }

    alliment->next = NULL;

    // Si la file est vide, la nouvelle commande est à la fois le premier et le dernier élément
    if (file_alliment.debut == NULL) {
        file_alliment.debut = alliment;
        file_alliment.fin = alliment;
        alliment->previous = NULL;
    } else {
        // Sinon, la nouvelle commande est ajoutée à la fin
        alliment->previous = file_alliment.fin;
        file_alliment.fin->next = alliment;
        file_alliment.fin = alliment;
    }
}