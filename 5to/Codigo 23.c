#include <stdio.h>
#include <math.h>

int main(){

    float perimetro, semip, base, lado1, lado2, area;
    printf("ingrese el valor de los lados de su triangulo en centimetros, empezando por su base:\n");
    scanf("%f %f %f", &base, &lado1, &lado2);
    perimetro = base + lado1 + lado2;
    semip = perimetro/2;
    area = sqrt(semip*(semip-base)*(semip-lado1)*(semip-lado2));
    printf("el area de su triangulo es de %f centimetros", area);

    return 0;

}