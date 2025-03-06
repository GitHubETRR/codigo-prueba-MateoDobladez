#include <stdio.h>

int main(){ 

     float ang1, ang2, ang3;
    printf("ingrese el valor de sus angulos:\n");
    scanf("%f", &ang1);
    scanf("%f", &ang2);
    ang3 = 180 - ang1 - ang2;
    if(ang3 <= 0){
        printf("No es posible un triangulo con estos angulos");
    }
        else if(ang3 > 0);{
            printf("el angulo faltante es de %f grados", ang3);
        }
    
    return 0;
}