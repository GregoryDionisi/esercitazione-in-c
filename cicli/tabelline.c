#include <stdio.h>

int main(){
    int numero, i, risultato;

    do{
        printf("Inserisci un numero per visualizzare la tabellina (0 per uscire): ");
        scanf("%d", &numero);

        switch(numero){
            case 0:
            printf("Grazie per aver scelto il nostro servizio per il calcolo delle tabelline!\n");
            break;
            default:
            for(i = 1; i <= 10; i++){
                risultato = numero * i;
                printf("%d x %d = %d\n", numero, i, risultato);
            }
            break;
        }
    }while(numero != 0);
}