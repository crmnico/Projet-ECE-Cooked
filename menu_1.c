#include "Header.h"

void menu_1(){
    while (!key[KEY_ESC]){
        clear_bitmap(page);

        blit(menu,page,0,0,0,0,TAILLE_ECRAN_L,TAILLE_ECRAN_H);
        if((mouse_x>=560)&&(mouse_x<=760)&&(mouse_y>=200)&&(mouse_y<=240))
        {
            draw_sprite(page,calque_menu[1],0,0);
            if(mouse_b){
                choix_pseudo();
            }

        }else if((mouse_x>=560)&&(mouse_x<=760)&&(mouse_y>=280)&&(mouse_y<=320))
        {
            draw_sprite(page,calque_menu[2],0,0);
            if(mouse_b){
                allegro_exit();
            }

        }else if((mouse_x>=560)&&(mouse_x<=760)&&(mouse_y>=360)&&(mouse_y<=400))
        {
            draw_sprite(page,calque_menu[3],0,0);
            if(mouse_b){
                menu_options();
            }

        }else if((mouse_x>=560)&&(mouse_x<=760)&&(mouse_y>=440)&&(mouse_y<=480))
        {
            draw_sprite(page,calque_menu[4],0,0);
            if(mouse_b){
                allegro_exit();
            }

        }else{
            draw_sprite(page,calque_menu[0],0,0);
        }
        textout_ex(page, font, "Jouer", 635, 215, makecol(235,235,235), -1);
        textout_ex(page, font, "Sauvegarde", 620, 295, makecol(235,235,235), -1);
        textout_ex(page, font, "Options", 630, 375, makecol(235,235,235), -1);
        textout_ex(page, font, "Quitter", 630, 455, makecol(235,235,235), -1);
        show_mouse(page);
        blit(page,screen,0,0,0,0,TAILLE_ECRAN_L,TAILLE_ECRAN_H);
        rest(10);
    }
}