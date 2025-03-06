#include <stdio.h>

int main(){

    int var1=1;
    int DMA, day, month, year;
    for(;var1==1;){
        printf("Porfavor, ingrese su fecha de nacimiento en formato DDMMAAAA\n");
        scanf("%d", &DMA);
        year = DMA%10000;
        month = (DMA/10000)%100;
        day = (DMA/10000)/100;
        if(day>31 || year<0){
            printf("Valor de año o de día no valido\n");
        }
        else{
            switch(month){
                case 1: printf("La persona nació el %d de enero de %d\n", day, year);
                        break;
                case 2: printf("La persona nació el %d de febrero de %d\n", day, year);
                        break;
                case 3: printf("La persona nació el %d de marzo de %d\n", day, year);
                        break;
                case 4: printf("La persona nació el %d de abril de %d\n", day, year);
                        break;
                case 5: printf("La persona nació el %d de mayo de %d\n", day, year);
                        break;
                case 6: printf("La persona nació el %d de junio de %d\n", day, year);
                        break;
                case 7: printf("La persona nació el %d de julio de %d\n", day, year);
                        break;
                case 8: printf("La persona nació el %d de agosto de %d\n", day, year);
                        break;
                case 9: printf("La persona nació el %d de septiembre de %d\n", day, year);
                        break;
                case 10: printf("La persona nació el %d de octubre de %d\n", day, year);
                        break;
                case 11: printf("La persona nació el %d de noviembre de %d\n", day, year);
                        break;
                case 12: printf("La persona nació el %d de diciembre de %d\n", day, year);
                        break;
                default: printf("Valor de mes no valido\n");
                        break;
            }
        }
        printf("si desea ingresar otro nacimiento, ingrese un 1: ");
        scanf("%d", &var1);
    }
}