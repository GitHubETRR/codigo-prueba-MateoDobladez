#include <stdio.h>

int main(){

    int num, total, cantidad;
    float promedio;
    printf("ingrese un numero entero: ");
    scanf("%d", &num);
    while(num>0){
        cantidad++;
        total += num;
        printf("ingrese otro valor entero: ");
        scanf("%d", &num);
    }
    promedio = total/cantidad;
    printf("el promedio de todos los numeros ingresados es %f", promedio);

    return 0;
    
}