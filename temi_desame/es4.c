#include <stdio.h>

void potenza(int array[], int n);

int main(){
    const int N = 5;
    int v[N], i;

    for(i = 0; i < N; i++){
        printf("Inserisci un numero: ");
        scanf("%d", &v[i]);
    }

    potenza(v, N);
}

void potenza(int array[], int n){
    int i, j, pot[n], poten;

    for(i = 0; i < n; i++){
        poten = 1;
        for(j = 0; j < array[i]; j++){
            poten = poten * 2;
        }
        pot[i] = poten;
        printf("Potenza %d-esima di 2: %d\n", array[i], pot[i]);
    }
}