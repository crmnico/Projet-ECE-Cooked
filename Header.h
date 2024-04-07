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

/*
typedef struct sequence
{
    char *nomSource; // nom du fichier image contenant la s�quence
    int nimg;        // nombre d'images dans la s�quence
    int tx,ty;       // largeur et hauteur des images de la s�quence
    int ncol;        // nbr images cotes � cotes horizontalement dans le fichier image
    BITMAP **img;    // tableau de pointeurs pour indiquer les images
} t_sequence;

/*
typedef struct {
    //ALLEGRO_DISPLAY *display;
   // bool running;
    Player *player1;
    Player *player2;
    Level *level;
} Game;

typedef struct {
    int score_player1;
    int score_player2;
    int score_team;
} Score;


typedef enum {
    INGREDIENT,
    ASSIETTE,
    // Ajouter d'autres types d'entités selon les besoins du jeu
} EntityType;

typedef enum {
  PlAN_DE_TRAVAIL,
  PLAQUE_DE_CUISSON,
  ESPACE_DE_COUPE,
  TAPIS_ROULANT,
  COFFRE_INGREDIENT,
  DISTRIBUTEUR_DASSIETTES,
  POUBELLE,
  SORTI_DE_CUISSINE,
  PARQUET,
  CARRELAGE,
};

*/

enum Plat_Menu {BURGER};
enum Ingredient_Menu { PAIN, STEAK, SALADE, TOMATE};
enum Direction { NORTH, SOUTH, EAST, WEST, NORTHWEST, NORTHEAST, SOUTHWEST, SOUTHEAST,STOP };
enum Type_case{VIDE, PLAN_DE_TRAVAIL, PLANCHE_A_DECOUPE, POELE, MARMITE, POUBELLE, DISTRIBUTEUR_D_ASSIETTES, SORTIE_DE_CUISINE,COFFRE_INGREDIENT};

// Structure de la commande
typedef struct Command {
    enum Plat_Menu plat;
    enum Ingredient_Menu ingredient[4];
    int nb_ingredient;
    long time;  // Temps limite pour servir la commande
    struct Command *next; // Pointeur vers la prochaine commande dans la liste
    struct Command *previous; // Pointeur vers la commande précédente dans la liste
} Command;

typedef struct {
    char *nomSource;  // nom du fichier image contenant la s�quence
    int nimg;        // nombre d'images dans la s�quence
    int tx,ty;       // largeur et hauteur des images de la s�quence
    char pseudo[50];
    int pos_x, pos_y;
    int dx, dy;
    int precx, precy;  // coordonn�es pr�c�dent le d�placement
    int frame_counter;
    enum Direction current_direction;
    //int score;
}Personnage;

// Structure de la file
typedef struct {
    Command *debut;
    Command *fin;
} File;

/*
typedef struct {
    char map[20][12];
    enum Type_case type_case;
}Niveau;
*/

/////////GLOBAL VARIABLE/////////
#define TAILLE_ECRAN_H 600
#define TAILLE_ECRAN_L 800


#define MAX_COMMAND_TIME 30 // Temps maximum pour servir une commande (en secondes)
#define MIN_INTERVAL 5 // Intervalle minimum entre les commandes (en secondes)
#define MAX_INTERVAL 10 // Intervalle maximum entre les commandes (en secondes)
#define MIN_FOODS 2 // Nombre minimum d'aliments dans une commande
#define MAX_FOODS 4 // Nombre maximum d'aliments dans une commande

//Niveau niveau1;
Personnage perso1;
Personnage perso2;
Command command;
File file;

char map_niv1[12][20];

clock_t debut_jeu, fin_jeu,debut_com;

BITMAP *video_planete[301];

BITMAP *page;
BITMAP *map;
BITMAP *direction_images[9][7]; // 9 directions, 7 images per direction
BITMAP *menu;
BITMAP *calque_menu[4];
BITMAP *options;
BITMAP *panneau[3];
BITMAP *panneau_plat[10];
BITMAP *etiquette[10];
BITMAP *etiquette_cuisson[10];
BITMAP *objet;

int main();
void initialisation();
void initialise_menu();
void initialisation_perso();
void initialisation_file(File *file);
void initialisation_niveau();

float mesurer_temps(clock_t debut, clock_t fin);
int nombre_aleatoire(int min, int max);

////IMAGES////
void chargement_images();
void chargement_perso1();
void chargement_commande();
void chargement_menu();

////MENU////
void menu_1();
void menu_options();

////JEU////
void jeu();

////PERSO////
void mouvement_perso1();
void mouvement_perso2();

void colisions_perso();
void colisions_map();
void update_direction();
void update_position();
void update_frame();
void dessine_perso();

////COMMANDE////
void ajout_commande(File *file);
void update_commande(File *file);
void update_tempsCommands(File *file);
void dessine_commande(File *file);
Command* retire_commande(File *file);
int estVide(File *file);