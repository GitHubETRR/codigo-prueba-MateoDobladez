#include <stdio.h>

int main(){
    
    int var;
    int num;
    printf("ingrese el numero del que desee saber sus divisores: ");
    scanf("%d", &num);
    for(var=1;var<=num;var++){
        if(num % var == 0){
            printf("%d\n", var);
        }
    }
    
    return 0;

}