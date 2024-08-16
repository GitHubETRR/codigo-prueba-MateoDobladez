#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int max = 0;
    int x, y;
    int matriz [5] [5] = {0};
    srand(time(NULL));
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            matriz [i] [j] = rand()%(30)+1;
            printf(" %d ", matriz [i] [j]);
            for(int w=0; w<26; w++){
                if(max<matriz [i] [j]){
                    max = matriz [i] [j];
                    x = i;
                    y = j;
                }
            }
        } printf("\n");
    }
    printf("\n %d ", max);
    printf("%d%d", x, y);

    return 0;
}