#include "Header.h"

void sortie_cusinie1(){
    //REGARDE QUELLE NIVEAU ON EST
    int niv;
    for (int i = 0; i < 8; ++i) {
        if (niveau[i].actuel==1) niv = i;
    }

    Command *actuel = file_commande.debut;
    while (actuel!=NULL){
        if((perso1.en_main_as->nb_ingredients==actuel->ingredient)&&(perso1.en_main_as!=NULL))
        {
            //SCORES TEAM + SCORES JOUEUR
            supprimer_commande(actuel);
            supprimer_assiette(perso1.en_main_as);
            perso1.score += 10;
            niveau[niv].score_team+=10;
            perso1.en_main_as=NULL;
            return;
        }
        actuel = actuel->next;
    }
}

void sortie_cusinie2(){
    //REGARDE QUELLE NIVEAU ON EST
    int niv;
    for (int i = 0; i < 8; ++i) {
        if (niveau[i].actuel==1) niv = i;
    }

    Command *actuel = file_commande.debut;
    while (actuel!=NULL){
        if((perso2.en_main_as->nb_ingredients==actuel->ingredient)&&(perso2.en_main_as!=NULL))
        {
            //SCORES TEAM + SCORES JOUEUR
            supprimer_commande(actuel);
            supprimer_assiette(perso2.en_main_as);
            perso2.score += 10;
            niveau[niv].score_team+=10;
            perso2.en_main_as=NULL;
        }
        actuel = actuel->next;
    }
}