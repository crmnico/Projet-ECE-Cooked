#include "Header.h"

void update_tempsCuisson() {
    Alliment *actuel = file_alliment.debut;

    //REGARDE QUELLE NIVEAU ON EST
    int niv;
    for (int i = 0; i < 8; ++i) {
        if (niveau[i].actuel==1) niv = i;
    }

    while (actuel != NULL) {
        if(niveau[niv].map[(actuel->pos_y/40)-3][actuel->pos_x/40]==3){
            actuel->cuisson++;
        }
        if (actuel->cuisson > MAX_CUISSON_TIME) {
           // CA CRAME
        }
        actuel = actuel->next;
    }
}