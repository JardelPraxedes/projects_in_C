#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void){

    int number1, number2, soma, operacao, operacao2;
    double operacao3, operacao4;

    printf("Digite dois numeros:\n ");
    scanf("%d", &number1);
    scanf("%d", &number2);

    soma = number1 + number2;
    printf("A soma desses numeros e igual a %d:\n", soma);

    operacao = number1*(pow(number2,2));

    printf("O produto do primeiro numero pelo quadrado do segundo e igual a %d:", operacao);

    operacao2 = pow(number1, 2) - pow(number2, 2);

    
    printf("O quadrado do primeiro numero menos o quadrado do segundo e igual a %d:", operacao2);

    operacao3 = sqrt (pow(number1, 2) + pow(number2, 2));

    printf("A raiz quadrada da soma dos quadrados e igual a: %.3lf:", operacao3);

    operacao4 = sin(number1 - number2);

    printf("O seno da diferença do primeiro número pelo segundo é igual a: %.3f", operacao4);

    return 0;
}