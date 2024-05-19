#include "Header.h"

void dessine_commande(){
    //REGARDE QUELLE NIVEAU ON EST
    int niv,i=5;
    for (int j = 0; j < 8; ++j) {
        if (niveau[j].actuel==1) niv = j;
    }
    Command *actuel = file_commande.debut;

    while (actuel != NULL){
        switch (actuel->nb_ingredient) {
            case 2:
                draw_sprite(page, panneau[0],i, 0);
                draw_sprite(page,plat[15+(16*niv)],i+25,14);

                draw_sprite(page, etiquette, i+5, 65);
                draw_sprite(page, etiquette_cuisson, i+53, 65);

                draw_sprite(page, objet[(4*niv)], i+15, 73);
                draw_sprite(page, objet[3+(4*niv)], i+66, 73);

                rectfill(page, i+1, 0, i+104-(mesurer_temps(actuel->time,clock())*103)/MAX_COMMAND_TIME,  16, makecol(255 * mesurer_temps(actuel->time,clock()) / MAX_COMMAND_TIME, 255 - 255 * mesurer_temps(actuel->time,clock()) / MAX_COMMAND_TIME, 0));
                i+=110;
                break;
            case 3:
                draw_sprite(page, panneau[1], i, 0);
                draw_sprite(page,plat[15+(16*niv)],i+50,14);

                draw_sprite(page, etiquette, i+5, 65);
                draw_sprite(page, etiquette, i+53, 65);
                draw_sprite(page, etiquette_cuisson, i+101, 65);

                draw_sprite(page, objet[(4*niv)], i+15, 73);
                draw_sprite(page, objet[1+(4*niv)], i+66, 73);
                draw_sprite(page, objet[3+(4*niv)], i+114, 73);

                rectfill(page, i+1, 0, i+152-(mesurer_temps(actuel->time,clock())*151)/MAX_COMMAND_TIME,  16, makecol(255 * mesurer_temps(actuel->time,clock()) / MAX_COMMAND_TIME, 255 - 255 * mesurer_temps(actuel->time,clock()) / MAX_COMMAND_TIME, 0));
                i+=157;
                break;
            case 4:
                draw_sprite(page, panneau[2], i, 0);
                draw_sprite(page,plat[15+(16*niv)],i+74,14);


                draw_sprite(page, etiquette, i+5, 65);
                draw_sprite(page, etiquette, i+53, 65);
                draw_sprite(page, etiquette, i+101, 65);
                draw_sprite(page, etiquette_cuisson,i+149, 65);

                draw_sprite(page, objet[(4*niv)], i+15, 73);
                draw_sprite(page, objet[1+(4*niv)], i+66, 73);
                draw_sprite(page, objet[2+(4*niv)], i+114, 73);
                draw_sprite(page, objet[3+(4*niv)], i+162, 73);

                rectfill(page, i+1, 0, i+201-(mesurer_temps(actuel->time,clock())*200)/MAX_COMMAND_TIME,  16, makecol(255 * mesurer_temps(actuel->time,clock()) / MAX_COMMAND_TIME, 255 - 255 * mesurer_temps(actuel->time,clock()) / MAX_COMMAND_TIME, 0));
                i+=206;
                break;
        }
        actuel = actuel->next;
    }
}




