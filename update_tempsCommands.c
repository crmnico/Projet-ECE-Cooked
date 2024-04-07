#include "Header.h"

// Détruire les commandes dont le temps dépasse 30 secondes
void update_tempsCommands(File *file) {
    Command *current = file->debut;
    Command *prev = NULL;

    while (current != NULL) {
        if (mesurer_temps(current->time,clock()) > MAX_COMMAND_TIME) {
            Command *temp = current;
            if (prev != NULL) {
                prev->next = current->next;
            } else {
                file->debut = current->next;
            }
            current = current->next;
            free(temp);
        } else {
            prev = current;
            current = current->next;
        }
    }
}
