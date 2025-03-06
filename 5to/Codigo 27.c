#include <stdio.h>

int main(){

    int num, cifra1, cifra2, cifra3;
    printf("ingrese su número de 3 cifras para descomponer\n");
    scanf("%d", &num);
    cifra1 = num/100;
    cifra2 = (num%100)/10;
    cifra3 = num%10;
    printf("Las cifras del numero que usted ingreso son: %d, %d y %d", cifra1, cifra2, cifra3);

    return 0;

}