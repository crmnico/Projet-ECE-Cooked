#include "Header.h"

void initialisation(){
    if (allegro_init() != 0) {
        allegro_message("Failed to initialize Allegro!");
    }
    install_keyboard();
    install_mouse();
    install_timer();
    set_color_depth(desktop_color_depth());
    if (set_gfx_mode(GFX_AUTODETECT_WINDOWED,TAILLE_ECRAN_L,TAILLE_ECRAN_H,0,0)!=0)
    {
        allegro_message("Failed to set graphics mode!");
        allegro_exit();
    }


}