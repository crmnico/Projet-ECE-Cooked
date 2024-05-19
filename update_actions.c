#include "Header.h"

void update_actions() {

    //REGARDE QUELLE NIVEAU ON EST
    int niv;
    for (int i = 0; i < 8; ++i) {
        if (niveau[i].actuel==1) niv = i;
    }

    ////PERSONNAGE 1////
    if ((perso1.action == 1) && ((perso1.en_main_as != NULL)||(perso1.en_main_al != NULL))) {     //Deposer objet et supprimer (Perso 1)
        int x = perso1.pos_x / 40, y = (perso1.pos_y / 40) - 3;
        switch (perso1.current_direction) {
            case NORTH:
                if(perso1.en_main_as!=NULL) {
                    if ((colisions_objet1(x * 40 + 20,y * 40 + 80 + 20)==0)&&((niveau[niv].map[y-1][x]) == 1)) {
                        perso1.en_main_as->pos_x = x * 40 + 20;
                        perso1.en_main_as->pos_y = y * 40 + 80 + 20;
                        perso1.en_main_as->en_main = 0;
                        perso1.en_main_as = NULL;
                    }
                    if ((niveau[niv].map[y-1][x]) == 5) {
                        supprimer_assiette(perso1.en_main_as);
                        perso1.en_main_as=NULL;
                    }
                    if ((niveau[niv].map[y-1][x]) == 7) {
                        sortie_cusinie1();
                    }
                }else{
                    if ((colisions_objet1(x * 40 + 20,y * 40 + 80 + 20)==0)&&(((niveau[niv].map[y-1][x]) == 1) || (((niveau[niv].map[y-1][x]) == 2)&&((perso1.en_main_al->objet==2)||(perso1.en_main_al->objet==4))) || (((niveau[niv].map[y-1][x]) == 3)&&(perso1.en_main_al->objet==8)))) {
                        perso1.en_main_al->pos_x = x * 40 + 20;
                        perso1.en_main_al->pos_y = y * 40 + 80 + 20;
                        perso1.en_main_al->en_main = 0;
                        perso1.en_main_al = NULL;
                    }
                    if ((niveau[niv].map[y-1][x]) == 5) {
                        supprimer_alliment(perso1.en_main_al);
                        perso1.en_main_al = NULL;
                    }
                }
                break;
            case SOUTH:
                if(perso1.en_main_as!=NULL) {
                    if ((colisions_objet1(x * 40 + 20,y * 40 + 160 + 20)==0)&&((niveau[niv].map[y + 1][x]) == 1)) {
                        perso1.en_main_as->pos_x = x * 40 + 20;
                        perso1.en_main_as->pos_y = y * 40 + 160 + 20;
                        perso1.en_main_as->en_main = 0;
                        perso1.en_main_as = NULL;
                    }
                    if ((niveau[niv].map[y + 1][x]) == 5) {
                        supprimer_assiette(perso1.en_main_as);
                        perso1.en_main_as=NULL;
                    }
                    if ((niveau[niv].map[y + 1][x]) == 7) {
                        sortie_cusinie1();
                    }
                }else{
                    if ((colisions_objet1(x * 40 + 20,y * 40 + 160 + 20)==0)&&(((niveau[niv].map[y + 1][x]) == 1) || (((niveau[niv].map[y+1][x]) == 2)&&((perso1.en_main_al->objet==2)||(perso1.en_main_al->objet==4))) || (((niveau[niv].map[y+1][x]) == 3)&&(perso1.en_main_al->objet==8)))) {
                        perso1.en_main_al->pos_x = x * 40 + 20;
                        perso1.en_main_al->pos_y = y * 40 + 160 + 20;
                        perso1.en_main_al->en_main = 0;
                        perso1.en_main_al = NULL;
                    }
                    if ((niveau[niv].map[y + 1][x]) == 5) {
                        supprimer_alliment(perso1.en_main_al);
                        perso1.en_main_al=NULL;
                    }
                }
                break;
            case EAST:
                if(perso1.en_main_as!=NULL) {
                    if ((colisions_objet1(x * 40 + 40 + 20,y * 40 + 120 + 20)==0)&&((niveau[niv].map[y][x + 1]) == 1)) {
                        perso1.en_main_as->pos_x = x * 40 + 40 + 20;
                        perso1.en_main_as->pos_y = y * 40 + 120 + 20;
                        perso1.en_main_as->en_main = 0;
                        perso1.en_main_as = NULL;
                    }
                    if ((niveau[niv].map[y][x + 1]) == 5) {
                        supprimer_assiette(perso1.en_main_as);
                        perso1.en_main_as=NULL;
                    }
                    if ((niveau[niv].map[y][x + 1]) == 7) {
                        sortie_cusinie1();
                    }
                }else{
                    if ((colisions_objet1(x * 40 + 40 + 20,y * 40 + 120 + 20)==0)&&(((niveau[niv].map[y][x + 1]) == 1) || (((niveau[niv].map[y][x+1]) == 2)&&((perso1.en_main_al->objet==2)||(perso1.en_main_al->objet==4))) || (((niveau[niv].map[y][x+1]) == 3)&&(perso1.en_main_al->objet==8)))) {
                        perso1.en_main_al->pos_x = x * 40 + 40 + 20;
                        perso1.en_main_al->pos_y = y * 40 + 120 + 20;
                        perso1.en_main_al->en_main = 0;
                        perso1.en_main_al = NULL;
                    }
                    if ((niveau[niv].map[y][x + 1]) == 5) {
                        supprimer_alliment(perso1.en_main_al);
                        perso1.en_main_al=NULL;
                    }
                }
                break;
            case WEST:
                if(perso1.en_main_as!=NULL) {
                    if ((colisions_objet1(x * 40 - 40 + 20,y * 40 + 120 + 20)==0)&&((niveau[niv].map[y][x - 1]) == 1)) {
                        perso1.en_main_as->pos_x = x * 40 - 40 + 20;
                        perso1.en_main_as->pos_y = y * 40 + 120 + 20;
                        perso1.en_main_as->en_main = 0;
                        perso1.en_main_as = NULL;
                    }
                    if ((niveau[niv].map[y][x - 1]) == 5) {
                        supprimer_assiette(perso1.en_main_as);
                        perso1.en_main_as=NULL;
                    }
                    if ((niveau[niv].map[y][x - 1]) == 7) {
                        sortie_cusinie1();
                    }
                }else{
                    if ((colisions_objet1(x * 40 - 40 + 20,y * 40 + 120 + 20)==0)&&(((niveau[niv].map[y][x - 1]) == 1) || (((niveau[niv].map[y][x-1]) == 2)&&((perso1.en_main_al->objet==2)||(perso1.en_main_al->objet==4))) || (((niveau[niv].map[y][x-1]) == 3)&&(perso1.en_main_al->objet==8)))) {
                        perso1.en_main_al->pos_x = x * 40 - 40 + 20;
                        perso1.en_main_al->pos_y = y * 40 + 120 + 20;
                        perso1.en_main_al->en_main = 0;
                        perso1.en_main_al = NULL;
                    }
                    if ((niveau[niv].map[y][x - 1]) == 5) {
                        supprimer_alliment(perso1.en_main_al);
                        perso1.en_main_al=NULL;
                    }
                }
                break;
            case NORTHWEST:
                if(perso1.en_main_as!=NULL) {
                    if ((colisions_objet1(x * 40 + 20,y * 40 + 80 + 20)==0)&&((niveau[niv].map[y-1][x]) == 1)) {
                        perso1.en_main_as->pos_x = x * 40 + 20;
                        perso1.en_main_as->pos_y = y * 40 + 80 + 20;
                        perso1.en_main_as->en_main = 0;
                        perso1.en_main_as = NULL;
                    }
                    if ((colisions_objet1(x * 40 - 40 + 20,y * 40 + 120 + 20)==0)&&((niveau[niv].map[y][x-1]) == 1)) {
                        perso1.en_main_as->pos_x = x * 40 - 40 + 20;
                        perso1.en_main_as->pos_y = y * 40 + 120 + 20;
                        perso1.en_main_as->en_main = 0;
                        perso1.en_main_as = NULL;
                    }
                    if ((niveau[niv].map[y-1][x]) == 5) {
                        supprimer_assiette(perso1.en_main_as);
                        perso1.en_main_as=NULL;
                    }
                    if ((niveau[niv].map[y][x-1]) == 5) {
                        supprimer_assiette(perso1.en_main_as);
                        perso1.en_main_as=NULL;
                    }
                    if ((niveau[niv].map[y-1][x]) == 7) {
                        sortie_cusinie1();
                    }
                    if ((niveau[niv].map[y][x-1]) == 7) {
                        sortie_cusinie1();
                    }
                }else{
                    if ((colisions_objet1(x * 40 + 20,y * 40 + 80 + 20)==0)&&(((niveau[niv].map[y-1][x]) == 1) || (((niveau[niv].map[y-1][x]) == 2)&&((perso1.en_main_al->objet==2)||(perso1.en_main_al->objet==4))) || (((niveau[niv].map[y-1][x]) == 3)&&(perso1.en_main_al->objet==8)))) {
                        perso1.en_main_al->pos_x = x * 40 + 20;
                        perso1.en_main_al->pos_y = y * 40 + 80 + 20;
                        perso1.en_main_al->en_main = 0;
                        perso1.en_main_al = NULL;
                    }
                    if ((colisions_objet1(x * 40 - 40 + 20,y * 40 + 120 + 20)==0)&&(((niveau[niv].map[y][x-1]) == 1) || (((niveau[niv].map[y][x-1]) == 2)&&((perso1.en_main_al->objet==2)||(perso1.en_main_al->objet==4))) || (((niveau[niv].map[y][x-1]) == 3)&&(perso1.en_main_al->objet==8)))) {
                        perso1.en_main_al->pos_x = x * 40 - 40 + 20;
                        perso1.en_main_al->pos_y = y * 40 + 120 + 20;
                        perso1.en_main_al->en_main = 0;
                        perso1.en_main_al = NULL;
                    }
                    if ((niveau[niv].map[y-1][x]) == 5) {
                        supprimer_alliment(perso1.en_main_al);
                        perso1.en_main_al=NULL;
                    }
                    if ((niveau[niv].map[y][x-1]) == 5) {
                        supprimer_alliment(perso1.en_main_al);
                        perso1.en_main_al=NULL;
                    }
                }
                break;
            case NORTHEAST:
                if(perso1.en_main_as!=NULL) {
                    if ((colisions_objet1(x * 40 + 20,y * 40 + 80 + 20)==0)&&((niveau[niv].map[y-1][x]) == 1)) {
                        perso1.en_main_as->pos_x = x * 40 + 20;
                        perso1.en_main_as->pos_y = y * 40 + 80 + 20;
                        perso1.en_main_as->en_main = 0;
                        perso1.en_main_as = NULL;
                    }
                    if ((colisions_objet1(x * 40 + 40 + 20,y * 40 + 120 + 20)==0)&&((niveau[niv].map[y][x+1]) == 1)) {
                        perso1.en_main_as->pos_x = x * 40 + 40 + 20;
                        perso1.en_main_as->pos_y = y * 40 + 120 + 20;
                        perso1.en_main_as->en_main = 0;
                        perso1.en_main_as = NULL;
                    }
                    if ((niveau[niv].map[y-1][x]) == 5) {
                        supprimer_assiette(perso1.en_main_as);
                        perso1.en_main_as=NULL;
                    }
                    if ((niveau[niv].map[y][x+1]) == 5) {
                        supprimer_assiette(perso1.en_main_as);
                        perso1.en_main_as=NULL;
                    }
                    if ((niveau[niv].map[y-1][x]) == 7) {
                        sortie_cusinie1();
                    }
                    if ((niveau[niv].map[y][x+1]) == 7) {
                        sortie_cusinie1();
                    }
                }else{
                    if ((colisions_objet1(x * 40 + 20,y * 40 + 80 + 20)==0)&&(((niveau[niv].map[y-1][x]) == 1) || (((niveau[niv].map[y-1][x]) == 2)&&((perso1.en_main_al->objet==2)||(perso1.en_main_al->objet==4))) || (((niveau[niv].map[y-1][x]) == 3)&&(perso1.en_main_al->objet==8)))) {
                        perso1.en_main_al->pos_x = x * 40 + 20;
                        perso1.en_main_al->pos_y = y * 40 + 80 + 20;
                        perso1.en_main_al->en_main = 0;
                        perso1.en_main_al = NULL;
                    }
                    if ((colisions_objet1(x * 40 + 40 + 20,y * 40 + 120 + 20)==0)&&(((niveau[niv].map[y][x+1]) == 1) || (((niveau[niv].map[y][x+1]) == 2)&&((perso1.en_main_al->objet==2)||(perso1.en_main_al->objet==4))) || (((niveau[niv].map[y][x+1]) == 3)&&(perso1.en_main_al->objet==8)))) {
                        perso1.en_main_al->pos_x = x * 40 + 40 + 20;
                        perso1.en_main_al->pos_y = y * 40 + 120 + 20;
                        perso1.en_main_al->en_main = 0;
                        perso1.en_main_al = NULL;
                    }
                    if ((niveau[niv].map[y-1][x]) == 5) {
                        supprimer_alliment(perso1.en_main_al);
                        perso1.en_main_al=NULL;
                    }
                    if ((niveau[niv].map[y][x+1]) == 5) {
                        supprimer_alliment(perso1.en_main_al);
                        perso1.en_main_al=NULL;
                    }
                }
                break;
            case SOUTHWEST:
                if(perso1.en_main_as!=NULL) {
                    if ((colisions_objet1(x * 40 + 20,y * 40 + 160 + 20)==0)&&((niveau[niv].map[y+1][x]) == 1)) {
                        perso1.en_main_as->pos_x = x * 40 + 20;
                        perso1.en_main_as->pos_y = y * 40 + 160 + 20;
                        perso1.en_main_as->en_main = 0;
                        perso1.en_main_as = NULL;
                    }
                    if ((colisions_objet1(x * 40 - 40 + 20,y * 40 + 120 + 20)==0)&&((niveau[niv].map[y][x-1]) == 1)) {
                        perso1.en_main_as->pos_x = x * 40 - 40 + 20;
                        perso1.en_main_as->pos_y = y * 40 + 120 + 20;
                        perso1.en_main_as->en_main = 0;
                        perso1.en_main_as = NULL;
                    }
                    if ((niveau[niv].map[y + 1][x]) == 5) {
                        supprimer_assiette(perso1.en_main_as);
                        perso1.en_main_as=NULL;
                    }
                    if ((niveau[niv].map[y][x - 1]) == 5) {
                        supprimer_assiette(perso1.en_main_as);
                        perso1.en_main_as=NULL;
                    }
                    if ((niveau[niv].map[y+1][x]) == 7) {
                        sortie_cusinie1();
                    }
                    if ((niveau[niv].map[y][x-1]) == 7) {
                        sortie_cusinie1();
                    }
                }else{
                    if ((colisions_objet1(x * 40 + 20,y * 40 + 160 + 20)==0)&&(((niveau[niv].map[y+1][x]) == 1) || (((niveau[niv].map[y+1][x]) == 2)&&((perso1.en_main_al->objet==2)||(perso1.en_main_al->objet==4))) || (((niveau[niv].map[y+1][x]) == 3)&&(perso1.en_main_al->objet==8)))){
                        perso1.en_main_al->pos_x = x * 40 + 20;
                        perso1.en_main_al->pos_y = y * 40 + 160 + 20;
                        perso1.en_main_al->en_main = 0;
                        perso1.en_main_al = NULL;
                    }
                    if ((colisions_objet1(x * 40 - 40 + 20,y * 40 + 120 + 20)==0)&&(((niveau[niv].map[y][x - 1]) == 1) || (((niveau[niv].map[y][x-1]) == 2)&&((perso1.en_main_al->objet==2)||(perso1.en_main_al->objet==4))) || (((niveau[niv].map[y][x-1]) == 3)&&(perso1.en_main_al->objet==8)))) {
                        perso1.en_main_al->pos_x = x * 40 - 40 + 20;
                        perso1.en_main_al->pos_y = y * 40 + 120 + 20;
                        perso1.en_main_al->en_main = 0;
                        perso1.en_main_al = NULL;
                    }
                    if ((niveau[niv].map[y + 1][x]) == 5) {
                        supprimer_alliment(perso1.en_main_al);
                        perso1.en_main_al=NULL;
                    }
                    if ((niveau[niv].map[y][x - 1]) == 5) {
                        supprimer_alliment(perso1.en_main_al);
                        perso1.en_main_al=NULL;
                    }
                }
                break;
            case SOUTHEAST:
                if(perso1.en_main_as!=NULL) {
                    if ((colisions_objet1(x * 40 + 20,y * 40 + 160 + 20)==0)&&((niveau[niv].map[y+1][x]) == 1)){
                        perso1.en_main_as->pos_x = x * 40 + 20;
                        perso1.en_main_as->pos_y = y * 40 + 160 + 20;
                        perso1.en_main_as->en_main = 0;
                        perso1.en_main_as = NULL;
                    }
                    if ((colisions_objet1(x * 40 + 40 + 20,y * 40 + 120 + 20)==0)&&((niveau[niv].map[y][x+1]) == 1)) {
                        perso1.en_main_as->pos_x = x * 40 + 40 + 20;
                        perso1.en_main_as->pos_y = y * 40 + 120 + 20;
                        perso1.en_main_as->en_main = 0;
                        perso1.en_main_as = NULL;
                    }
                    if ((niveau[niv].map[y+1][x]) == 5) {
                        supprimer_assiette(perso1.en_main_as);
                        perso1.en_main_as=NULL;
                    }
                    if ((niveau[niv].map[y][x+1]) == 5) {
                        supprimer_assiette(perso1.en_main_as);
                        perso1.en_main_as=NULL;
                    }
                    if ((niveau[niv].map[y+1][x]) == 7) {
                        sortie_cusinie1();
                    }
                    if ((niveau[niv].map[y][x+1]) == 7) {
                        sortie_cusinie1();
                    }
                }else{
                    if ((colisions_objet1(x * 40 + 20,y * 40 + 160 + 20)==0)&&(((niveau[niv].map[y+1][x]) == 1) || (((niveau[niv].map[y+1][x]) == 2)&&((perso1.en_main_al->objet==2)||(perso1.en_main_al->objet==4))) || (((niveau[niv].map[y+1][x]) == 3)&&(perso1.en_main_al->objet==8)))) {
                        perso1.en_main_al->pos_x = x * 40 + 20;
                        perso1.en_main_al->pos_y = y * 40 + 160 + 20;
                        perso1.en_main_al->en_main = 0;
                        perso1.en_main_al = NULL;
                    }
                    if ((colisions_objet1(x * 40 + 40 + 20,y * 40 + 120 + 20)==0)&&(((niveau[niv].map[y][x + 1]) == 1) || (((niveau[niv].map[y][x+1]) == 2)&&((perso1.en_main_al->objet==2)||(perso1.en_main_al->objet==4))) || (((niveau[niv].map[y][x+1]) == 3)&&(perso1.en_main_al->objet==8)))) {
                        perso1.en_main_al->pos_x = x * 40 + 40 + 20;
                        perso1.en_main_al->pos_y = y * 40 + 120 + 20;
                        perso1.en_main_al->en_main = 0;
                        perso1.en_main_al = NULL;
                    }
                    if ((niveau[niv].map[y+1][x]) == 5) {
                        supprimer_alliment(perso1.en_main_al);
                        perso1.en_main_al=NULL;
                    }
                    if ((niveau[niv].map[y][x+1]) == 5) {
                        supprimer_alliment(perso1.en_main_al);
                        perso1.en_main_al=NULL;
                    }
                }
                break;
        }
    }


    ////PERSONNAGE 2////
    if ((perso2.action == 1) && ((perso2.en_main_as != NULL)||(perso2.en_main_al != NULL))) {     //Deposer objet et supprimer (Perso 1)
        int x = perso2.pos_x / 40, y = (perso2.pos_y / 40) - 3;
        switch (perso2.current_direction) {
            case NORTH:
                if(perso2.en_main_as!=NULL) {
                    if ((colisions_objet2(x * 40 + 20,y * 40 + 80 + 20)==0)&&((niveau[niv].map[y-1][x]) == 1)) {
                        perso2.en_main_as->pos_x = x * 40 + 20;
                        perso2.en_main_as->pos_y = y * 40 + 80 + 20;
                        perso2.en_main_as->en_main = 0;
                        perso2.en_main_as = NULL;
                    }
                    if ((niveau[niv].map[y-1][x]) == 5) {
                        supprimer_assiette(perso2.en_main_as);
                        perso2.en_main_as=NULL;
                    }
                    if ((niveau[niv].map[y-1][x]) == 7) {
                        sortie_cusinie2();
                    }
                }else{
                    if ((colisions_objet2(x * 40 + 20,y * 40 + 80 + 20)==0)&&(((niveau[niv].map[y-1][x]) == 1) || (((niveau[niv].map[y-1][x]) == 2)&&((perso2.en_main_al->objet==2)||(perso2.en_main_al->objet==4))) || (((niveau[niv].map[y-1][x]) == 3)&&(perso2.en_main_al->objet==8)))) {
                        perso2.en_main_al->pos_x = x * 40 + 20;
                        perso2.en_main_al->pos_y = y * 40 + 80 + 20;
                        perso2.en_main_al->en_main = 0;
                        perso2.en_main_al = NULL;
                    }
                    if ((niveau[niv].map[y-1][x]) == 5) {
                        supprimer_alliment(perso2.en_main_al);
                        perso2.en_main_al=NULL;
                    }
                }
                break;
            case SOUTH:
                if(perso2.en_main_as!=NULL) {
                    if ((colisions_objet2(x * 40 + 20,y * 40 + 160 + 20)==0)&&((niveau[niv].map[y + 1][x]) == 1)) {
                        perso2.en_main_as->pos_x = x * 40 + 20;
                        perso2.en_main_as->pos_y = y * 40 + 160 + 20;
                        perso2.en_main_as->en_main = 0;
                        perso2.en_main_as = NULL;
                    }
                    if ((niveau[niv].map[y + 1][x]) == 5) {
                        supprimer_assiette(perso2.en_main_as);
                        perso2.en_main_as=NULL;
                    }
                    if ((niveau[niv].map[y + 1][x]) == 7) {
                        sortie_cusinie2();
                    }
                }else{
                    if ((colisions_objet2(x * 40 + 20,y * 40 + 160 + 20)==0)&&(((niveau[niv].map[y + 1][x]) == 1) || (((niveau[niv].map[y+1][x]) == 2)&&((perso2.en_main_al->objet==2)||(perso2.en_main_al->objet==4))) || (((niveau[niv].map[y+1][x]) == 3)&&(perso2.en_main_al->objet==8)))) {
                        perso2.en_main_al->pos_x = x * 40 + 20;
                        perso2.en_main_al->pos_y = y * 40 + 160 + 20;
                        perso2.en_main_al->en_main = 0;
                        perso2.en_main_al = NULL;
                    }
                    if ((niveau[niv].map[y + 1][x]) == 5) {
                        supprimer_alliment(perso2.en_main_al);
                        perso2.en_main_al=NULL;
                    }
                }
                break;
            case EAST:
                if(perso2.en_main_as!=NULL) {
                    if ((colisions_objet2(x * 40 + 40 + 20,y * 40 + 120 + 20)==0)&&((niveau[niv].map[y][x + 1]) == 1)) {
                        perso2.en_main_as->pos_x = x * 40 + 40 + 20;
                        perso2.en_main_as->pos_y = y * 40 + 120 + 20;
                        perso2.en_main_as->en_main = 0;
                        perso2.en_main_as = NULL;
                    }
                    if ((niveau[niv].map[y][x + 1]) == 5) {
                        supprimer_assiette(perso2.en_main_as);
                        perso2.en_main_as=NULL;
                    }
                    if ((niveau[niv].map[y][x + 1]) == 7) {
                        sortie_cusinie2();
                    }
                }else{
                    if ((colisions_objet2(x * 40 + 40 + 20,y * 40 + 120 + 20)==0)&&(((niveau[niv].map[y][x + 1]) == 1) || (((niveau[niv].map[y][x+1]) == 2)&&((perso2.en_main_al->objet==2)||(perso2.en_main_al->objet==4))) || (((niveau[niv].map[y][x+1]) == 3)&&(perso2.en_main_al->objet==8)))) {
                        perso2.en_main_al->pos_x = x * 40 + 40 + 20;
                        perso2.en_main_al->pos_y = y * 40 + 120 + 20;
                        perso2.en_main_al->en_main = 0;
                        perso2.en_main_al = NULL;
                    }
                    if ((niveau[niv].map[y][x + 1]) == 5) {
                        supprimer_alliment(perso2.en_main_al);
                        perso2.en_main_al=NULL;
                    }
                }
                break;
            case WEST:
                if(perso2.en_main_as!=NULL) {
                    if ((colisions_objet2(x * 40 - 40 + 20,y * 40 + 120 + 20)==0)&&((niveau[niv].map[y][x - 1]) == 1)) {
                        perso2.en_main_as->pos_x = x * 40 - 40 + 20;
                        perso2.en_main_as->pos_y = y * 40 + 120 + 20;
                        perso2.en_main_as->en_main = 0;
                        perso2
                        .en_main_as = NULL;
                    }
                    if ((niveau[niv].map[y][x - 1]) == 5) {
                        supprimer_assiette(perso2.en_main_as);
                        perso2.en_main_as=NULL;
                    }
                    if ((niveau[niv].map[y][x - 1]) == 7) {
                        sortie_cusinie2();
                    }
                }else{
                    if ((colisions_objet2(x * 40 - 40 + 20,y * 40 + 120 + 20)==0)&&(((niveau[niv].map[y][x - 1]) == 1) || (((niveau[niv].map[y][x-1]) == 2)&&((perso2.en_main_al->objet==2)||(perso2.en_main_al->objet==4))) || (((niveau[niv].map[y][x-1]) == 3)&&(perso2.en_main_al->objet==8)))) {
                        perso2.en_main_al->pos_x = x * 40 - 40 + 20;
                        perso2.en_main_al->pos_y = y * 40 + 120 + 20;
                        perso2.en_main_al->en_main = 0;
                        perso2.en_main_al = NULL;
                    }
                    if ((niveau[niv].map[y][x - 1]) == 5) {
                        supprimer_alliment(perso2.en_main_al);
                        perso2.en_main_al=NULL;
                    }
                }
                break;
            case NORTHWEST:
                if(perso2.en_main_as!=NULL) {
                    if ((colisions_objet2(x * 40 + 20,y * 40 + 80 + 20)==0)&&((niveau[niv].map[y-1][x]) == 1)) {
                        perso2.en_main_as->pos_x = x * 40 + 20;
                        perso2.en_main_as->pos_y = y * 40 + 80 + 20;
                        perso2.en_main_as->en_main = 0;
                        perso2.en_main_as = NULL;
                    }
                    if ((colisions_objet2(x * 40 - 40 + 20,y * 40 + 120 + 20)==0)&&((niveau[niv].map[y][x-1]) == 1)) {
                        perso2.en_main_as->pos_x = x * 40 - 40 + 20;
                        perso2.en_main_as->pos_y = y * 40 + 120 + 20;
                        perso2.en_main_as->en_main = 0;
                        perso2.en_main_as = NULL;
                    }
                    if ((niveau[niv].map[y-1][x]) == 5) {
                        supprimer_assiette(perso2.en_main_as);
                        perso2.en_main_as=NULL;
                    }
                    if ((niveau[niv].map[y][x-1]) == 5) {
                        supprimer_assiette(perso2.en_main_as);
                        perso2.en_main_as=NULL;
                    }
                    if ((niveau[niv].map[y-1][x]) == 7) {
                        sortie_cusinie2();
                    }
                    if ((niveau[niv].map[y][x-1]) == 7) {
                        sortie_cusinie2();
                    }
                }else{
                    if ((colisions_objet2(x * 40 + 20,y * 40 + 80 + 20)==0)&&(((niveau[niv].map[y-1][x]) == 1) || (((niveau[niv].map[y-1][x]) == 2)&&((perso2.en_main_al->objet==2)||(perso2.en_main_al->objet==4))) || (((niveau[niv].map[y-1][x]) == 3)&&(perso2.en_main_al->objet==8)))) {
                        perso2.en_main_al->pos_x = x * 40 + 20;
                        perso2.en_main_al->pos_y = y * 40 + 80 + 20;
                        perso2.en_main_al->en_main = 0;
                        perso2.en_main_al = NULL;
                    }
                    if ((colisions_objet2(x * 40 - 40 + 20,y * 40 + 120 + 20)==0)&&(((niveau[niv].map[y][x-1]) == 1) || (((niveau[niv].map[y][x-1]) == 2)&&((perso2.en_main_al->objet==2)||(perso2.en_main_al->objet==4))) || (((niveau[niv].map[y][x-1]) == 3)&&(perso2.en_main_al->objet==8)))) {
                        perso2.en_main_al->pos_x = x * 40 - 40 + 20;
                        perso2.en_main_al->pos_y = y * 40 + 120 + 20;
                        perso2.en_main_al->en_main = 0;
                        perso2.en_main_al = NULL;
                    }
                    if ((niveau[niv].map[y-1][x]) == 5) {
                        supprimer_alliment(perso2.en_main_al);
                        perso2.en_main_al=NULL;
                    }
                    if ((niveau[niv].map[y][x-1]) == 5) {
                        supprimer_alliment(perso2.en_main_al);
                        perso2.en_main_al=NULL;
                    }
                }
                break;
            case NORTHEAST:
                if(perso2.en_main_as!=NULL) {
                    if ((colisions_objet2(x * 40 + 20,y * 40 + 80 + 20)==0)&&((niveau[niv].map[y-1][x]) == 1)) {
                        perso2.en_main_as->pos_x = x * 40 + 20;
                        perso2.en_main_as->pos_y = y * 40 + 80 + 20;
                        perso2.en_main_as->en_main = 0;
                        perso2.en_main_as = NULL;
                    }
                    if ((colisions_objet2(x * 40 + 40 + 20,y * 40 + 120 + 20)==0)&&((niveau[niv].map[y][x+1]) == 1)) {
                        perso2.en_main_as->pos_x = x * 40 + 40 + 20;
                        perso2.en_main_as->pos_y = y * 40 + 120 + 20;
                        perso2.en_main_as->en_main = 0;
                        perso2.en_main_as = NULL;
                    }
                    if ((niveau[niv].map[y-1][x]) == 5) {
                        supprimer_assiette(perso2.en_main_as);
                        perso2.en_main_as=NULL;
                    }
                    if ((niveau[niv].map[y][x+1]) == 5) {
                        supprimer_assiette(perso2.en_main_as);
                        perso2.en_main_as=NULL;
                    }
                    if ((niveau[niv].map[y-1][x]) == 7) {
                        sortie_cusinie2();
                    }
                    if ((niveau[niv].map[y][x+1]) == 7) {
                        sortie_cusinie2();
                    }
                }else{
                    if ((colisions_objet2(x * 40 + 20,y * 40 + 80 + 20)==0)&&(((niveau[niv].map[y-1][x]) == 1) || (((niveau[niv].map[y-1][x]) == 2)&&((perso2.en_main_al->objet==2)||(perso2.en_main_al->objet==4))) || (((niveau[niv].map[y-1][x]) == 3)&&(perso2.en_main_al->objet==8)))) {
                        perso2.en_main_al->pos_x = x * 40 + 20;
                        perso2.en_main_al->pos_y = y * 40 + 80 + 20;
                        perso2.en_main_al->en_main = 0;
                        perso2.en_main_al = NULL;
                    }
                    if ((colisions_objet2(x * 40 + 40 + 20,y * 40 + 120 + 20)==0)&&(((niveau[niv].map[y][x+1]) == 1) || (((niveau[niv].map[y][x+1]) == 2)&&((perso2.en_main_al->objet==2)||(perso2.en_main_al->objet==4))) || (((niveau[niv].map[y][x+1]) == 3)&&(perso2.en_main_al->objet==8)))) {
                        perso2.en_main_al->pos_x = x * 40 + 40 + 20;
                        perso2.en_main_al->pos_y = y * 40 + 120 + 20;
                        perso2.en_main_al->en_main = 0;
                        perso2.en_main_al = NULL;
                    }
                    if ((niveau[niv].map[y-1][x]) == 5) {
                        supprimer_alliment(perso2.en_main_al);
                        perso2.en_main_al=NULL;
                    }
                    if ((niveau[niv].map[y][x+1]) == 5) {
                        supprimer_alliment(perso2.en_main_al);
                        perso2.en_main_al=NULL;
                    }
                }
                break;
            case SOUTHWEST:
                if(perso2.en_main_as!=NULL) {
                    if ((colisions_objet2(x * 40 + 20,y * 40 + 160 + 20)==0)&&((niveau[niv].map[y+1][x]) == 1)) {
                        perso2.en_main_as->pos_x = x * 40 + 20;
                        perso2.en_main_as->pos_y = y * 40 + 160 + 20;
                        perso2.en_main_as->en_main = 0;
                        perso2.en_main_as = NULL;
                    }
                    if ((colisions_objet2(x * 40 - 40 + 20,y * 40 + 120 + 20)==0)&&((niveau[niv].map[y][x-1]) == 1)) {
                        perso2.en_main_as->pos_x = x * 40 - 40 + 20;
                        perso2.en_main_as->pos_y = y * 40 + 120 + 20;
                        perso2.en_main_as->en_main = 0;
                        perso2.en_main_as = NULL;
                    }
                    if ((niveau[niv].map[y + 1][x]) == 5) {
                        supprimer_assiette(perso2.en_main_as);
                        perso2.en_main_as=NULL;
                    }
                    if ((niveau[niv].map[y][x - 1]) == 5) {
                        supprimer_assiette(perso2.en_main_as);
                        perso2.en_main_as=NULL;
                    }
                    if ((niveau[niv].map[y+1][x]) == 7) {
                        sortie_cusinie2();
                    }
                    if ((niveau[niv].map[y][x-1]) == 7) {
                        sortie_cusinie2();
                    }
                }else{
                    if ((colisions_objet2(x * 40 + 20,y * 40 + 160 + 20)==0)&&(((niveau[niv].map[y+1][x]) == 1) || (((niveau[niv].map[y+1][x]) == 2)&&((perso2.en_main_al->objet==2)||(perso2.en_main_al->objet==4))) || (((niveau[niv].map[y+1][x]) == 3)&&(perso2.en_main_al->objet==8)))){
                        perso2.en_main_al->pos_x = x * 40 + 20;
                        perso2.en_main_al->pos_y = y * 40 + 160 + 20;
                        perso2.en_main_al->en_main = 0;
                        perso2.en_main_al = NULL;
                    }
                    if ((colisions_objet2(x * 40 - 40 + 20,y * 40 + 120 + 20)==0)&&(((niveau[niv].map[y][x - 1]) == 1) || (((niveau[niv].map[y][x-1]) == 2)&&((perso2.en_main_al->objet==2)||(perso2.en_main_al->objet==4))) || (((niveau[niv].map[y][x-1]) == 3)&&(perso2.en_main_al->objet==8)))) {
                        perso2.en_main_al->pos_x = x * 40 - 40 + 20;
                        perso2.en_main_al->pos_y = y * 40 + 120 + 20;
                        perso2.en_main_al->en_main = 0;
                        perso2.en_main_al = NULL;
                    }
                    if ((niveau[niv].map[y + 1][x]) == 5) {
                        supprimer_alliment(perso2.en_main_al);
                        perso2.en_main_al=NULL;
                    }
                    if ((niveau[niv].map[y][x - 1]) == 5) {
                        supprimer_alliment(perso2.en_main_al);
                        perso2.en_main_al=NULL;
                    }
                }
                break;
            case SOUTHEAST:
                if(perso2.en_main_as!=NULL) {
                    if ((colisions_objet2(x * 40 + 20,y * 40 + 160 + 20)==0)&&((niveau[niv].map[y+1][x]) == 1)){
                        perso2.en_main_as->pos_x = x * 40 + 20;
                        perso2.en_main_as->pos_y = y * 40 + 160 + 20;
                        perso2.en_main_as->en_main = 0;
                        perso2.en_main_as = NULL;
                    }
                    if ((colisions_objet2(x * 40 + 40 + 20,y * 40 + 120 + 20)==0)&&((niveau[niv].map[y][x+1]) == 1)) {
                        perso2.en_main_as->pos_x = x * 40 + 40 + 20;
                        perso2.en_main_as->pos_y = y * 40 + 120 + 20;
                        perso2.en_main_as->en_main = 0;
                        perso2.en_main_as = NULL;
                    }
                    if ((niveau[niv].map[y+1][x]) == 5) {
                        supprimer_assiette(perso2.en_main_as);
                        perso2.en_main_as=NULL;
                    }
                    if ((niveau[niv].map[y][x+1]) == 5) {
                        supprimer_assiette(perso2.en_main_as);
                        perso2.en_main_as=NULL;
                    }
                    if ((niveau[niv].map[y+1][x]) == 7) {
                        sortie_cusinie2();
                    }
                    if ((niveau[niv].map[y][x+1]) == 7) {
                        sortie_cusinie2();
                    }
                }else{
                    if ((colisions_objet2(x * 40 + 20,y * 40 + 160 + 20)==0)&&(((niveau[niv].map[y+1][x]) == 1) || (((niveau[niv].map[y+1][x]) == 2)&&((perso2.en_main_al->objet==2)||(perso2.en_main_al->objet==4))) || (((niveau[niv].map[y+1][x]) == 3)&&(perso2.en_main_al->objet==8)))) {
                        perso2.en_main_al->pos_x = x * 40 + 20;
                        perso2.en_main_al->pos_y = y * 40 + 160 + 20;
                        perso2.en_main_al->en_main = 0;
                        perso2.en_main_al = NULL;
                    }
                    if ((colisions_objet2(x * 40 + 40 + 20,y * 40 + 120 + 20)==0)&&(((niveau[niv].map[y][x + 1]) == 1) || (((niveau[niv].map[y][x+1]) == 2)&&((perso2.en_main_al->objet==2)||(perso2.en_main_al->objet==4))) || (((niveau[niv].map[y][x+1]) == 3)&&(perso2.en_main_al->objet==8)))) {
                        perso2.en_main_al->pos_x = x * 40 + 40 + 20;
                        perso2.en_main_al->pos_y = y * 40 + 120 + 20;
                        perso2.en_main_al->en_main = 0;
                        perso2.en_main_al = NULL;
                    }
                    if ((niveau[niv].map[y+1][x]) == 5) {
                        supprimer_alliment(perso2.en_main_al);
                        perso2.en_main_al=NULL;
                    }
                    if ((niveau[niv].map[y][x+1]) == 5) {
                        supprimer_alliment(perso2.en_main_al);
                        perso2.en_main_al=NULL;
                    }
                }
                break;
        }
    }
}
