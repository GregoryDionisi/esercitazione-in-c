#include <stdio.h>
#include <stdlib.h>

void riempiArray(int array[], int n);
void stampaArray(int array[], int n);
void invertiArray(int *p, int n);

int main(){
    const int N = 5;
    int v[N];

    riempiArray(v, N);
    printf("ARRAY PRIMA DI ESSERE INVERTITO\n");
    stampaArray(v, N);

    invertiArray(v, N);
    printf("ARRAY DOPO ESSERE STATO INVERTITO\n");
    stampaArray(v, N);
}

void riempiArray(int array[], int n){
    int i;

    for(i = 0; i < n; i++){
        array[i] = rand() % 10;
    }
}

void stampaArray(int array[], int n){
    int i;

    for(i = 0; i < n; i++){
        printf("%d\t", array[i]);
    }

    printf("\n");
}

void invertiArray(int *p, int n){
    //LA MIA SOLUZIONE
    int i, temp;

    for(i = 0; i < n/2; i++){
        temp = *p;
        *p = *(p + n - 1 - i - i); //RICORDATI di decrementare ancora di i visto che nel frattempo anche p sta aumentando
        *(p + n - 1 - i - i) = temp;
        p++;
    }

    //SOLUZIONE MIGLIORE
    /* int *inizio = p;
    int *fine = p + n - 1;
    while (inizio < fine) {
        int temp = *inizio;
        *inizio = *fine;
        *fine = temp;
        inizio++;
        fine--;
    } */
}