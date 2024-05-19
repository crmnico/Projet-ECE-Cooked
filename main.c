#include "Header.h"

int main() {
    srand(time(NULL)); // Initialisation du générateur de nombres aléatoires
    initialisation();
    chargement_images();
    menu_1();

    // PENSEEE A LIBERER LA MEMOIRE !!!
    allegro_exit();
    return 0;
}END_OF_MAIN();