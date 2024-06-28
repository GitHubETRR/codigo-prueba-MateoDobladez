#include <stdio.h>

int main(){

    float preciokg, precio, cantidad;
    printf("ingrese el valor de 1 kg de mercancia en dolares\n");
    scanf("%f", &preciokg);
    prinf("cuantos kg de mercancia desea comprar?\n");
    scanf("%f", cantidad);
    precio = preciokg*cantidad;
    printf("El total a pagar es de %f dolares", precio);

    return 0;
}