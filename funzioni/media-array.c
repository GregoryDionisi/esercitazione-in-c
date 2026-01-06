#include <stdio.h>
#include <stdlib.h>

void stampa(int array[], int n);
float calcola_media(int array[], int n);

int main(){
    const int N = 5;
    int v[N], i; 
    float media;

    for(i = 0; i < N; i++){
        v[i] = rand() % 10;
    }

    stampa(v, N);
    media = calcola_media(v, N);

    printf("La media è: %f\n", media);
}

void stampa(int array[], int n){
    int i;

    for(i = 0; i < n; i++){
        printf("%d\t", array[i]);
    }
    printf("\n");
}

float calcola_media(int array[], int n){
    int i, somma = 0;
    float media;

    for(i = 0; i < n; i++){
        somma += array[i];
    }

    media = somma / (float)n;
    return media;
}