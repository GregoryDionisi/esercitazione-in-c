#include <stdio.h>

int main(){
    const int N = 20;
    int array[N+1], i, j;

    for(i = 0; i <= N; i++){
        array[i] = 1;
    }

    for(i = 2; i <= N; i++){
        if(array[i] == 1){
            for(j = i + i; j <= N; j += i){
                array[j] = 0;
            }
        }
    }

    printf("I numeri primi sono:\n");
    for(i = 2; i <= N; i++){
        if(array[i] == 1){
            printf("%d\t", i);
        }
    }
    printf("\n");
}