#include <stdio.h>

int main() {
    // =======================
    // Simulação da TORRE
    // =======================
    // A Torre move-se em linha reta — vamos movê-la 5 casas para a direita.
    int i; // contador
    printf("Movimento da TORRE:\n");

    for (i = 1; i <= 5; i++) { // estrutura de repetição: FOR
        printf("Direita (%d)\n", i);
    }

    printf("\n"); // linha em branco para separar as peças

    // =======================
    // Simulação do BISPO
    // =======================
    // O Bispo move-se na diagonal — vamos movê-lo 5 casas na diagonal para cima e à direita.
    int contadorBispo = 1;
    printf("Movimento do BISPO:\n");

    while (contadorBispo <= 5) { // estrutura de repetição: WHILE
        printf("Cima, Direita (%d)\n", contadorBispo);
        contadorBispo++;
    }

    printf("\n"); // linha em branco para separar as peças

    // =======================
    // Simulação da RAINHA
    // =======================
    // A Rainha pode se mover em todas as direções — aqui, ela vai 8 casas para a esquerda.
    int contadorRainha = 1;
    printf("Movimento da RAINHA:\n");

    do { // estrutura de repetição: DO-WHILE
        printf("Esquerda (%d)\n", contadorRainha);
        contadorRainha++;
    } while (contadorRainha <= 8);

    // =======================
    // Fim do programa
    // =======================
    printf("\nSimulação concluída!\n");

    return 0;
}