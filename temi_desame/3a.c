#include <stdio.h>

int main(){
    const int N = 50;
    char v[N+1];
    int i, len = 0;

    printf("Inserisci una stringa: ");
    gets(v);

    for(i = 0; v[i] != 0; i++){
        len++;
        if(v[i] >= 'a' && v[i] <= 'z'){
            v[i] = v[i] + ('A' - 'a');
        }
    }

    printf("La lunghezza della stringa è: %d\n", len);
    printf("Ecco la stringa in maiuscolo: %s\n", v);
}