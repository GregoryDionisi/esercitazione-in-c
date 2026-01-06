#include <stdio.h>

typedef struct{
    int giorno;
    int mese;
    int anno;
} Date;

int confrontoDate(int giorno1, int mese1, int anno1, int giorno2, int mese2, int anno2);
int precedeData(Date data[], int n, int giorno, int mese, int anno);

int main(){
    const int N = 10;
    Date d[N];
    int i, g, m, a;

    for(i = 0; i < N; i++){
        printf("%d° DATA\n", i+1);
        printf("Inserisci il giorno della data: ");
        scanf("%d", &d[i].giorno);
        printf("Inserisci il mese della data: ");
        scanf("%d", &d[i].mese);
        printf("Inserisci l'anno della data: ");
        scanf("%d", &d[i].anno);
    }

    printf("DATA DA CONFRONTARE\n");
    printf("Inserisci il giorno della data da confrontare: ");
    scanf("%d", &g);
    printf("Inserisci il mese della data da confrontare: ");
    scanf("%d", &m);
    printf("Inserisci l'anno della data da confrontare: ");
    scanf("%d", &a);

    printf("\n");
    printf("La quantità di date del calendario che precedono quella da confrontare sono: %d\n", precedeData(d, N, g, m, a));
}

int confrontoDate(int giorno1, int mese1, int anno1, int giorno2, int mese2, int anno2){
    if(anno1 < anno2){
        return 1;
    } else if(anno1 > anno2){
        return 0;
    } else {
        if(mese1 < mese2){
            return 1;
        } else if(mese1 > mese2){
            return 0;
        } else {
            if(giorno1 < giorno2){
                return 1;
            } else {
                return 0;
            }
        }
    }
}

int precedeData(Date data[], int n, int giorno, int mese, int anno){
    int i, precede = 0;

    for(i = 0; i < n; i++){
        if(confrontoDate(data[i].giorno, data[i].mese, data[i].anno, giorno, mese, anno) == 1){
            precede++;
        }
    }

    return precede;
}