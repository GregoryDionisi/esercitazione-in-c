#include <stdio.h>
#include <string.h> //RICORDATI di include string.h per la funzione gets()

int main(){
    const int N = 100;
    char s[N+1]; //RICORDATI SEMPREEEE di mettere il +1 per il terminatore
    int vocali = 0, i;

    printf("Inserisci una stringa: ");
    //scanf("%s", s); //RICORDATI NON ci vanno le parentesi quadre NON ci va l'&
    gets(s); //IMPORTANTE meglio usare gets() visto che non si ferma agli spazi mentre scanf sì

    for(i = 0; s[i] != 0; i++){ //RICORDATI che 0 (che stiamo usando e che è il terminatore) è diverso da '0' carattere che NON è terminatore
    //for(i = 0; s[i] != '\0'; i++) <- ALTERNATIVA visto che anche '\0' è un terminatore e che è più leggibili dal lettore
        if((s[i] == 'a') || (s[i] == 'e') || (s[i] == 'i') || (s[i] == 'o') || (s[i] == 'u')){
            vocali++;
        }
    }

    printf("Numero vocali: %d\n", vocali);
}