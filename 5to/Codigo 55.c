#include <stdio.h>

int main() {
    int num1, num2;
    char letra;

    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);

    if (num1 >= num2) {
        printf("El primer número debe ser menor que el segundo.\n");
        return 0; 
    }

    printf("Ingrese 'p' o 'P' para pares o 'i' o 'I' para impares: ");
    scanf(" %c", &letra);

    if (letra != 'p' && letra != 'P' && letra != 'i' && letra != 'I') {
        printf("Letra inválida. Debe ingresar 'p', 'P', 'i' o 'I'.\n");
        return 0; 
    }

    printf("Los números %s entre %d y %d son:\n",
        (letra == 'p' || letra == 'P') ? "pares" : "impares", num1, num2);
    for (int i = num1; i <= num2; i++) {
        if ((letra == 'p' || letra == 'P') && i % 2 == 0) {
            printf("%d ", i);
        } else if ((letra == 'i' || letra == 'I') && i % 2 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}