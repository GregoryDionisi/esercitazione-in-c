#include <stdio.h>
#include <stdlib.h>

int main(){
    const int N = 20;
    const int n = 10;
    char *v[n], *massimo; //modo per fare un array di stringhe (array di n puntatori a n stringhe)
    //massimo è un char * e quindi punta già a una stringa
    int i, j, lessicograficamente = 0, esci;

    for(i = 0; i < n; i++){
        v[i] = malloc((N + 1) * sizeof(char));
    }

    for(i = 0; i < n; i++){
        printf("Inserisci una stringa: ");
        scanf("%s", v[i]);
    }
    
    massimo = v[0]; //ricordati di inizializzare il puntatore prima di fare *

    for(i = 0; i < n-1; i++){
        esci = 0;
        j = 0;
        while(j < N && esci == 0){
            if(v[i][j] < v[n-1][j]){
                lessicograficamente++;
                esci++;
            } else if (v[i][j] > v[n-1][j]){
                esci++;
            }
            j++;
        }
    }

    for(i = 1; i < n; i++){
        esci = 0;
        j = 0;
        while(j < N && esci == 0){
            if(v[i][j] > v[i-1][j]){
                massimo = v[i];
                esci++;
            } else if(v[i][j] < v[i-1][j]){
                esci++;
            }
            j++;
        }
    }

    printf("Numero delle parole che lessicograficamente precedono %s: %d\n", v[n-1], lessicograficamente);
    printf("L'ultima parola in ordine lessicografico: %s\n", massimo); //RICORDATI che *massimo stampa solo la prima lettera
}