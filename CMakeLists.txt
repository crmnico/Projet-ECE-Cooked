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
        update_position_objet.c
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
        initialisation_file.c
        suprimer_commande.c
        mouvement_perso.c
        initialisation_niveau.c
        initialisation_perso.c
        colisions_perso.c
        colisions_map.c
        chargement_objets.c
        choix_du_niveau.c
        dessine_objet.c
        ajout_assiettes.c
        ajout_aliments.c
        update_assiettes.c
        update_actions.c
        supprimer_objet.c
        update_decoupe.c
        supprimer_assiette.c
        update_tempsCuisson.c
        colisions_objets.c
        prendre_objet.c
        chargement_map.c
        sortie_cuisine.c
        choix_skin.c
        choix_pseudo.c
)

target_link_libraries(OverCook -lmingw32 -lalleg44)