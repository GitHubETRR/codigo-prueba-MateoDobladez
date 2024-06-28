#include <stdio.h>

int main(){

    int var1;
    do{
        int num, cif1, cif2, cif3, cif4;
        printf("porfavor, ingrese su numero de 4 digitos: ");
        scanf("%d", &num);
        cif1 = num/1000;
        cif2 = (num%1000)/100;
        cif3 = (num%100)/10;
        cif4 = num%10;
        if((cif1==cif4) && (cif2==cif3)){
            printf("Si, el numero %d es capicua\n", num);
        }
        else{
            printf("No, el numero %d no es capicua\n"), num;
        }
        printf("si desea continuar revisando numeros, ingrese 1: ");
        scanf("%d", &var1);
    }while(var1 == 1);

    return 0;
}