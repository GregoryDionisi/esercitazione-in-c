#include <stdio.h>

int main(){
    const int N = 5;
    int array[N], i, somma = 0;

    for(i = 0; i < N; i++){
        printf("Inserisci un numero: ");
        scanf("%d", &array[i]);
    }

    for(i = 0; i < N; i++){
        somma += array[i];
    }

    printf("La somma degli elementi è %d\n", somma);
}