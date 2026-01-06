#include <stdio.h>
#include <stdlib.h>

void riempiArray(int array[], int n);
void stampaArray(int array[], int n);
void sommaArray(int *p, int *q, int *s, int n);

int main(){
    const int N = 5;
    int v[N], w[N], somma[N], i;
    riempiArray(v, N);
    riempiArray(w, N);

    printf("PRIMO ARRAY\n");
    stampaArray(v, N);

    printf("SECONDO ARRAY\n");
    stampaArray(w, N);

    sommaArray(v, w, somma, N);

    printf("ARRAY CON ELEMENTI SOMMATI\n");
    for(i = 0; i < N; i++){
        printf("%d\t", somma[i]);
    }
    printf("\n");
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

void sommaArray(int *p, int *q, int *s, int n){
    int i;

    for(i = 0; i < n; i++){
        /* *s = *p + *q;
        s++;
        p++;
        q++; */ //alla fine anche q++ è aritmetica dei puntatori tecnicamente

        //ALTERNATIVA MIGLIORE
        *(s + i) = *(p + i) + *(q + i); //però questa aritmetica che il testo intendeva
    }
}