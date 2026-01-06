#include <stdio.h>

int main(){
    int m, i;

    printf("Inserire un numero maggiore di 1: ");

    do{
        scanf("%d", &m);

        if(m <= 1){
            printf("Per favore inserire un numero maggiore di 1: ");
        }
    }while(m <= 1);

    if((m % 2) == 0){
        printf("Il numero %d è pari\n", m);
    } else {
        printf("Il numero %d è dispari\n", m);
    }

    printf("QUADRATI DEI NUMERI COMPRESI TRA 1 E %d (%d COMPRESO)\n", m, m);
    for(i = 2; i <= m; i++){
        printf("Quadrato di %d: %d\n", i, i*i);
    }
}