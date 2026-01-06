#include <stdio.h>

void stampa(int array[], int n);
void fattoriale(int sorgente[], int destinazione[], int n);

int main(){
    const int N = 5;
    int v[N], w[N], i;

    for(i = 0; i < N; i++){
        printf("Inserire un numero non negativo: ");
        scanf("%d", &v[i]);
    }

    printf("ARRAY SENZA I FATTORIALI\n");
    stampa(v, N);

    fattoriale(v, w, N);

    printf("ARRAY CON I FATTORIALI\n");
    stampa(w, N);
    
}

void stampa(int array[], int n){
    int i;

    for(i = 0; i < n; i++){
        printf("%d\t", array[i]);
    }
    printf("\n");
}
void fattoriale(int sorgente[], int destinazione[], int n){
    int i, fattoriale, j;

    for(i = 0; i < n; i++){
        fattoriale = 1;
        for(j = sorgente[i]; j > 0; j--){
            if(j != 0){
                fattoriale = fattoriale * j;
            }
        }
        destinazione[i] = fattoriale;
    }
}