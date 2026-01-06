#include <stdio.h>
#include <string.h>

void generaAcronimo(char stringa[], char stringa1[]);

int main(){
    const int N = 200;
    char frase[N+1], acronimo[N+1];

    printf("Inserire una frase: ");
    gets(frase);

    generaAcronimo(frase, acronimo);
    printf("L'acronimo è: %s\n", acronimo);
}

void generaAcronimo(char stringa[], char stringa1[]){
    int i = 0, j = 0;

    if(stringa[i] >= 'a' && stringa[i] <= 'z'){
        stringa1[j] = stringa[i] + ('A' - 'a');
        j++;
    } else {
        stringa1[j] = stringa[i];
        j++;
    }

    for(i = i+1; i < strlen(stringa); i++){
        if(stringa[i] == ' '){
            if(stringa[i+1] >= 'a' && stringa[i+1] <= 'z'){
                stringa1[j] = stringa[i+1] + ('A' - 'a');
                j++;
            } else {
                stringa1[j] = stringa[i+1];
                j++;
            }
        }
    }
}