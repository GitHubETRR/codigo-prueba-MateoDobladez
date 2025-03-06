#include <stdio.h>

int main(){

    int num, cifra;
    printf("Porfavor ingrese su numero de dos o más cifras\n");
    scanf("%d", &num);
    cifra = num&10;
    printf("La ultima cifra del número que usted ingreso es: %d", cifra);

    return 0;
}