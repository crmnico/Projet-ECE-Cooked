#include "Header.h"

void jeu(){
    clear_bitmap(page);

    debut_jeu = clock();
    initialisation_perso();
    initialisation_file(&file);
    initialisation_niveau();

    ajout_commande(&file);

    while (!key[KEY_ESC]) {

        clear_bitmap(page);

        blit(map, page, 0, 0, 0, 120, TAILLE_ECRAN_L, TAILLE_ECRAN_H);

        ////TOUCHES////
        mouvement_perso1();
        mouvement_perso2();

        ////PERSONNAGE////
        update_position();
        update_direction();
        update_frame();
        dessine_perso();

        ////COMMANDE/////
        update_commande(&file);
        update_tempsCommands(&file);
        dessine_commande(&file);
        draw_sprite(page,objet,290,252);
        blit(page, screen, 0, 0, 0, 0, TAILLE_ECRAN_L, TAILLE_ECRAN_H);

        rest(50);
    }
}

/*

#include <allegro.h>



// donn�es personnelles de chaque acteur qui se d�place
typedef struct acteur
{
    int x, y;          // coordonn�e (du coin sup. gauche)
    int precx, precy;  // coordonn�es pr�c�dent le d�placement
    int dx, dy;        // vecteur deplacement
    int tx,ty;         // tailles : horizontal/vertical
    int couleur;       // couleur de l'�l�ment graphique
} t_acteur;



int main()
{

    // Un acteur (� cr�er)
    t_acteur *acteur;

    // BITMAP servant de buffer d'affichage (double buffer)
    BITMAP *page;

    // Image de fond, seulement pour visualiser
    BITMAP *decor;

    // couleur des murs ( ! ne PAS utiliser makecol AVANT d'�tre en mode graphique ! )
    int couleurMur;


    // Lancer allegro et le mode graphique
    allegro_init();
    install_keyboard();
    install_mouse();

    set_color_depth(desktop_color_depth());
    if (set_gfx_mode(GFX_AUTODETECT_WINDOWED,800,600,0,0)!=0)
    {
        allegro_message("prb gfx mode");
        allegro_exit();
        exit(EXIT_FAILURE);
    }

    // Montrer la souris � l'�cran
    show_mouse(screen);

    // CREATION DU BUFFER D'AFFICHAGE � la taille de l'�cran
    page=create_bitmap(SCREEN_W,SCREEN_H);
    clear_bitmap(page);

    // charger image de fond
    decor=load_bitmap("images/fond_murs.bmp",NULL);
    if (!decor)
    {
        allegro_message("pas pu trouver images/fond_murs.bmp");
        exit(EXIT_FAILURE);
    }

    // on sait que les murs seront blancs...
    couleurMur = makecol(255,255,255);

    // Allocation et initialisation des param�tres de l'acteur :
    acteur = (t_acteur *)malloc(1*sizeof(t_acteur));
    acteur->tx = 99;    acteur->ty = 38;
    acteur->x = 300;     acteur->y = 260;
    acteur->dx = 0;      acteur->dy = 0;
    acteur->couleur = makecol(50,200,50);

    // Boucle de jeu
    while (!key[KEY_ESC])
    {
        // effacer buffer en appliquant d�cor  (pas de clear_bitmap)
        blit(decor,page,0,0,0,0,SCREEN_W,SCREEN_H);

        // GESTION INTERFACE si clique le vaisseau part vers la souris
        if (mouse_b&1){
            // vecteur d�placement = vecteur centre_vaisseau->souris
            acteur->dx = mouse_x - (acteur->x + acteur->tx/2);
            acteur->dy = mouse_y - (acteur->y + acteur->ty/2);
            // mais il faut limiter la vitesse : borner les valeurs obtenues
            if (acteur->dx>5 ) acteur->dx= 5;
            if (acteur->dx<-5) acteur->dx=-5;
            if (acteur->dy>5 ) acteur->dy= 5;
            if (acteur->dy<-5) acteur->dy=-5;
        }

        // ENREGISTRER POSITION ACTUELLE
        acteur->precx = acteur->x;
        acteur->precy = acteur->y;

        // DETERMINER NOUVELLE POSITION
        acteur->x += acteur->dx;  // �quivalent � acteur->x = acteur->x + acteur->dx;
        acteur->y += acteur->dy;  // �quivalent � acteur->y = acteur->y + acteur->dy;

        // SI COLLISION AVEC LE DECOR ALORS ON REVIENT SUR LA POSITION PRECEDENT LE DEPLACEMENT
        //  ici on regard directement sur le buffer (page) mais on pourrait
        //  regarder plut�t directement sur le decor...
        if (       getpixel(page, acteur->x, acteur->y) == couleurMur
                   ||  getpixel(page, acteur->x+acteur->tx, acteur->y) == couleurMur
                   ||  getpixel(page, acteur->x, acteur->y+acteur->ty) == couleurMur
                   ||  getpixel(page, acteur->x+acteur->tx, acteur->y+acteur->ty) == couleurMur )
        {
            acteur->x = acteur->precx;
            acteur->y = acteur->precy;
        }

        // AFFICHAGE NOUVELLEs POSITIONs SUR LE BUFFER
        rectfill(page, acteur->x, acteur->y, acteur->x+acteur->tx, acteur->y+acteur->ty, acteur->couleur);

        // AFFICHAGE DU BUFFER MIS A JOUR A L'ECRAN
        blit(page,screen,0,0,0,0,SCREEN_W,SCREEN_H);

        // ON FAIT UNE PETITE PAUSE
        rest(10);
    }

    return 0;
}
END_OF_MAIN();
*/