#include <stdio.h>

int main(){
    const int N = 6;
    int array[N], invertito[N], i;

    for(i = 0; i < N; i++){
        printf("Inserire un numero: ");
        scanf("%d", &array[i]);
    }

    for(i = 0; i < N; i++){
        invertito[N-1-i] = array[i];
    }

    printf("ARRAY INVERTITO\n");
    for(i = 0; i < N; i++){
        printf("%d\t", invertito[i]);
    }
    printf("\n");
}