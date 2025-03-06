#include <stdio.h>
#include <stdio_ext.h>

int main(){

    int var1=1;
    for(;var1=1;){
        float num1, num2, result;
        char op;
        printf("ingrese sus 2 numeros:\n");
        scanf("%f\n %f", &num1, &num2);
        printf("ingrese la operación que desee realizar:\n");
        __fpurge(stdin);
        scanf("%c", &op);
        switch(op){
            case '+': result = num1 + num2;
                    printf("%f %c %f = %f\n", num1, op, num2, result);
                    break;
            case '-': result = num1 - num2;
                    printf("%f %c %f = %f\n", num1, op, num2, result);
                    break;
            case '/':if(num2!=0)result = num1 / num2;
                    else printf("operacion invalida: division por 0\n");
                    break;
            case '*': result = num1 * num2;
                    printf("%f %c %f = %f\n", num1, op, num2, result);
                    break;
             default: printf("operacion invalida\n");
                    break;
        }
        printf("si desea usar denuevo la calculadora, ingrese un 1: ");
        scanf("%d", &var1);
    }
    
    return 0;
}