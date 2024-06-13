#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número para iniciar a contagem regressiva: \n");
    scanf("%d", &numero);

    
    for (int i = numero; i >= 0; i--) {
        printf("%d\n", i);
    }

    return 0;
}