#include <stdio.h>

/*
4. Escreva um programa que receba quatro números inteiros, calcule e apresente a mé-
dia aritmética entre eles. Observação: não esqueça de formatar o valor da média no
momento de apresentá-lo, para que sejam impressas apenas duas casas decimais.
*/

int main() {
    int n1, n2, n3, n4;
    float media;

    printf("Digite o valor 1: ");
    scanf("%d", &n1);

    printf("Digite o valor 2: ");
    scanf("%d", &n2);

    printf("Digite o valor 3: ");
    scanf("%d", &n3);

    printf("Digite o valor 4: ");
    scanf("%d", &n4);            

    media = (n1 + n2 + n3 + n4) / 4.0;

    printf("A média aritmética é = %.2f\n", media);

    return 0;
}