#ifndef OVERCOOK_HEADER_H
#define OVERCOOK_HEADER_H

#endif //OVERCOOK_HEADER_H

#include <allegro.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <math.h>


////COMMANDE////
enum Plat_Menu {BURGER_C};
enum Ingredient_Menu { PAIN_C, STEAK_C, SALADE_C, TOMATE_C};

enum Direction { NORTH, SOUTH, EAST, WEST, NORTHWEST, NORTHEAST, SOUTHWEST, SOUTHEAST,STOP };
enum Type_case{VIDE, PLAN_DE_TRAVAIL, PLANCHE_A_DECOUPE, POELE, MARMITE, POUBELLE, DISTRIBUTEUR_D_ASSIETTES, SORTIE_DE_CUISINE,COFFRE_INGREDIENT};
enum Objet{RIEN,TOMATE,TOMATE_COUPE,SALADE_COUPE,PAIN,STEAK,STEAK_CUIT};

// Structure de la commande
typedef struct Command {
    int nb_ingredient;
    int ingredient;
    long time;  // Temps limite pour servir la commande
    struct Command *next; // Pointeur vers la prochaine commande dans la liste
    struct Command *previous; // Pointeur vers la commande précédente dans la liste
} Command;

typedef struct {
    int num_skin;
    char pseudo[50];
    int pos_x, pos_y;
    int dx, dy;
    int precx, precy , precdx, precdy;  // coordonn�es pr�c�dent le d�placement
    int frame_counter;
    enum Direction current_direction;
    int action;
    struct Assiette *en_main_as;
    struct Alliment *en_main_al;
    int score;
}Personnage;

// Structure des assiettes
typedef struct Assiette{
    int pos_x,pos_y;
    int en_main;
    int nb_ingredients;
    struct Assiette *next;
    struct Assiette *previous;
}Assiette;

// Structure des alliments
typedef struct Alliment{
    int pos_x,pos_y;
    int en_main;
    int decoupe,cuisson;
    int objet;
    struct Alliment *next;
    struct Alliment *previous;
}Alliment;

// Structure des niveaux
typedef struct {
    int score_team;
    int actuel;
    int map[12][20];
    BITMAP *map_graphique;
    int type_x[4],type_y[4];
} Niveau;

// Structure de la file des commandes
typedef struct {
    Command *debut;
    Command *fin;
} File_commade;

// Structure de la file des assiettes
typedef struct {
    Assiette *debut;
    Assiette *fin;
} File_assiette;

// Structure de la file des aliments
typedef struct {
    Alliment *debut;
    Alliment *fin;
} File_alliment;



/////////GLOBAL VARIABLE/////////
#define TAILLE_ECRAN_H 600
#define TAILLE_ECRAN_L 800


#define MAX_COMMAND_TIME 100 // Temps maximum pour servir une commande (en secondes)
#define MAX_CUISSON_TIME 1500   //Temps au bout du quel l'aliment crame
#define MIN_CUISSON_TIME 1000   //Temps de cuisson des aliments
#define MIN_INTERVAL 5 // Intervalle minimum entre les commandes (en secondes)
#define MAX_INTERVAL 10 // Intervalle maximum entre les commandes (en secondes)
#define MIN_FOODS 2 // Nombre minimum d'aliments dans une commande
#define MAX_FOODS 4 // Nombre maximum d'aliments dans une commande
#define VITESSE_PERSO 5

Personnage perso1;
Personnage perso2;
Niveau niveau[8];
File_commade file_commande;
File_assiette file_assiette;
File_alliment file_alliment;

clock_t debut_jeu, fin_jeu,debut_com;

BITMAP *page;
BITMAP *direction_images[9][4][5]; // 9 directions, 7 images per direction
BITMAP *menu;
BITMAP *menu_pseudo;
BITMAP *choix_skins;
BITMAP *calque_menu[5];
BITMAP *calque_carte[10];
BITMAP *options;
BITMAP *panneau[3];
BITMAP *etiquette;
BITMAP *etiquette_cuisson;
BITMAP *objet[50];
BITMAP *objet_cuit_couper[24];
BITMAP *plat[128];
BITMAP *feu[4];

int main();
void initialisation();
void initialisation_perso();
void initialisation_file();
void initialisation_niveau();

float mesurer_temps(clock_t debut, clock_t fin);
int nombre_aleatoire(int min, int max);

////IMAGES////
void chargement_images();
void chargement_perso1();
void chargement_objets();
void chargement_commande();
void chargement_menu();
void chargement_map();

////MENU////
void menu_1();
void menu_options();
void choix_pseudo();
void choix_skin();
void choix_du_niveaux();
////JEU////
void jeu();

////PERSO////
void mouvement_perso1();
void mouvement_perso2();
void action_perso1();
void action_perso2();

int colisions_perso();
void colisions_map();
void update_direction();
void update_position();
void update_frame();
void dessine_perso();

////OBJETS////
void ajout_assiettes();
void ajout_aliments(int y,int x);
void prendre_objet();
void prendre_nouv_objet();
int colisions_objet1(int x,int y);
int colisions_objet2(int x,int y);
void update_position_objet();
void update_actions();
void update_decoupe();
void update_tempsCuisson();
void sortie_cusinie1();
void sortie_cusinie2();
void dessine_objet();
void supprimer_assiette(Assiette *a_detruire);
void supprimer_alliment(Alliment *a_detruire);

////COMMANDE////
void ajout_commande();
void update_commande();
void update_tempsCommands();
void supprimer_commande(Command *actuel);
void dessine_commande();