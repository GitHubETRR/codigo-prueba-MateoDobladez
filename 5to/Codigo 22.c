#include <stdio.h>

int main(){

    float cel, far;
    printf("ingrese su temperatura en grados celsius:\n");
    scanf("%f", &cel);
    far = cel*1.8 + 32;
    printf("Su temperatura en grados fahrenheit es de %f grados", far);

    return 0;

}