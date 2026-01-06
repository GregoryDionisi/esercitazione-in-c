#include <stdio.h>
#include <stdlib.h>

void stampa(int array[], int n);
int trova_max(int array[], int n);

int main(){
    const int N = 10;
    int v[N], i, max;

    for(i = 0; i < N; i++){
        v[i] = rand() % 10;
    }

    stampa(v, N);
    max = trova_max(v, N);

    printf("Il massimo è: %d\n", max);
}

void stampa(int array[], int n){
    int i;

    for(i = 0; i < n; i++){
        printf("%d\t", array[i]);
    }
    printf("\n");
}

int trova_max(int array[], int n){
    int max = array[0], i;

    for(i = 1; i < n; i++){
        if(array[i] > max){
            max = array[i];
        }
    }

    return max;
}