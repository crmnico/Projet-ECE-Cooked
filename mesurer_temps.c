#include "Header.h"

float mesurer_temps(clock_t debut, clock_t fin) {
    return ((float) (fin - debut)) / CLOCKS_PER_SEC;
}