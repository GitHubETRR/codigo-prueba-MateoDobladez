#include <stdio.h>

int main(){

    int var1;
    do{
        int num1, num2, num3;
        printf("porfavor, ingrese sus 3 numeros a comparar:\n");
        scanf("%d\n %d\n %d", &num1, &num2, &num3);
        if((num1<num2) && (num1<num3)){
            printf("el numero mas pequeño es %d\n", num1);
        }
        else if((num2<num1) && (num2<num3)){
            printf("el numero mas pequeño es %d\n", num2);
        }
        else if((num3<num2) && (num3<num1)){
            printf("el numero mas pequeño es %d\n", num3);
        }
        else if((num1==num2) && (num2==num3)){
            printf("los 3 numeros son iguales\n");
        }
        
        printf("si desea seguir comparando numeros, ingrese 1\n");
        scanf("%d", &var1);

    }while(var1 == 1);

    return 0;
}