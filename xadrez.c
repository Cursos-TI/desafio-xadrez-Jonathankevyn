#include <stdio.h>

#define BISPO_MOVIMENTO 5
#define TORRE_MOVIMENTO 5
#define RAINHA_PASSOS 8

int main() {
    // Movimentação do Bispo usando "for"
    printf("Movimento do Bispo (Diagonal superior direita):\n");
    for (int i = 1; i <= BISPO_MOVIMENTO; i++) {
        printf("Casa %d na diagonal para direita\n", i);
    }

    // Movimentação da Torre usando "while"
    printf("\nMovimento da Torre (Horizontal direita):\n");
    int torre = 1;
    while (torre <= TORRE_MOVIMENTO) {
        printf("Casa %d na linha reta\n", torre);
        torre++;
    }

    // Movimentação da Rainha usando "do-while"
    printf("\nMovimento da Rainha:\n");
    int passos = 0;
    do {
        printf("Passo %d para a esquerda\n", passos + 1);
        passos++;
    } while (passos < RAINHA_PASSOS);

    return 0;
}