#include <stdio.h>
#include <stdlib.h>
#include <time.h> //RICORDATI di includere time.h per la funzione time()

void riempiArray(int array[], int nmembri);
void stampaArray(int array[], int nmembri);
void insertionSort(int array[], int nmembri);
void ricercaDicotomica(int array[], int nmembri, int ricerca);

int main(){
    int n, *v, ricercato;
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
        insertionSort(v, n);
        printf("ARRAY DOPO L'ORDINAMENTO\n");
        stampaArray(v, n);

        printf("Inserisci un numero da cercare nell'array ordinato: ");
        scanf("%d", &ricercato);
        ricercaDicotomica(v, n, ricercato);

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

void insertionSort(int array[], int nmembri){
    int i, j, temp;

    for(i = 1; i < nmembri; i++){
       for(j = i; j > 0; j--){
            if(array[j] < array[j-1]){
                temp = array[j-1];
                array[j-1] = array[j];
                array[j] = temp;
            }
       }
    }
}

void ricercaDicotomica(int array[], int nmembri, int ricerca) {
    int inizio = 0, fine = nmembri - 1, posmid, trovato = 0;

    while (inizio <= fine && !trovato) {
        posmid = (inizio + fine) / 2;

        if (array[posmid] == ricerca) {
            trovato = 1;
        } else if (ricerca > array[posmid]) {
            inizio = posmid + 1;
        } else {
            fine = posmid - 1;
        }
    }

    if (trovato) {
        printf("Il numero %d si trova nella posizione %d\n", ricerca, posmid);
    } else {
        printf("Il numero da cercare non è presente nell'array ordinato\n");
    }
}
