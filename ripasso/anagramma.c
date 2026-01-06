#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){
    const int N = 20;
    char v[N+1], anagramma[N+1] = {0}; //celle inizializzate a 0
    int i = 0, caso;
    srand(time(NULL));

    printf("Inserisci una stringa: ");
    scanf("%s", v);

    while(v[i] != 0){
        caso = rand() % strlen(v); //RICORDATI che strlen(v) non viene incluso nella randomizzazione
        if(anagramma[caso] == 0){
            anagramma[caso] = v[i];
            i++;
        }
    }

    printf("Anagramma di %s è: %s\n", v, anagramma);
}