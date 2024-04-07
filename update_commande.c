#include "Header.h"

void update_commande(File *file){
    int temps_com = mesurer_temps(debut_com,clock());
    if(temps_com > nombre_aleatoire(MIN_INTERVAL,MAX_INTERVAL))
    {
        ajout_commande(file);
        debut_com = clock();
    }
}