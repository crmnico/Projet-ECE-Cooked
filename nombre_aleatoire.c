#include "Header.h"

// Générer un nombre aléatoire entre min et max
int nombre_aleatoire(int min, int max) {
    return rand() % (max - min + 1) + min;
}