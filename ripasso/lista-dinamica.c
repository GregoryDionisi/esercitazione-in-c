#include <stdio.h>
#include <stdlib.h>

void stampaLista(int array[], int nmemb);
void ordinaLista(int array[], int nmemb);

int main(){
    int n = 0, *v = malloc(n * sizeof(int)), esci = 0;

    while(esci == 0){
        printf("Inserisci i numeri (digita -1 per terminare): ");
        n++;
        v = realloc(v, n * sizeof(int)); //RICORDATI di mettere come primo parametro di realloc il puntatore alla memoria interessata
        scanf("%d", &v[n-1]);
        
        if(v[n-1] == -1){
            n--;
            v = realloc(v, n * sizeof(int));
            esci++;
        }
    }

    printf("ARRAY PRIMA DELL'ORDINAMENTO\n");
    stampaLista(v, n);
    ordinaLista(v, n);
    printf("ARRAY DOPO L'ORDINAMENTO\n");
    stampaLista(v, n);
}

void stampaLista(int array[], int nmemb){
    int i;

    for(i = 0; i < nmemb; i++){
        printf("%d\t", array[i]);
    }
    printf("\n");
}

void ordinaLista(int array[], int nmemb){
    int i, j, temp;

    for(i = 1; i < nmemb; i++){
        for(j = i; j > 0; j--){
            if(array[j] < array[j-1]){
                temp = array[j-1];
                array[j-1] = array[j];
                array[j] = temp;
            }
        }
    }
}