#include <stdio.h>

int max(int x, int y);

int main(){
    int a, b, massimo;

    printf("Inserisci il primo numero: ");
    scanf("%d", &a);
    printf("Inserisci il secondo numero: ");
    scanf("%d", &b);

    massimo = max(a, b);
    printf("Il maggiore tra i due numeri è %d\n", massimo);
}

int max(int x, int y){
    int massimo = x;

    if(y > massimo){
        massimo = y;
    }

    return massimo;
}