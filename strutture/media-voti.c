#include <stdio.h>
#define N 50 //visto che devi subito usare una costante si usa define (che va prima della struttura) invece di const

typedef struct{
    char nome[N+1]; //RICORDATI che essendo una stringa bisogna aggiungere il +1 per il terminatore
    int eta;
    float voto;
} Studente;

void acquisisciStudenti(Studente x[], int nmembri);
void stampaStudenti(Studente x[], int nmembri); //RICORDATI che essendo un array devi mettere nei parametri l'operatore di indicizzazione
float mediaVoti(Studente x[], int nmembri);

int main(){
    const int n = 5;
    Studente s[n];
    float media;

    acquisisciStudenti(s, n);
    stampaStudenti(s, n);
    media = mediaVoti(s, n);
    printf("La media dei voti è: %f\n", media);
}

void acquisisciStudenti(Studente x[], int nmembri){
    int i;

    for(i = 0; i < nmembri; i++){
        printf("Inserisci il nome: ");
        scanf("%s", x[i].nome); //RICORDATI di mettere l'operatore di indicizzazione [i] essendo pur sempre un array
        //RICORDATI inoltre che essendo una stringa non ha bisogno dell'e commerciale &
        printf("Inserisci l'età: ");
        scanf("%d", &x[i].eta);
        printf("Inserisci il voto: ");
        scanf("%f", &x[i].voto);
        printf("\n");
    }
}

void stampaStudenti(Studente x[], int nmembri){
    int i;

    for(i = 0; i < nmembri; i++){
        printf("Nome: %s\n", x[i].nome);
        printf("Età: %d\n", x[i].eta);
        printf("Voto: %f\n", x[i].voto);
        printf("\n");
    }
}

float mediaVoti(Studente x[], int nmembri){
    int i, somma = 0;
    float media;

    for(i = 0; i < nmembri; i++){
        somma += x[i].voto;
    }

    media = somma / (float)nmembri;
    
    return media;
}