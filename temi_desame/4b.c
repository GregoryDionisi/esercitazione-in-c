#include <stdio.h>
#include <stdlib.h>

int massimo(int *p, int n);
float media(int *p, int n);

int main(){
    int N, *v, i;

    printf("Inserire la lunghezza dell'array desiderata: ");
    scanf("%d", &N);

    v = malloc(N * sizeof(int));

    for(i = 0; i < N; i++){
        printf("Inserire un numero: ");
        scanf("%d", &v[i]);
    }

    printf("Il massimo tra gli elementi dell'array è: %d\n", massimo(v, N));
    printf("La media tra gli elementi dell'array è: %f\n", media(v, N));

    free(v);
}

int massimo(int *p, int n){
    int *max, *fine = p + n;

    max = p;

    for(p = p + 1; p < fine; p++){ //non puoi fare p < p + n perchè anche p + n aumenta e non è fisso (visto che anche p aumenta)
        if(*p > *max){
            max = p;
        }
    }

    return *max;
}

float media(int *p, int n){
    float mid;
    int somma = 0, *fine = p + n;

    for(p; p < fine; p++){
        somma += *p;
    }

    mid = somma / (float)n;

    return mid;
}