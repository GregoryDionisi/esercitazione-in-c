#include <stdio.h>

int strlen(char *p); //RICORDATI di mettere char al tipo del puntatore

int main(){
    const int N = 50;
    char s[N+1];
    int len;

    printf("Scrivi una stringa: ");
    gets(s);

    len = strlen(s);

    printf("La lunghezza della stringa è: %d\n", len);
}

int strlen(char *p){
    int i;

    for(i = 0; *p != 0; i++){
        p++;
    }

    return i;
}