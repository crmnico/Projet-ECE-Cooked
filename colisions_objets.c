#include "Header.h"

int colisions_objet1(int x,int y){
    Assiette *actuel_as = file_assiette.debut;
    while(actuel_as!=NULL){
        if((perso1.en_main_al!=NULL)&&((actuel_as->pos_x==x)&&(actuel_as->pos_y==y)))
        {      //regarde si on peut mettre l'aliment dans l'assiette
            if(((perso1.en_main_al->objet==1)&&(actuel_as->nb_ingredients!=1)&&(actuel_as->nb_ingredients!=3)&&(actuel_as->nb_ingredients!=5)&&(actuel_as->nb_ingredients!=7)&&(actuel_as->nb_ingredients!=9)&&(actuel_as->nb_ingredients!=11)&&(actuel_as->nb_ingredients!=13)&&(actuel_as->nb_ingredients!=15))||((perso1.en_main_al->objet==2)&&(perso1.en_main_al->decoupe>=200)&&(actuel_as->nb_ingredients!=2)&&(actuel_as->nb_ingredients!=3)&&(actuel_as->nb_ingredients!=6)&&(actuel_as->nb_ingredients!=7)&&(actuel_as->nb_ingredients!=10)&&(actuel_as->nb_ingredients!=11)&&(actuel_as->nb_ingredients!=14)&&(actuel_as->nb_ingredients!=15))||((perso1.en_main_al->objet==4)&&(perso1.en_main_al->decoupe>=200)&&(actuel_as->nb_ingredients!=4)&&(actuel_as->nb_ingredients!=5)&&(actuel_as->nb_ingredients!=6)&&(actuel_as->nb_ingredients!=7)&&(actuel_as->nb_ingredients!=12)&&(actuel_as->nb_ingredients!=13)&&(actuel_as->nb_ingredients!=14)&&(actuel_as->nb_ingredients!=15))||((perso1.en_main_al->objet==8)&&(perso1.en_main_al->cuisson>=MIN_CUISSON_TIME)&&(perso1.en_main_al->cuisson<=MAX_CUISSON_TIME)&&(actuel_as->nb_ingredients!=8)&&(actuel_as->nb_ingredients!=9)&&(actuel_as->nb_ingredients!=10)&&(actuel_as->nb_ingredients!=11)&&(actuel_as->nb_ingredients!=12)&&(actuel_as->nb_ingredients!=13)&&(actuel_as->nb_ingredients!=14)&&(actuel_as->nb_ingredients!=15))){
                actuel_as->nb_ingredients += perso1.en_main_al->objet;
                supprimer_alliment(perso1.en_main_al);
                perso1.en_main_al=NULL;
            }
            return 1;
        }
        if((perso1.en_main_as!=NULL)&&((actuel_as->pos_x==x)&&(actuel_as->pos_y==y))) return 1;
        actuel_as = actuel_as->next;
    }
    Alliment *actuel_al = file_alliment.debut;
    while(actuel_al!=NULL){
        if((perso1.en_main_al!=NULL)&&((actuel_al->pos_x==x)&&(actuel_al->pos_y==y))) return 1;
        if((perso1.en_main_as!=NULL)&&((actuel_al->pos_x==x)&&(actuel_al->pos_y==y))) return 1;
        actuel_al = actuel_al->next;
    }
    return 0;
}

int colisions_objet2(int x,int y){
    Assiette *actuel_as = file_assiette.debut;
    while(actuel_as!=NULL){
        if((perso2.en_main_al!=NULL)&&((actuel_as->pos_x==x)&&(actuel_as->pos_y==y)))
        {      //regarde si on peut mettre l'aliment dans l'assiette
            if(((perso2.en_main_al->objet==1)&&(actuel_as->nb_ingredients!=1)&&(actuel_as->nb_ingredients!=3)&&(actuel_as->nb_ingredients!=5)&&(actuel_as->nb_ingredients!=7)&&(actuel_as->nb_ingredients!=9)&&(actuel_as->nb_ingredients!=11)&&(actuel_as->nb_ingredients!=13)&&(actuel_as->nb_ingredients!=15))||((perso2.en_main_al->objet==2)&&(perso2.en_main_al->decoupe>=200)&&(actuel_as->nb_ingredients!=2)&&(actuel_as->nb_ingredients!=3)&&(actuel_as->nb_ingredients!=6)&&(actuel_as->nb_ingredients!=7)&&(actuel_as->nb_ingredients!=10)&&(actuel_as->nb_ingredients!=11)&&(actuel_as->nb_ingredients!=14)&&(actuel_as->nb_ingredients!=15))||((perso2.en_main_al->objet==4)&&(perso2.en_main_al->decoupe>=200)&&(actuel_as->nb_ingredients!=4)&&(actuel_as->nb_ingredients!=5)&&(actuel_as->nb_ingredients!=6)&&(actuel_as->nb_ingredients!=7)&&(actuel_as->nb_ingredients!=12)&&(actuel_as->nb_ingredients!=13)&&(actuel_as->nb_ingredients!=14)&&(actuel_as->nb_ingredients!=15))||((perso2.en_main_al->objet==8)&&(perso2.en_main_al->cuisson>=MIN_CUISSON_TIME)&&(perso2.en_main_al->cuisson<=MAX_CUISSON_TIME)&&(actuel_as->nb_ingredients!=8)&&(actuel_as->nb_ingredients!=9)&&(actuel_as->nb_ingredients!=10)&&(actuel_as->nb_ingredients!=11)&&(actuel_as->nb_ingredients!=12)&&(actuel_as->nb_ingredients!=13)&&(actuel_as->nb_ingredients!=14)&&(actuel_as->nb_ingredients!=15))){
                actuel_as->nb_ingredients += perso2.en_main_al->objet;
                supprimer_alliment(perso2.en_main_al);
                perso2.en_main_al=NULL;
            }
            return 1;
        }
        if((perso2.en_main_as!=NULL)&&((actuel_as->pos_x==x)&&(actuel_as->pos_y==y))) return 1;
        actuel_as = actuel_as->next;
    }
    Alliment *actuel_al = file_alliment.debut;
    while(actuel_al!=NULL){
        if((perso2.en_main_al!=NULL)&&((actuel_al->pos_x==x)&&(actuel_al->pos_y==y))) return 1;
        if((perso2.en_main_as!=NULL)&&((actuel_al->pos_x==x)&&(actuel_al->pos_y==y))) return 1;
        actuel_al = actuel_al->next;
    }
    return 0;
}