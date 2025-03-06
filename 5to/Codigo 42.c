#include <stdio.h>
#include <stdio_ext.h>

int main(){

    int var1=1;
    char letra;
    for(;var1==1;){
        printf("Porfavor, ingrese una caracter para determinar si es vocal: ");
        __fpurge(stdin);
        scanf("%c", &letra);
        if(letra=='A' || letra=='E' || letra=='I' || letra=='O' || letra=='U'){
            printf("la letra ingresada es una vocal mayuscula\n");
        } 
        else if(letra=='a' || letra=='e' || letra=='i' || letra=='o' || letra=='u') printf("la letra ingresada es una vocal minuscula\n");
        else printf("el caracter ingresado no es una vocal\n");
        printf("si desea ingresar otro caracter, ingrese 1: ");
        scanf("%d", &var1);
    }
    return 0;
    
}