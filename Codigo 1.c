//Codigo prueba
#include <stdio.h>

int main(){
    
float cm, ft, inches, var1, var2;
    var1 = 30.48;
    var2 = 2.54;
    printf("Porfavor, introduzca su medida en centimetros\n");
    scanf("%f", &cm);
    ft = cm/var1;
    inches = cm/var2;
    printf("Su valor en pies es de: %f pies\n", ft);
    printf("Su valor en pulgadas es de: %f pulgadas", inches);
    
    return 0;
    
}