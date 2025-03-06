#include <stdio.h>

int main(){
    int num, var, fac=1;
    printf("ingrese hasta que numero desea hacer un factorial: ");
    scanf("%d", &num);
    if(num>0){
        for(var=2;var<=num;var++){
        fac = fac * var;
        }
    }
    else{
        printf("el numero ingresado es 0, no es posible");
        return 1;
    }
    printf("la factorial de %d da como resultado: %d", num, fac);

    return 0;
}