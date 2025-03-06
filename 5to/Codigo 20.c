#include <stdio.h>

int main(){

    int seg, horas, min;
    printf("ingrese su tiempo en segundos, siempre y cuando su tiempo sea menor a 1 dia\n")
    scanf("%d", &seg);
    horas = seg/3600;
    min = (seg%3600)/60;
    seg = (seg%3600)&60;
    printf("tu tiempo es de %d horas, %d minutos y %d segundos", horas, min, seg);

    return 0;

}