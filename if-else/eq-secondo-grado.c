#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    float x1, x2, delta;

    printf("Inserire il primo numero: ");
    scanf("%d", &a);
    printf("Inserire il secondo numero: ");
    scanf("%d", &b);
    printf("Inserire il terzo numero: ");
    scanf("%d", &c);

    if(a == 0){
        if(b == 0){
            printf("L'equazione non ha soluzioni\n");
        } else {
            x1 = -b/(float)c;
            printf("L'equazione ha una soluzione %f\n", x1);
        }
    } else {
        delta = b*b - 4*a*c;
        if(delta == 0){
            x1 = (-b + sqrt(delta))/2*a;
            x2 = (-b - sqrt(delta))/2*a;
            printf("L'equazione ha due soluzioni coincidenti %f e %f\n", x1, x2);
        } else if(delta > 0){
            x1 = (-b + sqrt(delta))/2*a;
            x2 = (-b - sqrt(delta))/2*a;
            printf("L'equazione ha due soluzioni distinte %f e %f\n", x1, x2);
        } else {
            printf("L'equazione non ha soluzioni\n");
        }
    }
}