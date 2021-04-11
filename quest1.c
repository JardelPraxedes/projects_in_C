#include<stdio.h>
#include<stdlib.h>

int main(void){
    float valor_inicial, deci, centi, mili;

    printf("Digite o valor em metros:\n");
    scanf("%f", &valor_inicial);

    deci = valor_inicial * 10;
    centi = valor_inicial * 100;
    mili = valor_inicial * 1000;

    printf("O valor em decimetros = %.0f, em centimetros = %.0f e em milimetros = %.0f", deci, centi, mili);

    return 0;
}
