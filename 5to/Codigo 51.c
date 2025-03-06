#include <stdio.h>
int main(){

    int num, suma=0, cifra;
    printf("ingrese el numero que quieras sumar sus cifras: ");
    scanf("%d", &num);
    if(num>9){
        while(num>0){
            cifra = num%10;
            suma += cifra;
            num /= 10;
        }
    }
    else{
        printf("su codigo tiene una sola cifra\n");
        return 1;
    }
    printf("la suma de sus cifras es de %d", suma);

    return 0;
}