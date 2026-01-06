#include <stdio.h>
#include <string.h>

int main(){
    const int N = 50;
    char normale[N+1], invertito[N+1];
    int i, len;

    printf("Inserire una stringa: ");
    gets(normale);

    len = strlen(normale);

    for(i = 0; normale[i] != 0; i++){
        invertito[len-1-i] = normale[i]; //RICORDATI sempre di mettere il -1
    }
    invertito[i+1] = 0; //RICORDATI il terminatore da inserire alla fine
    printf("Stringa invertita: %s\n", invertito);

}