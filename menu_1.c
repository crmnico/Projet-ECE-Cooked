#include "Header.h"

void menu_1(){
    int x=0,i=0;

   //initialise_menu();

    while (!key[KEY_ENTER]){
        clear_bitmap(page);

        x+=1;
        if(x>=TAILLE_ECRAN_L)
        {
            x=0;
        }
        blit(menu,page,0,0,x/2,0,TAILLE_ECRAN_L,TAILLE_ECRAN_H);
        blit(menu,page,0,0,(x/2)-TAILLE_ECRAN_L,0,TAILLE_ECRAN_L,TAILLE_ECRAN_H);


        /*
        blit(video_planete[i],page,0,0,0,0,TAILLE_ECRAN_L,TAILLE_ECRAN_H);
        x++;
        if(x==10) i++,x=0;
        if(i==50) i=0;
         */
        if((mouse_x>=240)&&(mouse_x<=570)&&(mouse_y>=260)&&(mouse_y<=330))
        {
            draw_sprite(page,calque_menu[1],0,0);
            if(mouse_b){
                jeu();
            }

        }else if((mouse_x>=240)&&(mouse_x<=570)&&(mouse_y>=360)&&(mouse_y<=430))
        {
            draw_sprite(page,calque_menu[2],0,0);
            if(mouse_b){
                menu_options();
            }

        }else if((mouse_x>=240)&&(mouse_x<=570)&&(mouse_y>=460)&&(mouse_y<=540))
        {
            draw_sprite(page,calque_menu[3],0,0);
            if(mouse_b){
                allegro_exit();
            }

        }else{
            draw_sprite(page,calque_menu[0],0,0);
        }
        show_mouse(page);
        blit(page,screen,0,0,0,0,TAILLE_ECRAN_L,TAILLE_ECRAN_H);
        rest(10);
    }
}