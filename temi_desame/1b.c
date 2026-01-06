#include <stdio.h>

int main(){
    int n1, n2, i;

    do{
        n1 = 0;
        n2 = 0;
        printf("Inserire il primo numero: ");
        scanf("%d", &n1);
        printf("Inserisci il secondo numero: ");
        scanf("%d", &n2);
    }while((n2 % n1) != 0);

    if((n2 % 2) != 0){
        printf("Il numero %d è dispari\n", n2);
    } else {
        printf("Il numero %d è pari\n", n2);
    }

    printf("Tutti i numeri compresi tra %d e %d (%d escluso)\n", n1, n2, n1);
    for(i = n1+1; i <= n2; i++){
        printf("%d\t", i);
    }
    printf("\n");
}