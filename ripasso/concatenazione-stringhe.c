//PROGRAMMA SENZA USARE LA FUNZIONE strcat()
#include <stdio.h>
#include <string.h>

void concatenaStringhe(char stringa1[], char stringa2[]);

int main(){
    const int N = 50;
    char s[N+1], t[N+1];

    printf("Inserisci la prima stringa: ");
    gets(s);
    printf("Inserisci la seconda stringa: ");
    gets(t);

    concatenaStringhe(s, t);
    printf("La stringa concatenata è: %s\n", s);
}

void concatenaStringhe(char stringa1[], char stringa2[]){
    int i, j = strlen(stringa1);

    for(i = 0; stringa2[i] != 0; i++){
        stringa1[j] = stringa2[i];
        j++;
    }
    stringa2[j+1] = 0; //RICORDATI di mettere il terminatore
}