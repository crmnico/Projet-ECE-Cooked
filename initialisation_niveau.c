#include "Header.h"
void initialisation_niveau(){
    char niv1[12][20]={
            "11313111 77 11611511",
            "1      1    1      1",
            "1      1           1",
            "1      1           1",
            "1      1           1",
            "1      1    1      1",
            "1      1    1      1",
            "1      1    1      1",
            "1      1    1      1",
            "1           1      1",
            "1           1     1",
            "11222100000011818181",
            };
    for (int i = 0; i < 12; ++i) {
        strncpy(niv1[i],map_niv1[i],20);
    }

}
