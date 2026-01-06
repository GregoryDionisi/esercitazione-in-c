#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct{
    int minuti;
    int ore;
} Orari;

void generaOrario(int *minuti, int *ore);
int precedeOrario(int minuti1, int ore1, int minuti2, int ore2);
int minutiTrascorsi(int minuti1, int ore1, int minuti2, int ore2);
Orari orarioPrecedente(int minuti, int ore, Orari orario[], int n);
Orari orarioSuccessivo(int minuti, int ore, Orari orario[], int n);

int main(){
    const int N = 10;
    Orari o[N];
    int i, or, m;

    srand(time(NULL));

    for(i = 0; i < N; i++){
        printf("%d° ORARIO\n", i+1);
        generaOrario(&o[i].minuti, &o[i].ore);
        printf("%d:%d\n", o[i].ore, o[i].minuti);
        printf("\n");
    }

    printf("INSERIMENTO DATO ORARIO\n");
    printf("Inserire le ore: ");
    scanf("%d", &or);
    printf("Inserire i minuti: ");
    scanf("%d", &m);

    printf("L'orario immediatamente precedente all'orario %d:%d è: %d:%d\n", or, m, orarioPrecedente(m, or, o, N).ore, orarioPrecedente(m, or, o, N).minuti);
    printf("L'orario immediatamente successivo all'orario %d:%d è: %d:%d\n", or, m, orarioSuccessivo(m, or, o, N).ore, orarioSuccessivo(m, or, o, N).minuti);
}

void generaOrario(int *minuti, int *ore){
    *minuti = rand() % 60;
    *ore = rand() % 24;
}

int precedeOrario(int minuti1, int ore1, int minuti2, int ore2){
    if(ore1 < ore2){
        return 1;
    } else if(ore1 > ore2){
        return 0;
    } else {
        if(minuti1 < minuti2){
            return 1;
        } else {
            return 0;
        }
    }
}

int minutiTrascorsi(int minuti1, int ore1, int minuti2, int ore2){
    int minTrascorsi, minutiConvertiti1, minutiConvertiti2;

    minutiConvertiti1 = ore1 * 60 + minuti1;
    minutiConvertiti2 = ore2 * 60 + minuti2;

    if(minutiConvertiti1 > minutiConvertiti2){
        minTrascorsi = minutiConvertiti1 - minutiConvertiti2; 
    } else {
        minTrascorsi = minutiConvertiti2 - minutiConvertiti1;
    }

    return minTrascorsi;
}

Orari orarioPrecedente(int minuti, int ore, Orari orario[], int n){
    Orari *precedente;
    int i = 0, min, posmin, esci = 0;

    while(i < n && esci == 0){
        if(precedeOrario(minuti, ore, orario[i].minuti, orario[i].ore) == 0){
            min = minutiTrascorsi(minuti, ore, orario[i].minuti, orario[i].ore);
            posmin = i;
            esci++;
        }
        i++;
    }

    for(i = posmin+1; i < n; i++){
        if(precedeOrario(minuti, ore, orario[i].minuti, orario[i].ore) == 0){
            if(minutiTrascorsi(minuti, ore, orario[i].minuti, orario[i].ore) < min){
                min = minutiTrascorsi(minuti, ore, orario[i].minuti, orario[i].ore);
                posmin = i;
            }
        }
    }

    precedente = &orario[posmin]; //RICORDATI di mettere l'operatore di indirizzo

    return *precedente;
}

Orari orarioSuccessivo(int minuti, int ore, Orari orario[], int n){
    Orari *successivo;
    int i = 0, max, posmax, esci = 0;

    while(i < n && esci == 0){
        if(precedeOrario(minuti, ore, orario[i].minuti, orario[i].ore) == 1){
            max = minutiTrascorsi(minuti, ore, orario[i].minuti, orario[i].ore);
            posmax = i;
            esci++;
        }
        i++;
    }

    for(i = posmax+1; i < n; i++){
        if(precedeOrario(minuti, ore, orario[i].minuti, orario[i].ore) == 1){
            if(minutiTrascorsi(minuti, ore, orario[i].minuti, orario[i].ore) < max){
                max = minutiTrascorsi(minuti, ore, orario[i].minuti, orario[i].ore);
                posmax = i;
            }
        }
    }

    successivo = &orario[posmax]; //RICORDATI di mettere l'operatore di indirizzo

    return *successivo;
}