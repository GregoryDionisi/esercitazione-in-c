#include <stdio.h>

int main(){
    const int N = 100;
    char s[N];
    int i, vocali = 0;

    printf("Inserisci una stringa: ");
    gets(s);

    for(i = 0; i < N; i++){
        if((s[i] == 'a') || (s[i] == 'A') || (s[i] == 'e') || (s[i] == 'E') || (s[i] == 'i') || (s[i] == 'I') || (s[i] == 'o') || (s[i] == 'O') || (s[i] == 'u') || (s[i] == 'U')){
            vocali++;
        }
    }

    printf("La stringa contiene %d vocali\n", vocali);
}