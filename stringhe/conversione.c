#include <stdio.h>
#include <string.h>

int main(){
    const int N = 50;
    char s[N+1];
    int i;

    printf("Inserisci una stringa: ");
    gets(s); //RICORDATI che è necessario solamente il nome dell'array e non anche l'opertore di indicizzazione []

    for(i = 0; s[i] != 0; i++){
        if(s[i] >= 'a' && s[i] <= 'z'){ //RICORDATI di saltare lo spazio visto che è anch'esso un carattere e NON ha un maiuscolo giustamente
            s[i] = s[i] + ('A' - 'a');
        }
    }

    printf("Stringa in maiuscolo: %s\n", s);
}