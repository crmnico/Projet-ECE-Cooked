#include "Header.h"

// Ajoute une commande à la fin de la file
void ajout_commande(File *file) {
    Command *commande = malloc(sizeof(Command));
    commande->plat = 0;
    commande->nb_ingredient = nombre_aleatoire(MIN_FOODS,MAX_FOODS);
    for (int i = 0; i < commande->nb_ingredient; ++i) {
        commande->ingredient[i]=i;
    }
    commande->time = clock();


    commande->next = NULL;

    // Si la file est vide, la nouvelle commande est à la fois le premier et le dernier élément
    if (estVide(file)) {
        file->debut = commande;
        file->fin = commande;
        commande->previous = NULL;
    } else {
        // Sinon, la nouvelle commande est ajoutée à la fin
        commande->previous = file->fin;
        file->fin->next = commande;
        file->fin = commande;
    }
}


/*
// Ajouter une commande à la file d'attente
void ajout_commande(long time) {
    Command *newCommand = (Command *)malloc(sizeof(Command));
    if (newCommand == NULL) {
        allegro_message("Failed ad command Allegro!");
    }
    newCommand->plat=0;
    newCommand->nb_ingredient = nombre_aleatoire(MIN_FOODS,MAX_FOODS);
    for (int i = 0; i < newCommand->nb_ingredient; ++i) {
        newCommand->ingredient[i]=i;
    }
    newCommand->time = time;
    newCommand->next = NULL;

    if (estVide(commandQueue)) {
        commandQueue.front = newCommand;
    } else {
        commandQueue.rear->next = newCommand;
    }
    commandQueue.rear = newCommand;
}
 */