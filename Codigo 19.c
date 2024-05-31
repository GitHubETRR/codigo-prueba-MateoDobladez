#include <stdio.h>
#include <math.h>

int main(){

    float lado1, lado2, hip;
    printf("ingrese los valores de sus lados en cm\n");
    scanf("%f \n%f", &lado1, &lado2);
    hip = sqrt(lado1*lado1+lado2*lado2);
    printf("la hipotenusa de este triangulo es de %f centimetros", hip);

    return 0;
}