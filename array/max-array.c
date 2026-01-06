#include <stdio.h>

int main(){
    const int N = 10;
    int array[N], i, max = array[0];
    
    for(i = 0; i < N; i++){
        printf("Inserisci un numero: ");
        scanf("%d", &array[i]);
    }

    for(i = 1; i < N; i++){
        if(array[i] > max){
            max = array[i];
        }
    }

    printf("Il massimo valore è %d\n", max);
}