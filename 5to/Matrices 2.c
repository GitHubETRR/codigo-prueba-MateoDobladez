#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int max = 0;
    int maxrep;
    int matriz [5] [5] = {0};
    srand(time(NULL));
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            matriz [i] [j] = rand()%(15)+1;
            printf(" %d ", matriz [i] [j]);
            if(max<matriz [i] [j]){
                max = matriz [i] [j];
                maxrep = 1;
            } else if(matriz [i] [j] == max){
                maxrep = maxrep + 1;
            }
        } printf("\n");
    } 
    printf("maximo: %d\n", max);
    printf("se repite %d veces, en las posiciones:\n", maxrep);
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(max==matriz [i] [j]){
                printf("%d-%d\n", i, j);
            }
        }
    }
    return 0;
}