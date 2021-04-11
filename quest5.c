#include<stdio.h>
#include<stdlib.h>

int main(void) {
    double a, b, c;

    printf("Digite o valor de a (sendo positivo e maior que zero):\n");
    scanf("%lf", &a);

    printf("Digite o valor de b (sendo positivo e maior que zero):\n");
    scanf("%lf", &b);

    printf("Digite o valor de c (sendo positivo e maior que zero):\n");
    scanf("%lf", &c);



    if (a>b+c || b>c+a || c>b+a ||a<0 || b<0 || c<0) {
        printf("Nao e um triangulo");   
    }

    else if(a==b && b==c) {
       printf("E um triangulo equilatero"); 
    }

    else if(a==b || b==c || c==a) {
        printf("E um triangulo isosceles");
    }

    else if (a!=b && a!=c && c!=b) {
        printf("E um triangulo escaleno");
    }

    else if (a>b+c || b>c+a || c>b+a ||a<0 || b<0 || c<0) {
        printf("Nao e um triangulo");   
    }

    else {
        printf("Ocorreu algum erro, tente novamente!");
    }
    return 0;
}