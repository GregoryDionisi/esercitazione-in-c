#include <stdio.h>

int main(){
    int righe, colonne, i, j, risultato;
    
    printf("Inserisci il numero di righe (numeri di cui calcolare la tabellina): ");
    scanf("%d", &righe);
    printf("Inserisci il numero di colonne (fino a che numero calcolare la tabellina): ");
    scanf("%d", &colonne);

    printf("Tabelline da 1 a %d fino a %d:\n", righe, colonne);
    for(i = 1; i <= righe; i++){
        for(j = 1; j <= colonne; j++){
            risultato = i * j;
            printf("%d x %d = %d\t", i, j, risultato);
        }
        printf("\n");
    }
}
