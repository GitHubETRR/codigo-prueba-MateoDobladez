#include <stdio.h>

int main(){

    int DMA, year, mes, dia;
    printf("porfavor ingrese una fecha en formato DDMMAAAA:\n");
    scanf("%d", &DMA);
    year = DMA%10000;
    dia = (DMA/10000)/100;
    mes = (DMA/10000)%100;
    printf("Tu fecha es el dia %d del mes %d del año %d", dia, mes, year);

    return 0;

}