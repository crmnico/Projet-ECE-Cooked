#include "Header.h"

// Vérifie si la file est vide
int estVide(File *file) {
    return file->debut == NULL;
}