#include <stdio.h>

/*
1. É comum, em uma aplicação, ter de determinar quais números são o maior ou o
menor, dentre todos os valores de um conjunto de dados. Assim sendo, escreva
um programa que receba cinco números inteiros e apresente o maior e o menor.
*/

int main() {
    int numero1, numero2, numero3, numero4, numero5;
    int menorValor, maiorValor;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &numero1);

    printf("\nDigite o segundo número inteiro: ");
    scanf("%d", &numero2);

    printf("\nDigite o terceiro número inteiro: ");
    scanf("%d", &numero3);

    printf("\nDigite o quarto número inteiro: ");
    scanf("%d", &numero4);

    printf("\nDigite o quinto número inteiro: ");
    scanf("%d", &numero5);

    /*
        Decidir o menor valor
    */
    if (numero1 < numero2) {
        menorValor = numero1;
    } else {
        menorValor = numero2;
    }

    if (numero3 < menorValor) {
        menorValor = numero3;
    }

    if (numero4 < menorValor) {
        menorValor = numero4;
    }

    if (numero5 < menorValor) {
        menorValor = numero5;
    }

    /*
        Decidir o maior valor
    */
    if (numero1 > numero2) {
        maiorValor = numero1;
    } else {
        maiorValor = numero2;
    }

    if (numero3 > maiorValor) {
        maiorValor = numero3;
    }

    if (numero4 > maiorValor) {
        maiorValor = numero4;
    }

    if (numero5 > maiorValor) {
        maiorValor = numero5;
    }

    printf("O menor valor é = %d\n", menorValor);
    printf("O maior valor é = %d\n", maiorValor);

    return 0;
}