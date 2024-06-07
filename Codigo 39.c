#include <stdio.h>

int main(){

    int var1=1;
    for(;var1==1;){
        int nota;
        printf("porfavor, ingrese su promedio en la materia: ");
        scanf("%d", &nota);
        if(nota==10) {
            printf("el alumno obtuvo un sobresaliente\n");
        }
        else if(nota==8 || nota==9) printf("el alumno obtuvo un distinguido\n");
        else if(nota==7 || nota==6) printf("el alumno obtuvo un bueno\n");
        else if(nota==4 || nota==5) printf("el alumno obtuvo un aprobado\n");
        else if(nota==3 || nota==2 || nota==1) printf("el alumno obtuvo un desaprobado\n");
        
        printf("si desea ingresar otra nota, ingrese un 1: ");
        scanf("%d", &var1);
    }
    return 0;
}