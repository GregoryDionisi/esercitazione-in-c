#include <stdio.h>
#define N 50

typedef struct{
    char nome[N+1];
    float prezzo;
    int quantita;
} Inventario;

void acquisisciProdotti(Inventario x[], int nmembri);
void stampaProdotti(Inventario x[], int nmembri);

int main(){
    const int n = 3;
    Inventario i[n];

    acquisisciProdotti(i, n);
    stampaProdotti(i, n);
}

void acquisisciProdotti(Inventario x[], int nmembri){
    int i;

    for(i = 0; i < nmembri; i++){
        printf("Inserisci il nome del prodotto: ");
        scanf("%s", x[i].nome);
        printf("Inserisci il prezzo del prodotto: ");
        scanf("%f", &x[i].prezzo);
        printf("Inserisci la quantità del prodotto: ");
        scanf("%d", &x[i].quantita);
        printf("\n");
    }
}

void stampaProdotti(Inventario x[], int nmembri){
    int i;

    for(i = 0; i < nmembri; i++){
        printf("Nome del prodotto: %s\n", x[i].nome);
        printf("Prezzo del prodotto: %f\n", x[i].prezzo);
        printf("Quantità del prodotto: %d\n", x[i].quantita);
        printf("\n");
    }
}