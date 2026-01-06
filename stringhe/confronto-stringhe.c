#include <stdio.h>
#include <string.h>

int main(){
    const int N = 50;
    char s[N+1], c[N+1];
    int i, diverso = 0;

    printf("Inserire la prima stringa: ");
    gets(s);
    printf("Inserire la seconda stringa: ");
    gets(c);

    if(strlen(s) == strlen(c)){
        for(i = 0; s[i] != 0; i++){
            if(s[i] != c[i]){
                diverso++;
            }
        }
        if(diverso == 0){
            printf("Le stringhe sono uguali!\n");
        } else {
            printf("Le stringhe sono diverse!\n");
        }
    } else {
        printf("Le stringhe sono diverse!\n");
    }
}