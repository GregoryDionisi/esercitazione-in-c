#include <stdio.h>
#include <stdlib.h>

int main(){
    int i = 0, *v, n = 0, *quadrati, somma = 0, decrescente = 0;

    v = malloc(n * sizeof(int));

    do{
        printf("Inserire un numero: ");
        n++;
        v = realloc(v, n * sizeof(int));
        scanf("%d", &v[i]);
        i++;
    }while(v[i-1] >= 0);
    n--;
    v = realloc(v, n * sizeof(int));
    quadrati = malloc(n * sizeof(int));

    printf("ARRAY CON QUADRATI DEI NUMERI INSERITI\n");
    for(i = 0; i < n; i++){
        quadrati[i] = v[i] * v[i];
        somma += quadrati[i];
        printf("%d\t", quadrati[i]);
    }
    printf("\n");

    printf("La somma dei quadrati dei numeri inseriti è %d\n", somma);

    for(i = 0; i < n; i++){
        if(v[i] < v[i+1]){
            decrescente++;
        }
    }

    if(decrescente == 0){
        printf("La sequenza di numeri inseriti è decrescente!\n");
    } else {
        printf("La sequenza di numeri inseriti NON è decrescente!\n");
    }
}