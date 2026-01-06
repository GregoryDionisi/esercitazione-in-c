#include <stdio.h>

int vocali(char stringa[]);
int stringaLen(char stringa[]);

int main(){
    const int N = 50;
    char s[N+1];
    int i;
    float rapporto;

    printf("Inserisci una stringa: ");
    gets(s);

    printf("Ecco il numero di vocali presenti nella stringa: %d\n", vocali(s));
    printf("Ecco la lunghezza della stringa inserita: %d\n", stringaLen(s));

    rapporto = vocali(s) / (float)stringaLen(s);

    printf("Il rapporto tra il numero di vocali e la lunghezza della stringa è %f\n", rapporto);
}

int vocali(char stringa[]){
    int i, nvocali = 0;

    for(i = 0; stringa[i] != 0; i++){
        if((stringa[i] == 'A') || (stringa[i] == 'E') || (stringa[i] == 'I') || (stringa[i] == 'O') || (stringa[i] == 'U') || (stringa[i] == 'a') || (stringa[i] == 'e') || (stringa[i] == 'i') || (stringa[i] == 'o') || (stringa[i] == 'u')){
            nvocali++;
        }
    }

    return nvocali;
}

int stringaLen(char stringa[]){
    int i, len = 0;

    for(i = 0; stringa[i] != 0; i++){
        len++;
    }

    return len;
}