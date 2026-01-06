#include <stdio.h>
#include <stdlib.h>
#include <time.h> //RICORDATI di includere time.h per la funzione time()

void riempiArray(int array[], int nmembri);
void stampaArray(int array[], int nmembri);
void selectionSort(int array[], int nmembri);

int main(){
    int n, *v;
    srand(time(NULL)); //utilizzato per avere randomizzazioni sempre diverse

    printf("Quanto vuoi grande l'array: ");
    scanf("%d", &n);

    v = malloc(n * sizeof(int));

    if(v == NULL){
        printf("Spazio non allocato correttamente\n");
    } else {
        printf("Spazio allocato con successo!\n");

        riempiArray(v, n);
        printf("ARRAY PRIMA DELL'ORDINAMENTO\n");
        stampaArray(v, n);
        selectionSort(v, n);
        printf("ARRAY DOPO L'ORDINAMENTO\n");
        stampaArray(v, n);
        free(v);
    }
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

void selectionSort(int array[], int nmembri){
    int i, j, min, posmin, temp;

    for(i = 0; i < nmembri; i++){
        min = array[i];
        posmin = i; //RICORDATI di inizializzare TUTTI gli indicatori come min e posmin
        for(j = i+1; j < nmembri; j++){
            if(array[j] < min){
                min = array[j];
                posmin = j;
            }
        }
        temp = array[i];
        array[i] = min;
        array[posmin] = temp;
    }
}