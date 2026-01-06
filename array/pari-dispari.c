#include <stdio.h>

int main(){
    const int N = 10;
    int array[N], i, pari = 0, dispari = 0; //RICORDATI di inizializzare pari e dispari

    for(i = 0; i < N; i++){
        printf("Inserire un numero: ");
        scanf("%d", &array[i]);
    }

    for(i = 0; i < N; i++){
        if((array[i] % 2) == 0){
            pari++;
        } else {
            dispari++;
        }
    }
    printf("Numeri pari: %d\n", pari);
    printf("Numeri dispari: %d\n", dispari);
}