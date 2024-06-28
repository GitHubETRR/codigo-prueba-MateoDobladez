#include <stdio.h>
#include <math.h>

int main(){

    float x1, x2, a, b, c;
    printf("ingrese los coeficientes de su polinomio\n");
    scanf("%f\n %f\n %f", &a, &b, &c);
    x1 = (-1*b - sqrt(b*b-4*a*c)) / 2*a;
    x2 = (-1*b + sqrt(b*b-4*a*c)) / 2*a;
    printf("las raíces de tu polinomio son\n X1= %f \n X2= %f", x1, x2);

    return 0;
}