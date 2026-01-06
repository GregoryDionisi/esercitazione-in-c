#include <stdio.h>

int main(){
    const int N = 5;
    int v[N], w[N], i, prodottoScalare = 0;

    printf("PRIMO ARRAY\n");
    for(i = 0; i < N; i++){
        printf("Inserire un numero: ");
        scanf("%d", &v[i]);
    }

    printf("SECONDO ARRAY\n");
    for(i = 0; i < N; i++){
        printf("Inserire un numero: ");
        scanf("%d", &w[i]);
    }

    for(i = 0; i < N; i++){
        prodottoScalare += v[i] * w[i];
    }

    printf("Il prodotto scalare è: %d\n", prodottoScalare);
}