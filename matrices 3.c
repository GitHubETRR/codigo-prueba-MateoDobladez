#include <stdio.h>

int main(){
    int matriz [5] [5];
    int num = 0;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            matriz [i] [j] =  num;
            num++;
            printf(" %d ", matriz [i] [j]);
        } printf("\n");
    } 

    return 0;
}
