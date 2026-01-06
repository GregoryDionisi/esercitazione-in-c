#include <stdio.h>
#include <stdlib.h>

void riempiArray(int array[], int nmembri);
void stampaArray(int array[], int nmembri);

int main(){
    int n, *p;
    printf("Inserisci lo spazio che vuoi occupare: ");
    scanf("%d", &n);

    p = malloc(n * sizeof(int));

    if(p == NULL){
        printf("Spazio non allocato correttamente\n");
    } else {
        printf("Spazio allocato con successo!\n");
    }

    riempiArray(p, n);
    stampaArray(p, n);

    free(p); //RICORDATI di liberare memoria
}

void riempiArray(int array[], int nmembri){
    int i;

    for(i = 0; i < nmembri; i++){
        array[i] = rand() % 10;
    }
}

void stampaArray(int array[], int nmembri){
    int i;

    for(i = 0; i < nmembri; i++){
        printf("%d\t", array[i]);
    }
    printf("\n");
}