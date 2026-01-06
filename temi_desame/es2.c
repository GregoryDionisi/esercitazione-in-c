#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    const int N = 100;
    int i = 0, *v, w[N], n = 0, x, occorrenza = 0;
    srand(time(NULL));

    v = malloc(n * sizeof(int));

    do{
        printf("Inserisci un numero: ");
        n++;
        v = realloc(v, n * sizeof(int));
        scanf("%d", &v[i]);
        i++;
    }while(v[i-1] > 20);
    n--;
    v = realloc(v, n * sizeof(int));

    for(i = 0; i < n; i++){
        printf("%d\t", v[i]);
    }
    printf("\n");

    printf("Inserire un numero compreso tra 1 e 20: ");
    do{
        scanf("%d", &x);
        if(x < 1 && x > 20){
            printf("Per favore inserire un numero compreso tra 1 e 20: ");
        }
    }while(x < 1 && x > 20);

    for(i = 0; i < N; i++){
        w[i] = rand() % 21; //quindi il 20 è compreso
        printf("%d\t", w[i]);
        if(x == w[i]){
            occorrenza++;
        }
    }
    printf("\n");

    printf("Il numero %d è comparso %d volta/e nella sequenza\n", x, occorrenza);
}