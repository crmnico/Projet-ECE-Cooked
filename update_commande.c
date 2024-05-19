#include "Header.h"

void update_commande(){
    int temps_com = mesurer_temps(debut_com,clock());
    if(temps_com > nombre_aleatoire(MIN_INTERVAL,MAX_INTERVAL))
    {
        ajout_commande();
        debut_com = clock();
    }
}