#include <stdio.h>

int main() {
    // Declaração de variáveis para o número de movimentos em L
    const int MOVIMENTOS_L = 3;  // Número de vezes que o Cavalo fará o movimento em L
    
    // Variáveis contadoras
    int i;  // Para o loop externo (for)
    int j;  // Para o loop interno (while)

    // Simulação do movimento do Cavalo
    printf("Movimento do Cavalo (em L - para baixo e esquerda):\n");
    
    // Loop externo com for para controlar o número de movimentos completos em L
    for (i = 0; i < MOVIMENTOS_L; i++) {
        printf("Movimento %d:\n", i + 1);
        
        // Primeiro parte do L: duas casas para baixo
        j = 0;
        while (j < 2) {  // Loop interno para mover 2 casas para baixo
            printf("Baixo\n");
            j++;
        }
        
        // Segunda parte do L: uma casa para a esquerda
        printf("Esquerda\n");
        
        printf("\n");  // Linha em branco para separar cada movimento completo em L
    }

    return 0;
}