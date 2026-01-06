#include <stdio.h>
#include <stdlib.h> //RICORDATI di includere <stdlib> per usaere rand()

void stampa(int array[], int n);
int somma_array(int array[], int n);

int main(){
    const int N = 5;
    int v[N], i, totale;

    for(i = 0; i < N; i++){
        v[i] = rand() % 10;
    }

    stampa(v, N);
    totale = somma_array(v, N);

    printf("Somma degli elementi: %d\n", totale);
}

void stampa(int array[], int n){
    int i;
    
    for(i = 0; i < n; i++){
        printf("%d\t", array[i]);
    }
    printf("\n");
}

int somma_array(int array[], int n){
    int i, totale = 0;
    for(i = 0; i < n; i++){
        totale += array[i];
    }

    return totale;
}
