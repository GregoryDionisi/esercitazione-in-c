#include <stdio.h>

void modifica(int *p, int x);

int main(){
    int a, b;

    printf("Inserisci un numero: ");
    scanf("%d", &a);
    printf("Inserisci un numero con cui modificare %d: ", a);
    scanf("%d", &b);

    printf("Prima della modifica a = %d\n", a);
    modifica(&a, b);
    printf("Dopo la modifica a = %d\n", a);
}

void modifica(int *p, int x){
    *p = x;
}