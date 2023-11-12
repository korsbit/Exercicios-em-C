#include <stdio.h>

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