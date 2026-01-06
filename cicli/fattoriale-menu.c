#include <stdio.h>

int main(){
    int numero, scelta, i;
    double risultato = 0; //RICORDATI di mettere il double per numeri potenzialmente molto grandi

    do{
        printf("Scegli un'opzione tra quelle disponibili:\n");
        printf("1. Calcola il fattoriale\n2. Visualizza il risultato\n3. Esci\n");
        scanf("%d", &scelta);

        switch(scelta){
            case 1:
            printf("Inserire un numero: ");
            scanf("%d", &numero);
            risultato = numero;
            for(i = numero - 1; i > 0; i--){
                risultato = risultato * i;
            }
            break;
            case 2:
            if(risultato == 0){
                printf("Per visualizzare il risultato è necessario prima calcolare il fattoriale scegliendo l'opzione 1 dal menu\n");
            } else {
                printf("Il risultato del fattoriale di %d è %g\n", numero, risultato);
            }
            break;
            case 3:
            printf("Grazie per aver scelto il nostro servizio per il calcolo del fattoriale!\n");
            break;
            default:
            printf("Ha inserito un'opzione diversa tra quelle presenti. Per favore riprovare\n");
            break;
        }
    } while(scelta != 3);
}