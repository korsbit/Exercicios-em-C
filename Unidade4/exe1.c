#include <stdio.h>

/*
1. A computação, frequentemente, é utilizada para servir de ferramenta na identifica-
ção de diferenças ou semelhanças entre objetos. Dessa forma, faça um programa
que leia dois vetores A e B e apresente a quantidade de posições que possuem
elementos diferentes entre um vetor e outro.
*/

#define TAM 5

int main() {
    int A[TAM] = {2, 5, 9, 10, 2};
    int B[TAM] = {2, 5, 0, -1, 2};
    int count = 0; /* Contador de diferenças */
    
    for (int i = 0; i < TAM; i++) {
        if (A[i] != B[i]) {
            count += 1;
        }
    }

    printf("A quantidade de posições que possuem diferenças entre os vetores A e B = %d\n", count);

    return 0;
}