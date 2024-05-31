#include <stdio.h>

int main(){

    float horas, ambiguedad, neto, sueldo;
    printf("años de ambiguedad: ");
    scanf("%f", &ambiguedad);
    printf("horas de trabajo por jornada: ");
    scanf("%f", &horas);
    sueldo = 4500*horas;
    neto = sueldo + sueldo*2/100; 
    printf("Su sueldo neto deberia ser de %f pesos al mes.", neto);

    return 0;
}