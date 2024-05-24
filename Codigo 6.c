#include <stdio.h>

int main(){

    float area, perimetro, lado;
    printf("Ingrese el valor del area de su cuadrado\n");
    scanf("%f", &area);
    lado = sqrt(area);
    perimetro = lado*4;
    printf("El perimetro de tu cuadrado es de %f", perimetro);

    return 0;

}