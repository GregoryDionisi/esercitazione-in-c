#include <stdio.h>
#include <stdlib.h>

void stampa(int array[], int n);
void inverti_array(int array[], int n);

int main(){
    const int N = 8;
    int v[N], i;

    for(i = 0; i < N; i++){
        v[i] = rand() % 10;
    }

    stampa(v, N);
    inverti_array(v, N);
}

void stampa(int array[], int n){
    int i;

    for(i = 0; i < n; i++){
        printf("%d\t", array[i]);
    }
    printf("\n");
}

void inverti_array(int array[], int n){
    int invertito[n], i;

    for(i = 0; i < n; i++){
        invertito[n-1-i] = array[i];
    }

    for(i = 0; i < n; i++){
        printf("%d\t", invertito[i]);
    }
    printf("\n");
}