#include <stdio.h>

int main(){
    int k, n, m;

    printf("Scrivi il numero di stelle visibili in una porzione di cielo in questo momento:\n");
    scanf("%d", &n);
    printf("Scrivi il numero di stelle che lo strumento è in grado di osservare contemporaneamente:\n");
    scanf("%d", &k);

    if(k >= n){
        m = 1;
        printf("Il numero di osservazioni necessarie per osservare tutte le stelle nel cielo è %d\n", m);
    } else {
        m = n / k;
        if((n % k) == 0){
            printf("Il numero di osservazioni necessarie per osservare tutte le stelle nel cielo è %d\n", m);
        } else {
            m++;
            printf("Il numero di osservazioni necessarie per osservare tutte le stelle nel cielo è %d\n", m);
        }
    }
}