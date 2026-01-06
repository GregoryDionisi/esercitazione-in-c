#include <stdio.h>

int main(){
    int numero, i, verificato = 0, esci = 0;
    
    do{
    printf("Inserisci un numero: ");
    scanf("%d", &numero);
    if(numero < 2){
        printf("Per favore inserire un numero maggiore di 1\n");
    } else {
        esci = 1;
    }
    }while(esci == 0);

    for(i = 2; i < numero; i++){
        if((numero % i) == 0){
            verificato++;
        }
    }

    if(numero == 2 || verificato == 0){
        printf("Il numero %d è un numero primo\n", numero);
    } else {
        printf("Il numero %d NON è un numero primo\n", numero);
    }
}