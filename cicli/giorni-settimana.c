#include <stdio.h>

int main(){
    int giorno;

    do{
        printf("Inserisci un numero da 1 a 7 (0 per uscire): ");
        scanf("%d", &giorno);
        switch(giorno){
            case 0:
            printf("Grazie per aver scelto il nostro servizio sui giorni settimanali!\n");
            break;
            case 1:
            printf("Lunedì\n");
            break;
            case 2:
            printf("Martedì\n");
            break;
            case 3:
            printf("Mercoledì\n");
            break;
            case 4:
            printf("Giovedì\n");
            break;
            case 5:
            printf("Venerdì\n");
            break;
            case 6:
            printf("Sabato\n");
            break;
            case 7:
            printf("Domenica\n");
            break;
            default:
            printf("Ha inserito un numero diverso tra quelli disponibili. Per favore riprovare\n");
            break;
        }
    } while(giorno != 0);
}
