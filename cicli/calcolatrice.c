#include <stdio.h>

int main(){
    int a, b, operazione;
    float risultato;

    do{
        printf("Scegli un'operazione tra quelle presenti nel nostro catalogo:\n");
        printf("1. Somma\n2. Sottrazione\n3. Moltiplicazione\n4. Divisione\n5. Esci\n");
        scanf("%d", &operazione);

        if((operazione == 1) || (operazione == 2) || (operazione == 3) || (operazione == 4)){
            printf("Inserisci il primo numero: ");
            scanf("%d", &a);
            printf("Inserisci il secondo numero: ");
            scanf("%d", &b);
        }

        switch(operazione){
            case 1:
            risultato = a + b;
            printf("Il risultato della somma è %f\n", risultato);
            break;
            case 2:
            risultato = a - b;
            printf("Il risultato della sottrazione è %f\n", risultato);
            break;
            case 3:
            risultato = a * b;
            printf("Il risultato della moltiplicazione è %f\n", risultato);
            break;
            case 4:
            risultato = a / (float)b;
            printf("Il risultato della divisione è %f\n", risultato);
            break;
            case 5:
            printf("Grazie per aver scelto il nostro servizio di calcolatrici!\n");
            break;
            default:
            printf("Ha inserito un numero diverso tra quelli presenti. Per favore riprovare\n");
            break;
        }
    } while(operazione != 5);
}