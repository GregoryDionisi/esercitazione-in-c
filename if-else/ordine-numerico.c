#include <stdio.h>

int main(){
    int a, b, c, max, min, mid, temp;

    printf("Inserisci il primo numero: ");
    scanf("%d", &a);
    printf("Inserisci il secondo numero: ");
    scanf("%d", &b);
    printf("Inserisci il terzo numero: ");
    scanf("%d", &c);

    max = a;
    mid = b;
    min = c;

    if(mid > max){
        temp = mid;
        mid = max;
        max = temp;
        if(min > max){
            temp = max;
            max = min;
            min = mid;
            mid = temp;
        } else if(min > mid){
            temp = mid;
            mid = min;
            min = temp;
        }
    } else if(min > max){
        temp = max;
        max = min;
        min = mid;
        mid = temp;
    } else if(min > mid){
        temp = mid;
        mid = min;
        min = temp;
    }
    printf("La sequenza dei tre numeri dati in ordine monotono non decrescente è %d - %d - %d", min, mid, max);
}