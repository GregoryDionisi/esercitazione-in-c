#include <stdio.h>
#include <stdlib.h>

int main(){
    int *v, i = 0, n = 0, somma = 0, dispari = 0;

    v = malloc(n * sizeof(int));

    do{
        printf("Inserire un numero intero: ");
        n++;
        v = realloc(v, n * sizeof(int));
        scanf("%d", &v[i]);
        i++;
    }while(v[i-1] >= 0);
    n--;
    v = realloc(v, n * sizeof(int));

    for(i = 0; i < n; i++){
        somma += v[i];
        
        if((v[i] % 2) != 0){
            dispari++;
        }
    }

    printf("La somma dei numeri interi è: %d\n", somma);
    printf("Il numero di numeri dispari è: %d\n", dispari);

    free(v);
}