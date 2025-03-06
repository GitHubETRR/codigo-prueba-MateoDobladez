#include <stdio.h>

int main(){

    int num, positivos, negativos;
    printf("ingrese un valor positivo o negativo, si es cero, el codigo terminara: ");
    scanf("%d", &num);
    while(num!=0){
        if(num>0){
            positivos++;
        } else negativos++;
        printf("ingrese otro valor: ");
        scanf("%d", &num);
    }
    printf("usted a ingresado %d valores positivos y %d negativos", positivos, negativos);

    return 0;

}