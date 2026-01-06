#include <stdio.h>
#include <math.h>

typedef struct{
    int x;
    int y;
} Punti;

float distanza(int xcoord1, int ycoord1, int xcoord2, int ycoord2);

int main(){
    const int N = 5;
    Punti p[N];
    int i, posmin;
    float d[N], min;

    for(i = 0; i < N; i++){
        printf("COORDINATE DEL PUNTO %d\n", i+1);
        printf("Inserire la coordinata x: ");
        scanf("%d", &p[i].x);
        printf("Inserire la coordinata y: ");
        scanf("%d", &p[i].y);
        printf("\n");
    }

    for(i = 0; i < N; i++){
        printf("COORDINATE DEL PUNTO %d\n", i+1);
        printf("x: %d, y: %d\n", p[i].x, p[i].y);
    }
    printf("\n");

    printf("ARRAY CON TUTTE LE DISTANZE\n");
    for(i = 0; i < N; i++){
        d[i] = distanza(p[i].x, p[i].y, 0, 0);
        printf("%f\t", d[i]);
    }
    printf("\n");

    min = d[0];
    posmin = 0;

    for(i = 1; i < N; i++){
        if(d[i] < min){
            min = d[i];
            posmin = i;
        }
    }

    printf("Il punto più vicino all'origine è il punto %d con x: %d e y: %d e con distanza %f\n", posmin+1, p[posmin].x, p[posmin].y, min);
}

float distanza(int xcoord1, int ycoord1, int xcoord2, int ycoord2){
    float distanza;

    distanza = (float)sqrt((xcoord1 - xcoord2) * (xcoord1 - xcoord2) + (ycoord1 - ycoord2) * (ycoord1- ycoord2));

    return distanza;
}