#include <stdio.h>

#define PI 3.14

/*
5. Escreva um programa que, dado o raio de um círculo, calcule sua área e o perímetro. A
área é a superfície do objeto, dada por A = πt2, e o perímetro é a medida do contorno
do objeto dado por P = 2πr^2. Dica: utilize as funções intrínsecas vistas nesta unidade.

Obs:
    P = 2πr^2 ta errado, o certo seria P = 2πr
*/

int main() {
    float raio, perimetro, area;

    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);

    area = PI * (raio * raio);
    perimetro = 2 * PI * raio; // Seria 2 * PI * (raio * raio) caso a fórmula do enunciado estivesse correta

    printf("A área do círculo de raio %f é = %f\n", raio, area);
    printf("O perimetro do círculo de raio %f = %f\n", raio, perimetro);

    return 0;
}