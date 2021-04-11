#include<stdio.h>
#include<stdlib.h>

int main (void) {

    int dia, ano, mes_atual, ano_atual, op2;
    double mes, op1;

    printf("Digite seu aniversario comecando pelo ano, mes e por fim dia \n");
    scanf("%i", &ano);
    scanf("%i", &mes);
    scanf("%i", &dia);

    printf("Digite em que mes e ano estamos (apenas numeros);\n");
    scanf("%i", &mes_atual);
    scanf("%i", &ano_atual);

    op1 =  (ano_atual - ano)*365 + (mes*30) + dia - (mes_atual*30) ; //calcular o valor total em de dias
    op2 = op1/365; // transformar o valor de dias em anos

    printf("Voce tem %i anos! um total de %.0lf dias de vida.\n", op2, op1);

    if(op2>=18) {
        printf("Voce e de maior!");
    }

    return 0;
}