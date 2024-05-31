#include <stdio.h>

int main(){

    int var1;
    do{
        int num;
        printf("ingrese su numero par o impar\n");
        scanf("%d", &num);
        if((num%2) == 0){
            printf("su numero es par\n");
        }
        else {
            printf("su numero es impar\n");
        }
        printf("desea seguir ingresando numeros, de ser así ingrese 1\n");
        scanf("%d", &var1);
    } while(var1 == 1);

    return 0;

}