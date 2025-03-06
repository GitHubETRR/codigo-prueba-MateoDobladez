#include <stdio.h>

int main(){
    int num;
    for(num=2;num<=50;num++){
        if(num%2 == 0){
            printf("%d\n", num); 
        }
    }

    return 0;
}