#include <stdio.h>

int main() {
    // =======================
    // Simulação da TORRE
    // =======================
    int i;
    printf("Movimento da TORRE:\n");

    for (i = 1; i <= 5; i++) { // estrutura de repetição: FOR
        printf("Direita (%d)\n", i);
    }

    printf("\n");

    // =======================
    // Simulação do BISPO
    // =======================
    int contadorBispo = 1;
    printf("Movimento do BISPO:\n");

    while (contadorBispo <= 5) { // estrutura de repetição: WHILE
        printf("Cima, Direita (%d)\n", contadorBispo);
        contadorBispo++;
    }

    printf("\n");

    // =======================
    // Simulação da RAINHA
    // =======================
    int contadorRainha = 1;
    printf("Movimento da RAINHA:\n");

    do { // estrutura de repetição: DO-WHILE
        printf("Esquerda (%d)\n", contadorRainha);
        contadorRainha++;
    } while (contadorRainha <= 8);

    printf("\n");

    // =======================
    // Simulação do CAVALO
    // =======================
    // Movimento em "L": 2 casas para BAIXO e 1 para ESQUERDA
    // Usaremos um loop FOR (para as duas casas para baixo)
    // e um loop WHILE (para a casa para a esquerda)
    
    int casasBaixo = 2;
    int casasEsquerda = 1;
    int passo = 1;

    printf("Movimento do CAVALO:\n");

    // Primeiro movimento: duas casas para baixo
    for (int j = 1; j <= casasBaixo; j++) {
        printf("Baixo (%d)\n", j);
    }

    // Segundo movimento: uma casa para a esquerda
    while (passo <= casasEsquerda) {
        printf("Esquerda (%d)\n", passo);
        passo++;
    }

    printf("\nSimulação concluída!\n");

    return 0;
}