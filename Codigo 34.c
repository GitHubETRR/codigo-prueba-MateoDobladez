#include <stdio.h>

int main(){

    int var1;
    do{
        int num1, num2, numf;
        printf("ingrese sus dos numeros a sumar:\n");
        scanf("%d\n %d", &num1, &num2);
        numf = num1 + num2;
        if((numf%2) == 0){
            printf("la suma de ambos numeros da como resultado un numero par\n");
        }
        else{
            printf("la suma de ambos numeros da como resultado un numero impar\n");
        }
        printf("si desea seguir analizando sumas ingrese un 1: ");
        scanf("%d", &var1);
    }while(var1==1);

    return 0;
}