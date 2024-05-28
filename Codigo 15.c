#include <stdio.h>

int main (){

    float lado1, lado2, area, perimetro;
    printf("Ingrese la medida de sus lados en cm:");
    scanf("%f \n%f", &lado1, &lado2);
    area = lado1*lado2;
    perimetro = lado1*2 + lado2*2;
    printf("El rectangulo tiene un area de %f y un perimetro de %f", area, perimetro);

    return 0;
}