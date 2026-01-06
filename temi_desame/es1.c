#include <stdio.h>

int main(){
    int n, i;

    printf("Inserisci un numero: ");
    scanf("%d", &n);

    if(n > 0){
        printf("Il numero inserito è positivo!\n");
        printf("\n");
        printf("Numeri compresi tra 1 e %d\n", n);
        for(i = 1; i <= n; i++){
            printf("%d\t", i);
        }
        printf("\n");
    } else {
        printf("Il numero inserito NON è positivo!\n");
    }
}