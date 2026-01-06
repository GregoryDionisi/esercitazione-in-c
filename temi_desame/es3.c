#include <stdio.h>

void divisore(int array[], int n);

int main(){
    const int N = 10;
    int v[N], i;
    
    for(i = 0; i < N; i++){
        printf("Inserisci un numero: ");
        scanf("%d", &v[i]);
    }

    divisore(v, N);
}

void divisore(int array[], int n){
    int i, j, div[n], divisori;

    for(i = 0; i < n; i++){
        divisori = 0;
        for(j = array[i]; j > 0; j--){
            if((array[i] % j) == 0){
                divisori++;
            }
        }
        div[i] = divisori;
    }

    for(i = 0; i < n; i++){
        printf("I divisori di %d sono: %d\n", array[i], div[i]);
    }
}