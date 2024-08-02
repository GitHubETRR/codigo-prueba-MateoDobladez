#include <stdio.h>

int main(){
    int var, num1, num2;
    printf("ingrese dos numeros de los que desee saber los numeros entre ellos\n");
    scanf("%d\n %d", &num1, &num2);
    if (num1>num2){
        for(var=num2;var<=num1;var++){
            printf("%d\n", var);
        }
    }
    else{
        for(var=num1;var<=num2;var++){
            printf("%d\n", var);
        }        
    }
    return 0;
}