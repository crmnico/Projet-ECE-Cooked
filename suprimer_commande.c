#include "Header.h"


// Retire la première commande de la file et retourne un pointeur vers cette commande
Command* retire_commande(File *file) {
    // Vérifie si la file est vide
    if (estVide(file)) {
        fprintf(stderr, "La file est vide.\n");
        exit(EXIT_FAILURE);
    }

    // Récupère un pointeur vers la première commande
    Command *commande = file->debut;

    // Déplace le pointeur vers la commande suivante
    file->debut = file->debut->next;

    // Si la file est maintenant vide, met à jour le pointeur vers le dernier élément
    if (file->debut == NULL) {
        file->fin = NULL;
    } else {
        // Sinon, retire la référence à la commande précédente pour l'ancienne première commande
        file->debut->previous = NULL;
    }

    return commande;
}

/*

// Retirer une commande de la file d'attente
Command retire_commande() {
    if (estVide(commandQueue)) {
        allegro_message("Failed delete command Allegro!");
    }
    Command removedCommand = *(commandQueue.front);
    Command *temp = commandQueue.front;
    commandQueue.front = commandQueue.front->next;
    free(temp);
    return removedCommand;
}

*/


