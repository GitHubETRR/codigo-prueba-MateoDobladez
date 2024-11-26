#include <stdio.h>

int main(){

    int var1;
    do{
        char A, B, C;
        printf("ingrese sus 3 letras minusculas:\n");
        scanf("%c\n %c\n %c", &A, &B, &C);
        if((A>123 && A<96) && (B>123 && B<96) && (C>123 && C<96)){
            printf("Una o más de las letras ingresadas no es minuscula...");
        }
        else if(A>B && C<B) printf("el orden de sus letras de menor a mayor es el siguiente: %c-%c-%c\n", C, B, A);
        else if(B>A && C<A) printf("el orden de sus letras de menor a mayor es el siguiente:%c-%c-%c\n", C, A, B);
        else if(C>A && B<A) printf("el orden de sus letras de menor a mayor es el siguiente:%c-%c-%c\n", B, A, C);
        else if(A>C && B<C) printf("el orden de sus letras de menor a mayor es el siguiente:%c-%c-%c\n", B, C, A);
        else if(C>B && A<B) printf("el orden de sus letras de menor a mayor es el siguiente:%c-%c-%c\n", A, B, C);
        else if(B>C && A<C) printf("el orden de sus letras de menor a mayor es el siguiente:%c-%c-%c\n", A, C, B);
        printf("si desea ingresar otras letras porfavor ingrese un 1: ");
        scanf("%d", &var1);
    }while(var1==1);

    return 0;
}
