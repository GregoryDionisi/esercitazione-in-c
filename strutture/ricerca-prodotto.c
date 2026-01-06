#include <stdio.h>
#include <string.h>
#define N 50

typedef struct{
    char nome[N+1];
    float prezzo;
    int quantita;
} Inventario;

void acquisisciProdotti(Inventario x[], int nmembri);
void stampaProdotti(Inventario x[], int nmembri);
void ricercaProdotto(Inventario x[], int nmembri, char nome[]);

int main(){
    const int n = 3;
    const int Nstringa = 50;
    Inventario i[n];
    char ricercato[Nstringa+1]; //RICORDATI il +1 per il terminatore

    acquisisciProdotti(i, n);
    stampaProdotti(i, n);
    printf("Inserisci il nome del prodotto da cercare: ");
    scanf("%s", ricercato);
    ricercaProdotto(i, n, ricercato);
}

void acquisisciProdotti(Inventario x[], int nmembri){
    int i;

    for(i = 0; i < nmembri; i++){
        printf("Inserisci il nome del prodotto: ");
        scanf("%s", x[i].nome); //IMPORTANTISSIMO: visto che non puoi mischiare gets e scanf insieme qui usiamo solo scanf.
        //IL PROBLEMA però sta nel fatto che non possiamo mettere spazi e in teoria dovremmo usare gets per questo ma appunto non possiamo mischiare
        //QUINDI la soluzione sta nell'usare comunque gets ma dopo lo scanf di prezzo usiamo getchar per pulire il carattere '\n' (invio)
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

void ricercaProdotto(Inventario x[], int nmembri, char nome[]){
    int i, j, pos, diverso;

    do{
        diverso = 0;
        if(strlen(x[i].nome) == strlen(nome)){
            for(j = 0; j < strlen(nome); j++){
                if(x[i].nome[j] != nome[j]){
                    diverso++;
                }
            }
            if(diverso == 0){
                pos = i;
            }
        }
        i++;
    }while(i < nmembri && diverso != 0);

    if(diverso == 0){
        printf("\nDETTAGLI DEL PRODOTTO CERCATO\n");
        printf("Nome del prodotto: %s\n", x[pos].nome);
        printf("Prezzo del prodotto: %f\n", x[pos].prezzo);
        printf("Quantità del prodotto: %d\n", x[pos].quantita);
    } else {
        printf("Il prodotto cercato non è presente nell'inventario\n");
    }
}