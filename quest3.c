#include<stdio.h>
#include<stdlib.h>

int main(void) {
    int xa, xb, ya, yb, distancia;

    printf("Digite os dois valores da coordenada do primeiro ponto: \n");
    scanf("%i", &xa);
    scanf("%i", &ya);

    printf("Digite os dois valores da coordenada do segundo ponto: \n");
    scanf("%i", &xb);
    scanf("%i", &yb);

    distancia = sqrtf(pow((xa-ya),2)+pow((xb-yb),2));

    printf("A distancia entre esses dois pontos e %i", distancia);

    return 0;
}