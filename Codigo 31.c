#include <stdio.h>
#define SALIR 1
int main(){

    int var1;
    do{
        int num1, num2;
        printf("porfavor, ingrese los dos números que desea comparar \n");
        scanf("%d \n %d", &num1, &num2);
        if(num1 == num2){
            printf("los numeros ingresados son iguales\n");
        }
        else{
            printf("los numeros ingresados son distintos\n");
        }

        printf("si desea ingresar otros numeros, ingrese un 1\n");
        scanf("%d", &var1);
    } while(var1 == SALIR);

    return 0;
}