#include <stdio.h>

int main(){
    int banconota, moneta1 = 1, moneta2;

    printf("Scegliere una banconota tra quelle disponibili:\n");
    printf("€5\n€10\n€20\n€50\n");
    scanf("%d", &banconota);

    if((banconota == 5) || (banconota == 10) || (banconota == 20) || (banconota == 50)){
        if((banconota % 2) == 0){
        moneta2 = banconota / 2;
        printf("La banconota inserita viene cambiata con %d monete da 2 euro\n", moneta2);
        } else {
            moneta2 = banconota / 2;    
            printf("La banconota inserita viene cambiata con %d monete da 2 euro e %d moneta da 1 euro\n", moneta2, moneta1);
        }
    } else {
        printf("La cifra inserita è diversa tra quelle disponibili\n");
    }
}