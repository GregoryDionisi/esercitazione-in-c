#include <stdio.h>

void scambia(int *p, int *q);

int main(){
    int a, b;

    printf("Inserisci il primo numero: ");
    scanf("%d", &a);
    printf("Inserisci il secondo numero: ");
    scanf("%d", &b);

    printf("Prima dello scambio a = %d e b = %d\n", a, b);
    scambia(&a, &b);
    printf("Dopo lo scambio a = %d e b = %d\n", a, b);
}

void scambia(int *p, int *q){
    //SE VOGLIO SCAMBIARE SOLO A COSA PUNTANO
    /* int *temp;

    temp = p;
    p = q;
    q = temp;

    printf("Ecco il secondo numero inserito scambiato con il primo: %d\n", *p);
    printf("Ecco il primo numero inserito scambiato con il secondo: %d\n", *q); */

    //SE VOGLIO SCAMBIARE I VALORI USANDO I PUNTATORI (meglio fare questo)
    int temp;

    temp = *p;
    *p = *q;
    *q = temp;
}