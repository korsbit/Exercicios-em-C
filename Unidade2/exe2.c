#include <stdio.h>

/*
2. Em algumas situações, em uma aplicação, é preciso determinar quais são os
números múltiplos de um ou mais valores, dentre todos os valores de um con-
junto de dados. Dessa forma, faça um programa que leia um número e informe
se ele é divisível por três e por sete.
*/

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero % 3 == 0) {
        printf("O número %d é divisivel por 3!\n", numero);
    }    

    if (numero % 7 == 0) {
        printf("O número %d é divisivel por 7!\n", numero);
    } 

    if ((numero % 3 != 0) && (numero % 7 != 0)) {
        printf("O número %d não é divisivel por 3 e nem por 7!\n", numero);
    }
    
    return 0;
}