#include "Header.h"

void prendre_objet(){
    if ((perso1.action == 1) && (perso1.en_main_as == NULL) && (perso1.en_main_al == NULL)) {    //Prendre Objet (Perso 1)
        Assiette *actuel_as = file_assiette.debut;
        while (actuel_as != NULL) {
            switch (perso1.current_direction) {
                case NORTH:
                    if (((perso1.pos_x / 40)==(actuel_as->pos_x / 40)) && ((perso1.pos_y / 40)-1)==(actuel_as->pos_y / 40)) {
                        actuel_as->en_main = 1;
                        perso1.en_main_as = actuel_as;
                        return;
                    }
                    break;
                case SOUTH:
                    if (((perso1.pos_x / 40)==(actuel_as->pos_x / 40)) && ((perso1.pos_y / 40)+1) == (actuel_as->pos_y / 40)) {
                        actuel_as->en_main = 1;
                        perso1.en_main_as = actuel_as;
                        return;
                    }
                    break;
                case EAST:
                    if ((((perso1.pos_x / 40)+1)==(actuel_as->pos_x / 40)) && (perso1.pos_y / 40)==(actuel_as->pos_y / 40)) {
                        actuel_as->en_main = 1;
                        perso1.en_main_as = actuel_as;
                        return;
                    }
                    break;
                case WEST:
                    if (((((perso1.pos_x / 40) - 1))==(actuel_as->pos_x / 40)) && (perso1.pos_y / 40)==(actuel_as->pos_y / 40)) {
                        actuel_as->en_main = 1;
                        perso1.en_main_as = actuel_as;
                        return;
                    }
                    break;
                case NORTHWEST:
                    if (((perso1.pos_x / 40 == (actuel_as->pos_x / 40)) &&
                         ((perso1.pos_y / 40) - 1) == (actuel_as->pos_y / 40)) ||
                        ((((perso1.pos_x / 40) - 1) == (actuel_as->pos_x / 40)) &&
                         ((perso1.pos_y / 40) == (actuel_as->pos_y / 40)))) {
                        actuel_as->en_main = 1;
                        perso1.en_main_as = actuel_as;
                        return;
                    }
                    break;
                case NORTHEAST:
                    if ((((perso1.pos_x / 40) == (actuel_as->pos_x / 40)) &&
                         ((perso1.pos_y / 40) - 1) == (actuel_as->pos_y / 40)) ||
                        ((((perso1.pos_x / 40) + 1) == (actuel_as->pos_x / 40)) &&
                         ((perso1.pos_y / 40) == (actuel_as->pos_y / 40)))) {
                        actuel_as->en_main = 1;
                        perso1.en_main_as = actuel_as;
                        return;
                    }
                    break;
                case SOUTHWEST:
                    if ((((perso1.pos_x / 40) == (actuel_as->pos_x / 40)) &&
                         ((perso1.pos_y / 40) + 1) == (actuel_as->pos_y / 40)) ||
                        ((((perso1.pos_x / 40) - 1) == (actuel_as->pos_x / 40)) &&
                         ((perso1.pos_y / 40) == (actuel_as->pos_y / 40)))) {
                        actuel_as->en_main = 1;
                        perso1.en_main_as = actuel_as;
                        return;
                    }
                    break;
                case SOUTHEAST:
                    if ((((perso1.pos_x / 40) == (actuel_as->pos_x / 40)) &&
                         ((perso1.pos_y / 40) + 1) == (actuel_as->pos_y / 40)) ||
                        ((((perso1.pos_x / 40) + 1) == (actuel_as->pos_x / 40)) &&
                         ((perso1.pos_y / 40) == (actuel_as->pos_y / 40)))) {
                        actuel_as->en_main = 1;
                        perso1.en_main_as = actuel_as;
                        return;
                    }
                    break;
            }
            actuel_as = actuel_as->next;
        }
        Alliment *actuel_al = file_alliment.debut;
        while (actuel_al != NULL) {
            switch (perso1.current_direction) {
                case NORTH:
                    if (((perso1.pos_x / 40) == (actuel_al->pos_x / 40)) &&
                        ((perso1.pos_y / 40) - 1) == (actuel_al->pos_y / 40)) {
                        actuel_al->en_main = 1;
                        perso1.en_main_al = actuel_al;
                        return;
                    }
                    break;
                case SOUTH:
                    if (((perso1.pos_x / 40) == (actuel_al->pos_x / 40)) &&
                        ((perso1.pos_y / 40) + 1) == (actuel_al->pos_y / 40)) {
                        actuel_al->en_main = 1;
                        perso1.en_main_al = actuel_al;
                        return;
                    }
                    break;
                case EAST:
                    if ((((perso1.pos_x / 40 + 1)) == (actuel_al->pos_x / 40)) &&
                        (perso1.pos_y / 40) == (actuel_al->pos_y / 40)) {
                        actuel_al->en_main = 1;
                        perso1.en_main_al = actuel_al;
                        return;
                    }
                    break;
                case WEST:
                    if ((((perso1.pos_x / 40 - 1)) == (actuel_al->pos_x / 40)) &&
                        (perso1.pos_y / 40) == (actuel_al->pos_y / 40)) {
                        actuel_al->en_main = 1;
                        perso1.en_main_al = actuel_al;
                        return;
                    }
                    break;
                case NORTHWEST:
                    if ((((perso1.pos_x / 40) == (actuel_al->pos_x / 40)) &&
                         ((perso1.pos_y / 40) - 1) == (actuel_al->pos_y / 40)) ||
                        ((((perso1.pos_x / 40) - 1) == (actuel_al->pos_x / 40)) &&
                         ((perso1.pos_y / 40) == (actuel_al->pos_y / 40)))) {
                        actuel_al->en_main = 1;
                        perso1.en_main_al = actuel_al;
                        return;
                    }
                    break;
                case NORTHEAST:
                    if ((((perso1.pos_x / 40) == (actuel_al->pos_x / 40)) &&
                         ((perso1.pos_y / 40) - 1) == (actuel_al->pos_y / 40)) ||
                        ((((perso1.pos_x / 40) + 1) == (actuel_al->pos_x / 40)) &&
                         ((perso1.pos_y / 40) == (actuel_al->pos_y / 40)))) {
                        actuel_al->en_main = 1;
                        perso1.en_main_al = actuel_al;
                        return;
                    }
                    break;
                case SOUTHWEST:
                    if ((((perso1.pos_x / 40) == (actuel_al->pos_x / 40)) &&
                         ((perso1.pos_y / 40) + 1) == (actuel_al->pos_y / 40)) ||
                        ((((perso1.pos_x / 40) - 1) == (actuel_al->pos_x / 40)) &&
                         ((perso1.pos_y / 40) == (actuel_al->pos_y / 40)))) {
                        actuel_al->en_main = 1;
                        perso1.en_main_al = actuel_al;
                        return;
                    }
                    break;
                case SOUTHEAST:
                    if ((((perso1.pos_x / 40) == (actuel_al->pos_x / 40)) &&
                         ((perso1.pos_y / 40) + 1) == (actuel_al->pos_y / 40)) ||
                        ((((perso1.pos_x / 40) + 1) == (actuel_al->pos_x / 40)) &&
                         ((perso1.pos_y / 40) == (actuel_al->pos_y / 40)))) {
                        actuel_al->en_main = 1;
                        perso1.en_main_al = actuel_al;
                        return;
                    }
                    break;
            }
            actuel_al = actuel_al->next;
        }
    }
}

void prendre_nouv_objet(){
    //REGARDE QUELLE NIVEAU ON EST
    int niv;
    for (int i = 0; i < 8; ++i) {
        if (niveau[i].actuel==1) niv = i;
    }

    if ((perso1.action == 1) && (perso1.en_main_as == NULL) && (perso1.en_main_al == NULL)) {
        switch (perso1.current_direction) {
            case NORTH:
                if ((niveau[niv].map[(perso1.pos_y / 40) - 4][(perso1.pos_x / 40)]) == 6) {
                    ajout_assiettes();
                }
                if ((niveau[niv].map[(perso1.pos_y / 40) - 4][(perso1.pos_x / 40)]) == 8) {
                    ajout_aliments((perso1.pos_y / 40) - 4,(perso1.pos_x / 40));
                }
                break;
            case SOUTH:
                if ((niveau[niv].map[(perso1.pos_y / 40) - 2][(perso1.pos_x / 40)]) == 6) {
                    ajout_assiettes();
                }
                if ((niveau[niv].map[(perso1.pos_y / 40) - 2][(perso1.pos_x / 40)]) == 8) {
                    ajout_aliments((perso1.pos_y / 40) - 2,(perso1.pos_x / 40));
                }
                break;
            case EAST:
                if ((niveau[niv].map[(perso1.pos_y / 40) - 3][(perso1.pos_x / 40) + 1]) == 6) {
                    ajout_assiettes();
                }
                if ((niveau[niv].map[(perso1.pos_y / 40) - 3][(perso1.pos_x / 40) + 1]) == 8) {
                    ajout_aliments((perso1.pos_y / 40) - 3,(perso1.pos_x / 40) + 1);
                }
                break;
            case WEST:
                if ((niveau[niv].map[(perso1.pos_y / 40) - 3][(perso1.pos_x / 40) - 1]) == 6) {
                    ajout_assiettes();
                }
                if ((niveau[niv].map[(perso1.pos_y / 40) - 3][(perso1.pos_x / 40) - 1]) == 8) {
                    ajout_aliments((perso1.pos_y / 40) - 3,(perso1.pos_x / 40) - 1);
                }
                break;
            case NORTHWEST:
                if ((niveau[niv].map[(perso1.pos_y / 40) - 4][(perso1.pos_x / 40)]) == 6) {
                    ajout_assiettes();
                }
                if ((niveau[niv].map[(perso1.pos_y / 40) - 3][(perso1.pos_x / 40) - 1]) == 6) {
                    ajout_assiettes();
                }
                if ((niveau[niv].map[(perso1.pos_y / 40) - 4][(perso1.pos_x / 40)]) == 8) {
                    ajout_aliments((perso1.pos_y / 40) - 4,(perso1.pos_x / 40));
                }
                if ((niveau[niv].map[(perso1.pos_y / 40) - 3][(perso1.pos_x / 40) - 1]) == 8) {
                    ajout_aliments((perso1.pos_y / 40) - 3,(perso1.pos_x / 40) - 1);
                }
                break;
            case NORTHEAST:
                if ((niveau[niv].map[(perso1.pos_y / 40) - 4][(perso1.pos_x / 40)]) == 6) {
                    ajout_assiettes();
                }
                if ((niveau[niv].map[(perso1.pos_y / 40) - 3][(perso1.pos_x / 40) + 1]) == 6) {
                    ajout_assiettes();
                }
                if ((niveau[niv].map[(perso1.pos_y / 40) - 4][(perso1.pos_x / 40)]) == 8) {
                    ajout_aliments((perso1.pos_y / 40) - 4,(perso1.pos_x / 40));
                }
                if ((niveau[niv].map[(perso1.pos_y / 40) - 3][(perso1.pos_x / 40) + 1]) == 8) {
                    ajout_aliments((perso1.pos_y / 40) - 3,(perso1.pos_x / 40) + 1);
                }
                break;
            case SOUTHWEST:
                if ((niveau[niv].map[(perso1.pos_y / 40) - 2][(perso1.pos_x / 40)]) == 6) {
                    ajout_assiettes();
                }
                if ((niveau[niv].map[(perso1.pos_y / 40) - 3][(perso1.pos_x / 40) - 1]) == 6) {
                    ajout_assiettes();
                }
                if ((niveau[niv].map[(perso1.pos_y / 40) - 2][(perso1.pos_x / 40)]) == 8) {
                    ajout_aliments((perso1.pos_y / 40) - 2,(perso1.pos_x / 40));
                }
                if ((niveau[niv].map[(perso1.pos_y / 40) - 3][(perso1.pos_x / 40) - 1]) == 8) {
                    ajout_aliments((perso1.pos_y / 40) - 3,(perso1.pos_x / 40) - 1);
                }
                break;
            case SOUTHEAST:
                if ((niveau[niv].map[(perso1.pos_y / 40) - 2][(perso1.pos_x / 40)]) == 6) {
                    ajout_assiettes();
                }
                if ((niveau[niv].map[(perso1.pos_y / 40) - 3][(perso1.pos_x / 40) + 1]) == 6) {
                    ajout_assiettes();
                }
                if ((niveau[niv].map[(perso1.pos_y / 40) - 2][(perso1.pos_x / 40)]) == 8) {
                    ajout_aliments((perso1.pos_y / 40) - 2,(perso1.pos_x / 40));
                }
                if ((niveau[niv].map[(perso1.pos_y / 40) - 3][(perso1.pos_x / 40) + 1]) == 8) {
                    ajout_aliments((perso1.pos_y / 40) - 3,(perso1.pos_x / 40) + 1);
                }
                break;
        }
    }
    if ((perso1.action == 1) && (perso1.en_main_as == NULL) && (perso1.en_main_al == NULL)) {    //Prendre Objet (Perso 1)
        Assiette *actuel_as = file_assiette.debut;
        while (actuel_as != NULL) {
            switch (perso1.current_direction) {
                case NORTH:
                    if (((perso1.pos_x / 40)==(actuel_as->pos_x / 40)) && ((perso1.pos_y / 40)-1)==(actuel_as->pos_y / 40)) {
                        actuel_as->en_main = 1;
                        perso1.en_main_as = actuel_as;
                        return;
                    }
                    break;
                case SOUTH:
                    if (((perso1.pos_x / 40)==(actuel_as->pos_x / 40)) && ((perso1.pos_y / 40)+1) == (actuel_as->pos_y / 40)) {
                        actuel_as->en_main = 1;
                        perso1.en_main_as = actuel_as;
                        return;
                    }
                    break;
                case EAST:
                    if ((((perso1.pos_x / 40)+1)==(actuel_as->pos_x / 40)) && (perso1.pos_y / 40)==(actuel_as->pos_y / 40)) {
                        actuel_as->en_main = 1;
                        perso1.en_main_as = actuel_as;
                        return;
                    }
                    break;
                case WEST:
                    if (((((perso1.pos_x / 40) - 1))==(actuel_as->pos_x / 40)) && (perso1.pos_y / 40)==(actuel_as->pos_y / 40)) {
                        actuel_as->en_main = 1;
                        perso1.en_main_as = actuel_as;
                        return;
                    }
                    break;
                case NORTHWEST:
                    if (((perso1.pos_x / 40 == (actuel_as->pos_x / 40)) &&
                         ((perso1.pos_y / 40) - 1) == (actuel_as->pos_y / 40)) ||
                        ((((perso1.pos_x / 40) - 1) == (actuel_as->pos_x / 40)) &&
                         ((perso1.pos_y / 40) == (actuel_as->pos_y / 40)))) {
                        actuel_as->en_main = 1;
                        perso1.en_main_as = actuel_as;
                        return;
                    }
                    break;
                case NORTHEAST:
                    if ((((perso1.pos_x / 40) == (actuel_as->pos_x / 40)) &&
                         ((perso1.pos_y / 40) - 1) == (actuel_as->pos_y / 40)) ||
                        ((((perso1.pos_x / 40) + 1) == (actuel_as->pos_x / 40)) &&
                         ((perso1.pos_y / 40) == (actuel_as->pos_y / 40)))) {
                        actuel_as->en_main = 1;
                        perso1.en_main_as = actuel_as;
                        return;
                    }
                    break;
                case SOUTHWEST:
                    if ((((perso1.pos_x / 40) == (actuel_as->pos_x / 40)) &&
                         ((perso1.pos_y / 40) + 1) == (actuel_as->pos_y / 40)) ||
                        ((((perso1.pos_x / 40) - 1) == (actuel_as->pos_x / 40)) &&
                         ((perso1.pos_y / 40) == (actuel_as->pos_y / 40)))) {
                        actuel_as->en_main = 1;
                        perso1.en_main_as = actuel_as;
                        return;
                    }
                    break;
                case SOUTHEAST:
                    if ((((perso1.pos_x / 40) == (actuel_as->pos_x / 40)) &&
                         ((perso1.pos_y / 40) + 1) == (actuel_as->pos_y / 40)) ||
                        ((((perso1.pos_x / 40) + 1) == (actuel_as->pos_x / 40)) &&
                         ((perso1.pos_y / 40) == (actuel_as->pos_y / 40)))) {
                        actuel_as->en_main = 1;
                        perso1.en_main_as = actuel_as;
                        return;
                    }
                    break;
            }
            actuel_as = actuel_as->next;
        }
        Alliment *actuel_al = file_alliment.debut;
        while (actuel_al != NULL) {
            switch (perso1.current_direction) {
                case NORTH:
                    if (((perso1.pos_x / 40) == (actuel_al->pos_x / 40)) &&
                        ((perso1.pos_y / 40) - 1) == (actuel_al->pos_y / 40)) {
                        actuel_al->en_main = 1;
                        perso1.en_main_al = actuel_al;
                        return;
                    }
                    break;
                case SOUTH:
                    if (((perso1.pos_x / 40) == (actuel_al->pos_x / 40)) &&
                        ((perso1.pos_y / 40) + 1) == (actuel_al->pos_y / 40)) {
                        actuel_al->en_main = 1;
                        perso1.en_main_al = actuel_al;
                        return;
                    }
                    break;
                case EAST:
                    if ((((perso1.pos_x / 40 + 1)) == (actuel_al->pos_x / 40)) &&
                        (perso1.pos_y / 40) == (actuel_al->pos_y / 40)) {
                        actuel_al->en_main = 1;
                        perso1.en_main_al = actuel_al;
                        return;
                    }
                    break;
                case WEST:
                    if ((((perso1.pos_x / 40 - 1)) == (actuel_al->pos_x / 40)) &&
                        (perso1.pos_y / 40) == (actuel_al->pos_y / 40)) {
                        actuel_al->en_main = 1;
                        perso1.en_main_al = actuel_al;
                        return;
                    }
                    break;
                case NORTHWEST:
                    if ((((perso1.pos_x / 40) == (actuel_al->pos_x / 40)) &&
                         ((perso1.pos_y / 40) - 1) == (actuel_al->pos_y / 40)) ||
                        ((((perso1.pos_x / 40) - 1) == (actuel_al->pos_x / 40)) &&
                         ((perso1.pos_y / 40) == (actuel_al->pos_y / 40)))) {
                        actuel_al->en_main = 1;
                        perso1.en_main_al = actuel_al;
                        return;
                    }
                    break;
                case NORTHEAST:
                    if ((((perso1.pos_x / 40) == (actuel_al->pos_x / 40)) &&
                         ((perso1.pos_y / 40) - 1) == (actuel_al->pos_y / 40)) ||
                        ((((perso1.pos_x / 40) + 1) == (actuel_al->pos_x / 40)) &&
                         ((perso1.pos_y / 40) == (actuel_al->pos_y / 40)))) {
                        actuel_al->en_main = 1;
                        perso1.en_main_al = actuel_al;
                        return;
                    }
                    break;
                case SOUTHWEST:
                    if ((((perso1.pos_x / 40) == (actuel_al->pos_x / 40)) &&
                         ((perso1.pos_y / 40) + 1) == (actuel_al->pos_y / 40)) ||
                        ((((perso1.pos_x / 40) - 1) == (actuel_al->pos_x / 40)) &&
                         ((perso1.pos_y / 40) == (actuel_al->pos_y / 40)))) {
                        actuel_al->en_main = 1;
                        perso1.en_main_al = actuel_al;
                        return;
                    }
                    break;
                case SOUTHEAST:
                    if ((((perso1.pos_x / 40) == (actuel_al->pos_x / 40)) &&
                         ((perso1.pos_y / 40) + 1) == (actuel_al->pos_y / 40)) ||
                        ((((perso1.pos_x / 40) + 1) == (actuel_al->pos_x / 40)) &&
                         ((perso1.pos_y / 40) == (actuel_al->pos_y / 40)))) {
                        actuel_al->en_main = 1;
                        perso1.en_main_al = actuel_al;
                        return;
                    }
                    break;
            }
            actuel_al = actuel_al->next;
        }
    }

    if ((perso2.action == 1) && (perso2.en_main_as == NULL) && (perso2.en_main_al == NULL)) {
        switch (perso1.current_direction) {
            case NORTH:
                if ((niveau[niv].map[(perso2.pos_y / 40) - 4][(perso2.pos_x / 40)]) == 6) {
                    ajout_assiettes();
                }
                if ((niveau[niv].map[(perso2.pos_y / 40) - 4][(perso2.pos_x / 40)]) == 8) {
                    ajout_aliments((perso2.pos_y / 40) - 4,(perso2.pos_x / 40));
                }
                break;
            case SOUTH:
                if ((niveau[niv].map[(perso2.pos_y / 40) - 2][(perso2.pos_x / 40)]) == 6) {
                    ajout_assiettes();
                }
                if ((niveau[niv].map[(perso2.pos_y / 40) - 2][(perso2.pos_x / 40)]) == 8) {
                    ajout_aliments((perso2.pos_y / 40) - 2,(perso2.pos_x / 40));
                }
                break;
            case EAST:
                if ((niveau[niv].map[(perso2.pos_y / 40) - 3][(perso2.pos_x / 40) + 1]) == 6) {
                    ajout_assiettes();
                }
                if ((niveau[niv].map[(perso2.pos_y / 40) - 3][(perso2.pos_x / 40) + 1]) == 8) {
                    ajout_aliments((perso2.pos_y / 40) - 3,(perso2.pos_x / 40) + 1);
                }
                break;
            case WEST:
                if ((niveau[niv].map[(perso2.pos_y / 40) - 3][(perso2.pos_x / 40) - 1]) == 6) {
                    ajout_assiettes();
                }
                if ((niveau[niv].map[(perso2.pos_y / 40) - 3][(perso2.pos_x / 40) - 1]) == 8) {
                    ajout_aliments((perso2.pos_y / 40) - 3,(perso2.pos_x / 40) - 1);
                }
                break;
            case NORTHWEST:
                if ((niveau[niv].map[(perso2.pos_y / 40) - 4][(perso2.pos_x / 40)]) == 6) {
                    ajout_assiettes();
                }
                if ((niveau[niv].map[(perso2.pos_y / 40) - 3][(perso2.pos_x / 40) - 1]) == 6) {
                    ajout_assiettes();
                }
                if ((niveau[niv].map[(perso2.pos_y / 40) - 4][(perso2.pos_x / 40)]) == 8) {
                    ajout_aliments((perso2.pos_y / 40) - 4,(perso2.pos_x / 40));
                }
                if ((niveau[niv].map[(perso2.pos_y / 40) - 3][(perso2.pos_x / 40) - 1]) == 8) {
                    ajout_aliments((perso2.pos_y / 40) - 3,(perso2.pos_x / 40) - 1);
                }
                break;
            case NORTHEAST:
                if ((niveau[niv].map[(perso2.pos_y / 40) - 4][(perso2.pos_x / 40)]) == 6) {
                    ajout_assiettes();
                }
                if ((niveau[niv].map[(perso2.pos_y / 40) - 3][(perso2.pos_x / 40) + 1]) == 6) {
                    ajout_assiettes();
                }
                if ((niveau[niv].map[(perso2.pos_y / 40) - 4][(perso2.pos_x / 40)]) == 8) {
                    ajout_aliments((perso2.pos_y / 40) - 4,(perso2.pos_x / 40));
                }
                if ((niveau[niv].map[(perso2.pos_y / 40) - 3][(perso2.pos_x / 40) + 1]) == 8) {
                    ajout_aliments((perso2.pos_y / 40) - 3,(perso2.pos_x / 40) + 1);
                }
                break;
            case SOUTHWEST:
                if ((niveau[niv].map[(perso2.pos_y / 40) - 2][(perso2.pos_x / 40)]) == 6) {
                    ajout_assiettes();
                }
                if ((niveau[niv].map[(perso2.pos_y / 40) - 3][(perso2.pos_x / 40) - 1]) == 6) {
                    ajout_assiettes();
                }
                if ((niveau[niv].map[(perso2.pos_y / 40) - 2][(perso2.pos_x / 40)]) == 8) {
                    ajout_aliments((perso2.pos_y / 40) - 2,(perso2.pos_x / 40));
                }
                if ((niveau[niv].map[(perso2.pos_y / 40) - 3][(perso2.pos_x / 40) - 1]) == 8) {
                    ajout_aliments((perso2.pos_y / 40) - 3,(perso2.pos_x / 40) - 1);
                }
                break;
            case SOUTHEAST:
                if ((niveau[niv].map[(perso2.pos_y / 40) - 2][(perso2.pos_x / 40)]) == 6) {
                    ajout_assiettes();
                }
                if ((niveau[niv].map[(perso2.pos_y / 40) - 3][(perso2.pos_x / 40) + 1]) == 6) {
                    ajout_assiettes();
                }
                if ((niveau[niv].map[(perso2.pos_y / 40) - 2][(perso2.pos_x / 40)]) == 8) {
                    ajout_aliments((perso2.pos_y / 40) - 2,(perso2.pos_x / 40));
                }
                if ((niveau[niv].map[(perso2.pos_y / 40) - 3][(perso2.pos_x / 40) + 1]) == 8) {
                    ajout_aliments((perso2.pos_y / 40) - 3,(perso2.pos_x / 40) + 1);
                }
                break;
        }
    }

    if ((perso2.action == 1) && (perso2.en_main_as == NULL) && (perso2.en_main_al == NULL)) {    //Prendre Objet (Perso 1)
        Assiette *actuel_as = file_assiette.debut;
        while (actuel_as != NULL) {
            switch (perso2.current_direction) {
                case NORTH:
                    if (((perso2.pos_x / 40)==(actuel_as->pos_x / 40)) && ((perso2.pos_y / 40)-1)==(actuel_as->pos_y / 40)) {
                        actuel_as->en_main = 1;
                        perso2.en_main_as = actuel_as;
                        return;
                    }
                    break;
                case SOUTH:
                    if (((perso2.pos_x / 40)==(actuel_as->pos_x / 40)) && ((perso2.pos_y / 40)+1) == (actuel_as->pos_y / 40)) {
                        actuel_as->en_main = 1;
                        perso2.en_main_as = actuel_as;
                        return;
                    }
                    break;
                case EAST:
                    if ((((perso2.pos_x / 40)+1)==(actuel_as->pos_x / 40)) && (perso2.pos_y / 40)==(actuel_as->pos_y / 40)) {
                        actuel_as->en_main = 1;
                        perso2.en_main_as = actuel_as;
                        return;
                    }
                    break;
                case WEST:
                    if (((((perso2.pos_x / 40) - 1))==(actuel_as->pos_x / 40)) && (perso2.pos_y / 40)==(actuel_as->pos_y / 40)) {
                        actuel_as->en_main = 1;
                        perso2.en_main_as = actuel_as;
                        return;
                    }
                    break;
                case NORTHWEST:
                    if (((perso2.pos_x / 40 == (actuel_as->pos_x / 40)) &&
                         ((perso2.pos_y / 40) - 1) == (actuel_as->pos_y / 40)) ||
                        ((((perso2.pos_x / 40) - 1) == (actuel_as->pos_x / 40)) &&
                         ((perso2.pos_y / 40) == (actuel_as->pos_y / 40)))) {
                        actuel_as->en_main = 1;
                        perso2.en_main_as = actuel_as;
                        return;
                    }
                    break;
                case NORTHEAST:
                    if ((((perso2.pos_x / 40) == (actuel_as->pos_x / 40)) &&
                         ((perso2.pos_y / 40) - 1) == (actuel_as->pos_y / 40)) ||
                        ((((perso2.pos_x / 40) + 1) == (actuel_as->pos_x / 40)) &&
                         ((perso2.pos_y / 40) == (actuel_as->pos_y / 40)))) {
                        actuel_as->en_main = 1;
                        perso2.en_main_as = actuel_as;
                        return;
                    }
                    break;
                case SOUTHWEST:
                    if ((((perso2.pos_x / 40) == (actuel_as->pos_x / 40)) &&
                         ((perso2.pos_y / 40) + 1) == (actuel_as->pos_y / 40)) ||
                        ((((perso2.pos_x / 40) - 1) == (actuel_as->pos_x / 40)) &&
                         ((perso2.pos_y / 40) == (actuel_as->pos_y / 40)))) {
                        actuel_as->en_main = 1;
                        perso2.en_main_as = actuel_as;
                        return;
                    }
                    break;
                case SOUTHEAST:
                    if ((((perso2.pos_x / 40) == (actuel_as->pos_x / 40)) &&
                         ((perso2.pos_y / 40) + 1) == (actuel_as->pos_y / 40)) ||
                        ((((perso2.pos_x / 40) + 1) == (actuel_as->pos_x / 40)) &&
                         ((perso2.pos_y / 40) == (actuel_as->pos_y / 40)))) {
                        actuel_as->en_main = 1;
                        perso2.en_main_as = actuel_as;
                        return;
                    }
                    break;
            }
            actuel_as = actuel_as->next;
        }
        Alliment *actuel_al = file_alliment.debut;
        while (actuel_al != NULL) {
            switch (perso1.current_direction) {
                case NORTH:
                    if (((perso2.pos_x / 40) == (actuel_al->pos_x / 40)) &&
                        ((perso2.pos_y / 40) - 1) == (actuel_al->pos_y / 40)) {
                        actuel_al->en_main = 1;
                        perso2.en_main_al = actuel_al;
                        return;
                    }
                    break;
                case SOUTH:
                    if (((perso2.pos_x / 40) == (actuel_al->pos_x / 40)) &&
                        ((perso2.pos_y / 40) + 1) == (actuel_al->pos_y / 40)) {
                        actuel_al->en_main = 1;
                        perso2.en_main_al = actuel_al;
                        return;
                    }
                    break;
                case EAST:
                    if ((((perso2.pos_x / 40 + 1)) == (actuel_al->pos_x / 40)) &&
                        (perso2.pos_y / 40) == (actuel_al->pos_y / 40)) {
                        actuel_al->en_main = 1;
                        perso2.en_main_al = actuel_al;
                        return;
                    }
                    break;
                case WEST:
                    if ((((perso2.pos_x / 40 - 1)) == (actuel_al->pos_x / 40)) &&
                        (perso2.pos_y / 40) == (actuel_al->pos_y / 40)) {
                        actuel_al->en_main = 1;
                        perso2.en_main_al = actuel_al;
                        return;
                    }
                    break;
                case NORTHWEST:
                    if ((((perso2.pos_x / 40) == (actuel_al->pos_x / 40)) &&
                         ((perso2.pos_y / 40) - 1) == (actuel_al->pos_y / 40)) ||
                        ((((perso2.pos_x / 40) - 1) == (actuel_al->pos_x / 40)) &&
                         ((perso2.pos_y / 40) == (actuel_al->pos_y / 40)))) {
                        actuel_al->en_main = 1;
                        perso2.en_main_al = actuel_al;
                        return;
                    }
                    break;
                case NORTHEAST:
                    if ((((perso2.pos_x / 40) == (actuel_al->pos_x / 40)) &&
                         ((perso2.pos_y / 40) - 1) == (actuel_al->pos_y / 40)) ||
                        ((((perso2.pos_x / 40) + 1) == (actuel_al->pos_x / 40)) &&
                         ((perso2.pos_y / 40) == (actuel_al->pos_y / 40)))) {
                        actuel_al->en_main = 1;
                        perso2.en_main_al = actuel_al;
                        return;
                    }
                    break;
                case SOUTHWEST:
                    if ((((perso2.pos_x / 40) == (actuel_al->pos_x / 40)) &&
                         ((perso2.pos_y / 40) + 1) == (actuel_al->pos_y / 40)) ||
                        ((((perso2.pos_x / 40) - 1) == (actuel_al->pos_x / 40)) &&
                         ((perso2.pos_y / 40) == (actuel_al->pos_y / 40)))) {
                        actuel_al->en_main = 1;
                        perso1.en_main_al = actuel_al;
                        return;
                    }
                    break;
                case SOUTHEAST:
                    if ((((perso2.pos_x / 40) == (actuel_al->pos_x / 40)) &&
                         ((perso2.pos_y / 40) + 1) == (actuel_al->pos_y / 40)) ||
                        ((((perso2.pos_x / 40) + 1) == (actuel_al->pos_x / 40)) &&
                         ((perso2.pos_y / 40) == (actuel_al->pos_y / 40)))) {
                        actuel_al->en_main = 1;
                        perso2.en_main_al = actuel_al;
                        return;
                    }
                    break;
            }
            actuel_al = actuel_al->next;
        }
    }
}