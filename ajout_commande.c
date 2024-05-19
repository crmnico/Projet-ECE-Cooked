#include "Header.h"

// Ajoute une commande à la fin de la file
void ajout_commande() {
    Command *commande = malloc(sizeof(Command));

    commande->nb_ingredient = nombre_aleatoire(MIN_FOODS,MAX_FOODS);

    if(commande->nb_ingredient==2)commande->ingredient=9;
    else if(commande->nb_ingredient==3)commande->ingredient=11;
    if(commande->nb_ingredient==4)commande->ingredient=15;
    commande->time = clock();


    commande->next = NULL;

    // Si la file est vide, la nouvelle commande est à la fois le premier et le dernier élément
    if (file_commande.debut == NULL) {
        file_commande.debut = commande;
        file_commande.fin = commande;
        commande->previous = NULL;
    } else {
        // Sinon, la nouvelle commande est ajoutée à la fin
        commande->previous = file_commande.fin;
        file_commande.fin->next = commande;
        file_commande.fin = commande;
    }
}