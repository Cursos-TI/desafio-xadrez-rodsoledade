#include <stdio.h>

// Função recursiva para o movimento da Torre (5 casas para a direita)
void moverTorre(int casasRestantes) {
    if (casasRestantes > 0) {
        printf("Direita\n");
        moverTorre(casasRestantes - 1);  // Chamada recursiva
    }
}

// Função recursiva para o movimento do Bispo (5 casas na diagonal cima-direita)
void moverBispo(int casasRestantes) {
    if (casasRestantes > 0) {
        // Loop aninhado simulado via recursão
        printf("Cima, Direita\n");
        moverBispo(casasRestantes - 1);  // Chamada recursiva
    }
}

// Função recursiva para o movimento da Rainha (8 casas para a esquerda)
void moverRainha(int casasRestantes) {
    if (casasRestantes > 0) {
        printf("Esquerda\n");
        moverRainha(casasRestantes - 1);  // Chamada recursiva
    }
}

// Função para o movimento do Cavalo (1 vez em L para cima à direita)
void moverCavalo() {
    int passosVerticais = 2;  // Duas casas para cima
    int passosHorizontais = 1;  // Uma casa para a direita
    int contadorV = 0;  // Contador para movimentos verticais
    int contadorH = 0;  // Contador para movimentos horizontais

    // Loop externo para controlar os passos verticais
    for (int i = 0; i <= passosVerticais; i++) {
        // Loop interno aninhado para controlar os passos horizontais
        while (contadorV < passosVerticais || contadorH < passosHorizontais) {
            // Condição múltipla para movimento vertical
            if (contadorV < passosVerticais && contadorH == 0) {
                printf("Cima\n");
                contadorV++;
                continue;  // Volta ao início do while após mover para cima
            }
            // Condição múltipla para movimento horizontal
            if (contadorV == passosVerticais && contadorH < passosHorizontais) {
                printf("Direita\n");
                contadorH++;
                break;  // Termina o while após mover para a direita
            }
        }
        // Para o loop externo após completar o L
        if (contadorV == passosVerticais && contadorH == passosHorizontais) {
            break;
        }
    }
}

int main() {
    // Movimentação da Torre (5 casas para a direita)
    printf("Movimento da Torre:\n");
    moverTorre(5);
    printf("\n");

    // Movimentação do Bispo (5 casas na diagonal cima-direita)
    printf("Movimento do Bispo:\n");
    moverBispo(5);
    printf("\n");

    // Movimentação da Rainha (8 casas para a esquerda)
    printf("Movimento da Rainha:\n");
    moverRainha(8);
    printf("\n");

    // Movimentação do Cavalo (1 vez em L para cima à direita)
    printf("Movimento do Cavalo:\n");
    moverCavalo();

    return 0;
}