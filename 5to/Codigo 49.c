#include <stdio.h>
#include <math.h>

int main(){

    int pot, resultado;
    for(pot=0;pot<21;pot++){
        resultado = pow(2,pot);
        printf("2^%d = %d\n", pot, resultado);
    }
    return 0;

}