#include "Header.h"

// Détruire les commandes dont le temps dépasse 30 secondes
void update_tempsCommands() {
    Command *current = file_commande.debut;

    while (current != NULL) {
        supprimer_commande(current);
        current = current->next;
    }
}
