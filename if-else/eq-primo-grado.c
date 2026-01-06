#include <stdio.h>

int main(){
    int a, b;
    float x;
    printf("Inserisci il primo numero: ");
    scanf("%d", &a);
    printf("Inserisci il secondo numero: ");
    scanf("%d", &b);
    if(a == 0){
        printf("L'equazione non ha soluzione\n");
    } else {
        x = -b/(float)a; //CASTING NECESSARIO sennò è una divisione fra interi (per -b il C fa una conversione implicita)
        /*VARIANTI
        x = (float)-b/a;
        x = (float)-b/(float)a;
        */
       /*COSA NON PUOI FARE
        se x fosse intero NON puoi fare questo:
        (float)x = -b/(float)a
        perchè il casting fa una conversione temporanea e fa una copia di x, che è una l-value e quindi ha una posizione di memoria, che non è assegnabile visto che non ha un indirizzo stabile essendo temporaneo
       */
        printf("L'equazione ha soluzione %f\n", x);
    }
}