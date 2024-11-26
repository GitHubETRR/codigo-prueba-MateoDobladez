#include <stdio.h>

int main(){

    int horas, ambiguedad, neto, sueldo;
    printf("años de ambiguedad: ");
    scanf("%d", &ambiguedad);
    printf("horas de trabajo por jornada: ");
    scanf("%d", &horas);
    sueldo = 4500*horas;
    neto = sueldo + ambiguedad*(sueldo*2/100); 
    printf("Su sueldo neto deberia ser de %d pesos al mes.", neto);

    return 0;
}