#include "Header.h"

void update_decoupe(){
    //REGARDE QUELLE NIVEAU ON EST
    int niv;
    for (int i = 0; i < 8; ++i) {
        if (niveau[i].actuel==1) niv = i;
    }

    ////PERSONNAGE 1////
    if((perso1.action==2)&&(perso1.en_main_as==NULL)&&(perso1.en_main_al==NULL)) {
        Alliment *actuel_al = file_alliment.debut;
        while (actuel_al!=NULL){
            if(((actuel_al->decoupe>=1)&&(actuel_al->decoupe<=200))&&(niveau[niv].map[(actuel_al->pos_y/40)-3 ][actuel_al->pos_x/40]==2)) {
                switch (perso1.current_direction) {
                    case NORTH:
                        if (((perso1.pos_x / 40) == (actuel_al->pos_x / 40)) &&
                            ((perso1.pos_y / 40) - 1) == (actuel_al->pos_y / 40)) {
                            actuel_al->decoupe+=1;
                        }
                        break;
                    case SOUTH:
                        if (((perso1.pos_x / 40) == (actuel_al->pos_x / 40)) &&
                            ((perso1.pos_y / 40) + 1) == (actuel_al->pos_y / 40)) {
                            actuel_al->decoupe+=1;
                        }
                        break;
                    case EAST:
                        if ((((perso1.pos_x / 40 + 1)) == (actuel_al->pos_x / 40)) &&
                            (perso1.pos_y / 40) == (actuel_al->pos_y / 40)) {
                            actuel_al->decoupe+=1;
                        }
                        break;
                    case WEST:
                        if ((((perso1.pos_x / 40 - 1)) == (actuel_al->pos_x / 40)) &&
                            (perso1.pos_y / 40) == (actuel_al->pos_y / 40)) {
                            actuel_al->decoupe+=1;
                        }
                        break;
                    case NORTHWEST:
                        if ((((perso1.pos_x / 40) == (actuel_al->pos_x / 40)) &&
                             ((perso1.pos_y / 40) - 1) == (actuel_al->pos_y / 40)) ||
                            ((((perso1.pos_x / 40) - 1) == (actuel_al->pos_x / 40)) &&
                             ((perso1.pos_y / 40) == (actuel_al->pos_y / 40)))) {
                            actuel_al->decoupe+=1;
                        }
                        break;
                    case NORTHEAST:
                        if ((((perso1.pos_x / 40) == (actuel_al->pos_x / 40)) &&
                             ((perso1.pos_y / 40) - 1) == (actuel_al->pos_y / 40)) ||
                            ((((perso1.pos_x / 40) + 1) == (actuel_al->pos_x / 40)) &&
                             ((perso1.pos_y / 40) == (actuel_al->pos_y / 40)))) {
                            actuel_al->decoupe+=1;
                        }
                        break;
                    case SOUTHWEST:
                        if ((((perso1.pos_x / 40) == (actuel_al->pos_x / 40)) &&
                             ((perso1.pos_y / 40) + 1) == (actuel_al->pos_y / 40)) ||
                            ((((perso1.pos_x / 40) - 1) == (actuel_al->pos_x / 40)) &&
                             ((perso1.pos_y / 40) == (actuel_al->pos_y / 40)))) {
                            actuel_al->decoupe+=1;
                        }
                        break;
                    case SOUTHEAST:
                        if ((((perso1.pos_x / 40) == (actuel_al->pos_x / 40)) &&
                             ((perso1.pos_y / 40) + 1) == (actuel_al->pos_y / 40)) ||
                            ((((perso1.pos_x / 40) + 1) == (actuel_al->pos_x / 40)) &&
                             ((perso1.pos_y / 40) == (actuel_al->pos_y / 40)))) {
                            actuel_al->decoupe+=1;
                        }
                        break;
                }
            }
            actuel_al = actuel_al->next;
        }
    }


    ////PERSONNAGE 2////
    if((perso2.action==2)&&(perso2.en_main_as==NULL)&&(perso2.en_main_al==NULL)) {
        Alliment *actuel_al = file_alliment.debut;
        while (actuel_al!=NULL){
            if(((actuel_al->decoupe>=1)&&(actuel_al->decoupe<=200))&&(niveau[niv].map[(actuel_al->pos_y/40)-3 ][actuel_al->pos_x/40]==2)) {
                switch (perso2.current_direction) {
                    case NORTH:
                        if (((perso2.pos_x / 40) == (actuel_al->pos_x / 40)) &&
                            ((perso2.pos_y / 40) - 1) == (actuel_al->pos_y / 40)) {
                            actuel_al->decoupe+=1;
                        }
                        break;
                    case SOUTH:
                        if (((perso2.pos_x / 40) == (actuel_al->pos_x / 40)) &&
                            ((perso2.pos_y / 40) + 1) == (actuel_al->pos_y / 40)) {
                            actuel_al->decoupe+=1;
                        }
                        break;
                    case EAST:
                        if ((((perso2.pos_x / 40 + 1)) == (actuel_al->pos_x / 40)) &&
                            (perso2.pos_y / 40) == (actuel_al->pos_y / 40)) {
                            actuel_al->decoupe+=1;
                        }
                        break;
                    case WEST:
                        if ((((perso2.pos_x / 40 - 1)) == (actuel_al->pos_x / 40)) &&
                            (perso2.pos_y / 40) == (actuel_al->pos_y / 40)) {
                            actuel_al->decoupe+=1;
                        }
                        break;
                    case NORTHWEST:
                        if ((((perso2.pos_x / 40) == (actuel_al->pos_x / 40)) &&
                             ((perso2.pos_y / 40) - 1) == (actuel_al->pos_y / 40)) ||
                            ((((perso2.pos_x / 40) - 1) == (actuel_al->pos_x / 40)) &&
                             ((perso2.pos_y / 40) == (actuel_al->pos_y / 40)))) {
                            actuel_al->decoupe+=1;
                        }
                        break;
                    case NORTHEAST:
                        if ((((perso2.pos_x / 40) == (actuel_al->pos_x / 40)) &&
                             ((perso2.pos_y / 40) - 1) == (actuel_al->pos_y / 40)) ||
                            ((((perso2.pos_x / 40) + 1) == (actuel_al->pos_x / 40)) &&
                             ((perso2.pos_y / 40) == (actuel_al->pos_y / 40)))) {
                            actuel_al->decoupe+=1;
                        }
                        break;
                    case SOUTHWEST:
                        if ((((perso2.pos_x / 40) == (actuel_al->pos_x / 40)) &&
                             ((perso2.pos_y / 40) + 1) == (actuel_al->pos_y / 40)) ||
                            ((((perso2.pos_x / 40) - 1) == (actuel_al->pos_x / 40)) &&
                             ((perso2.pos_y / 40) == (actuel_al->pos_y / 40)))) {
                            actuel_al->decoupe+=1;
                        }
                        break;
                    case SOUTHEAST:
                        if ((((perso2.pos_x / 40) == (actuel_al->pos_x / 40)) &&
                             ((perso2.pos_y / 40) + 1) == (actuel_al->pos_y / 40)) ||
                            ((((perso2.pos_x / 40) + 1) == (actuel_al->pos_x / 40)) &&
                             ((perso2.pos_y / 40) == (actuel_al->pos_y / 40)))) {
                            actuel_al->decoupe+=1;
                        }
                        break;
                }
            }
            actuel_al = actuel_al->next;
        }
    }
}