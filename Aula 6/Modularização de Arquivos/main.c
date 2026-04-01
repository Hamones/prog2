#include <stdio.h>
#include "mapa.h"

int main() {
    int h = obter_altura();
    int l = obter_largura();
    
    printf("Mapa de dimensões: %d x %d\n", h, l);
    printf("Total de células: %d\n", obter_total_celulas());
    
    return 0;
}
