#include <stdio.h>

int main(){

    float radio, altura, volumen, area;
    printf("ingrese el valor del radio de su cilindro en centimetros:\n");
    scanf("%f", &radio);
    printf("ingrese el valor de la altura de su cilindro en centimetros:\n");
    scanf("%f", &altura);
    volumen = 3.14 * radio * radio* altura;
    area =  3.14 * 2 * radio * altura + 2 * (radio * radio * 3.14);
    printf("el volumen de tu cilidnro es de %f centimetros y su area es de %f centimetros", volumen, area);

    return 0;

}