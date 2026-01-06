#include <stdio.h>
#include <string.h>

int main(){
    const int N = 50;
    char normale[N+1], inverso[N+1];
    int i, len, diverso = 0;

    printf("Inserisci una stringa: ");
    gets(normale);

    len = strlen(normale);

    for(i = 0; normale[i] != 0; i++){
        inverso[len-1-i] = normale[i];
    }
    inverso[i+1] = 0;

    for(i = 0; inverso[i] != 0; i++){
        if(inverso[i] != normale[i]){
            diverso++;
        }
    }

    if(diverso == 0){
        printf("La stringa \"%s\" è palindroma\n", normale);
    } else {
        printf("La stringa \"%s\" non è palindroma\n", normale);
    }
}