#include <stdio.h>

int main(){
    const int N = 8;
    int array[N], i, pos, ricerca;

    for(i = 0; i < N; i++){
        printf("Inserire un numero: ");
        scanf("%d", &array[i]);
    }

    printf("Inserisci un numero da cercare: ");
    scanf("%d", &ricerca);

    for(i = 0; i < N; i++){
        if(array[i] == ricerca){
            pos = i;
            printf("Numero trovato nella posizione %d\n", pos);
        }
    }
}