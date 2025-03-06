#include <stdio.h>

int main(){

    int horas1, horas2, min1, min2, seg1, seg2, horasf, minf, segf;
    printf("ingrese su primer tiempo en horas, minutos y segundos:\n");
    scanf("%d \n%d \n%d", &horas1, &min1, &seg1);
    printf("ingrese su segundo tiempo en horas, minutos y segundos:\n");
    scanf("%d \n%d \n%d", &horas2, &min2, &seg2);
    segf = seg1 + seg2;
    minf = min1 + min2;
    horasf = horas1 + horas2;
    if(segf > 59){
        segf = segf - 60;
        minf = minf + 1;
    }
    if(minf > 59){
        minf = minf - 60;
        horasf = horasf + 1;
    }

    printf("el tiempo final es de %d horas, %d minutos y %d segundos", horasf, minf, segf);

    return 0;
}