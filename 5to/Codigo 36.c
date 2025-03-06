#include <stdio.h>

int main(){

    int var1;
    do{
        int kg, dist, precio;
        printf("porfavor, ingrese cuantos kilos de mercancia desea comprar: ");
        scanf("%d", &kg);
        printf("¿larga (1) o corta (2) distancia desde nuestra sucursal?\n");
        scanf("%d", &dist);
        if((dist==2) && (kg>20)){
            precio = 1500 + (kg-20)*800;
            printf("el costo de viaje sera de %d pesos\n", precio);
        }
        else if((dist==1) && (kg>20)){
            precio = 2000 +  ((kg-20)/5)*800;
            printf("el costo de viaje sera de %d pesos\n", precio);
        }
        else if((kg<20) && (dist==2)){
            precio = 1500;
            printf("el costo de viaje sera de %d pesos\n", precio);
        }
        else if((kg<20) && (dist==1)){
            precio = 2000;
            printf("el costo de viaje sera de %d pesos\n", precio);
        }
        printf("si desea calcular el costo de otro envio, ingrese 1: ");
        scanf("%d", &var1);
    }while(var1==1);

    return 0;
}