#include <stdio.h>

int main(){
    const int N = 10;
    int array[N], i, somma = 0;
    float media;

    for(i = 0; i < N; i++){
        printf("Inserire un numero: ");
        scanf("%d", &array[i]);
    }

    for(i = 0; i < N; i++){
        somma += array[i];
    }

    media = somma / (float)N;
    printf("La media degli elementi è %f\n", media);
}