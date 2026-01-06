#include <stdio.h>
#include <string.h>
#define N 50

typedef struct{
    char nome[N+1];
    int oreMensili;
    float stipendio;
} Lavoratori;

void acquisisciLavoratori(Lavoratori lavoratore[], int nmembri);
void stampaLavoratori(Lavoratori lavoratore[], int nmembri);
float stipendioMensile(Lavoratori lavoratore[], int nmembri, char ricercato[]);
void stipendioMassimo(Lavoratori lavoratore[], int nmembri);

int main(){
    const int n = 5;
    Lavoratori l[n];
    char r[N+1];

    acquisisciLavoratori(l, n);
    stampaLavoratori(l, n);

    printf("Inserire il nome del lavoratore: ");
    scanf("%s", r);

    printf("Lo stipendio mensile del lavoratore %s è: %f", r, stipendioMensile(l, n, r));
    printf("\n");
    stipendioMassimo(l, n);
}

void acquisisciLavoratori(Lavoratori lavoratore[], int nmembri){
    int i;

    for(i = 0; i < nmembri; i++){
        printf("Inserisci il nome: ");
        scanf("%s", lavoratore[i].nome);
        printf("Inserisci le ore mensili: ");
        scanf("%d", &lavoratore[i].oreMensili);
        printf("Inserisci lo stipendio orario: ");
        scanf("%f", &lavoratore[i].stipendio);
        printf("\n");
    }
}

void stampaLavoratori(Lavoratori lavoratore[], int nmembri){
    int i;

    for(i = 0; i < nmembri; i++){
        printf("Nome: %s\n", lavoratore[i].nome);
        printf("Ore mensili: %d\n", lavoratore[i].oreMensili);
        printf("Stipendio orario: %f\n", lavoratore[i].stipendio);
        printf("\n");
    }
}

float stipendioMensile(Lavoratori lavoratore[], int nmembri, char ricercato[]){
    int i = 0, j, diverso;
    float stipendio;

    do{
        diverso = 0;
        if(strlen(ricercato) == strlen(lavoratore[i].nome)){
            for(j = 0; j < strlen(ricercato); j++){
                if(ricercato[j] != lavoratore[i].nome[j]){
                    diverso = 1;
                }
            }
        } else {
            diverso = 1;
        }
        if(diverso == 0){
            stipendio = lavoratore[i].stipendio * lavoratore[i].oreMensili;
        }
        i++;
    }while(diverso == 1 && i < nmembri);

    if(i >= nmembri && diverso == 1){
        return 0;
    } else {
        return stipendio;
    }
}

void stipendioMassimo(Lavoratori lavoratore[], int nmembri){
    float massimo = stipendioMensile(lavoratore, nmembri, lavoratore[0].nome);
    int i, pos;

    for(i = 1; i < nmembri; i++){
        if(stipendioMensile(lavoratore, nmembri, lavoratore[i].nome) > massimo){
            massimo = stipendioMensile(lavoratore, nmembri, lavoratore[i].nome);
            pos = i;
        }
    }

    printf("PERSONA CON LO STIPENDIO MENSILE MAGGIORE\n");
    printf("Nome: %s\n", lavoratore[pos].nome);
    printf("Stipendio mensile: %f\n", massimo);
}