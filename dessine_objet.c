#include "Header.h"

void dessine_objet(){
    //REGARDE QUELLE NIVEAU ON EST
    int niv;
    for (int i = 0; i < 8; ++i) {
        if (niveau[i].actuel==1) niv = i;
    }

    Assiette *actuel_as = file_assiette.debut;
    while (actuel_as != NULL){
        if(actuel_as->nb_ingredients==0) draw_sprite(page,plat[0],actuel_as->pos_x,actuel_as->pos_y);
        else draw_sprite(page,plat[actuel_as->nb_ingredients+(16*niv)],actuel_as->pos_x,actuel_as->pos_y);
        actuel_as = actuel_as->next;
    }

    Alliment *actuel_al = file_alliment.debut;
    while (actuel_al != NULL){
        if(actuel_al->cuisson>=MIN_CUISSON_TIME){
            int x;
            if(actuel_al->objet==2) x=0;
            if(actuel_al->objet==4) x=1;
            if(actuel_al->objet==8) x=2;
            draw_sprite(page,objet_cuit_couper[x+(3*niv)],actuel_al->pos_x,actuel_al->pos_y);
        }else if(actuel_al->decoupe==200){
            int x;
            if(actuel_al->objet==2) x=0;
            if(actuel_al->objet==4) x=1;
            if(actuel_al->objet==8) x=2;
            draw_sprite(page,objet_cuit_couper[x+(3*niv)],actuel_al->pos_x,actuel_al->pos_y);
        }else{
            int x;
            if(actuel_al->objet==1) x=0;
            if(actuel_al->objet==2) x=1;
            if(actuel_al->objet==4) x=2;
            if(actuel_al->objet==8) x=3;
            draw_sprite(page,objet[x+(4*niv)],actuel_al->pos_x,actuel_al->pos_y);
        }
        if(niveau[niv].map[(actuel_al->pos_y/40)-3][actuel_al->pos_x/40]==2){
            rectfill(page,actuel_al->pos_x-12,actuel_al->pos_y-19,(actuel_al->pos_x-12)+(actuel_al->decoupe/8),actuel_al->pos_y-15, makecol(0,255,0));
        }

        if((niveau[niv].map[(actuel_al->pos_y/40)-3][actuel_al->pos_x/40]==3)&&(actuel_al->cuisson<=MIN_CUISSON_TIME)) rectfill(page,actuel_al->pos_x-15,actuel_al->pos_y-19,actuel_al->pos_x-15+(actuel_al->cuisson/33),actuel_al->pos_y-15, makecol((255*actuel_al->cuisson)/MIN_CUISSON_TIME,255-255*actuel_al->cuisson/MIN_CUISSON_TIME,0));
        else if ((niveau[niv].map[(actuel_al->pos_y/40)-3][actuel_al->pos_x/40]==3)&&(actuel_al->cuisson<=MAX_CUISSON_TIME)&&(actuel_al->cuisson>=MIN_CUISSON_TIME)){
            rectfill(page,actuel_al->pos_x-15,actuel_al->pos_y-19,actuel_al->pos_x+15,actuel_al->pos_y-15, makecol(255,0,0));
            draw_sprite(page,feu[3],actuel_al->pos_x+12,actuel_al->pos_y);
        }else if (actuel_al->cuisson>=MAX_CUISSON_TIME) {    //DESINE FEU
            draw_sprite(page,feu[nombre_aleatoire(0,2)],actuel_al->pos_x-12,actuel_al->pos_y-20);
        }
        actuel_al = actuel_al->next;
    }
}