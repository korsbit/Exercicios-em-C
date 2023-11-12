#include <stdio.h>

/*
2. É comum que um programa seja capaz de realizar a ordenação de elementos ou
dados de forma a facilitar as operações futuras e a apresentação deste conjunto de
dados. Assim sendo, escreva um programa que leia um vetor A e o apresente em
ordem decrescente.
*/

#define TAM 5

int main() {
    int A[TAM] = {2, -1, -2, 100, 5}; 
    int maiorValor;

    for (int i = 0; i < TAM; i++) {
        maiorValor = A[i];

        for (int j = i + 1; j < TAM; j++) {
            if (maiorValor < A[j]) {
                maiorValor = A[j];
                A[j] = A[i];
                A[i] = maiorValor;
            }
        }
    }

    for (int i = 0; i < TAM; i++) {
        printf("%d\n", A[i]);
    }

    return 0;
}