#include <stdio.h>

int main() {

    int meses, years, dias;
    printf("Cuantos años tienes?\n");
    scanf("%d", &years);
    printf("Cuantos meses tienes?\n");
    scanf("%d", &meses);
    dias = years*365 + meses * 30;
    printf("Has vivido %d dias", dias);

    return 0;
}