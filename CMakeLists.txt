cmake_minimum_required(VERSION 3.26)
project(OverCook C)

set(CMAKE_C_STANDARD 99)

add_executable(OverCook main.c
        initialisation.c
        chargement_images.c
        chargement_perso1.c
        menu_1.c
        jeu.c
        update_direction.c
        update_position.c
        update_frame.c
        dessine_perso.c
        options.c
        dessine_commande.c
        chargement_commande.c
        chargement_menu.c
        update_commande.c
        mesurer_temps.c
        update_tempsCommands.c
        ajout_commande.c
        nombre_aleatoire.c
        estVide.c
        initialisation_file.c
        suprimer_commande.c
        mouvement_perso.c
        initialisation_niveau.c
        initialisation_perso.c
        initialise_menu.c
        initialise_menu.c
        colisions_perso.c
        colisions_map.c)

target_link_libraries(OverCook -lmingw32 -lalleg44)