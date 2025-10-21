#include <stdio.h> // Biblioteca padrão de entrada/saída para usar o printf

int main() {
    // Define o número de casas que cada peça irá se mover.
     int MOVIMENTOS_TORRE = 5;
     int MOVIMENTOS_BISPO = 5;
     int MOVIMENTOS_RAINHA = 8;

    // Variáveis de controle para os loops
    int i_bispo = 0;  // Contador para o loop 'while' do Bispo
    int i_rainha = 0; // Contador para o loop 'do-while' da Rainha

    printf("Iniciando simulação de movimentos de xadrez...\n\n");

    // =======================================================
    // 1. Movimento da Torre (usando 'for')
    // =======================================================
    // A Torre deve mover-se 5 casas para a Direita.
    
    printf("--- Movimento da Torre (%d casas para Direita) ---\n", MOVIMENTOS_TORRE);
    
    // O loop 'for' inicializa i=0, executa enquanto i < 5, e incrementa i a cada passo.
    for (int i_torre = 0; i_torre < MOVIMENTOS_TORRE; i_torre++) {
        // Imprime a direção do movimento a cada casa
        printf("Direita\n");
    }

    // =======================================================
    // 2. Movimento do Bispo (usando 'while')
    // =======================================================
    // O Bispo deve mover-se 5 casas na diagonal (Cima, Direita).

    printf("\n--- Movimento do Bispo (%d casas para Cima, Direita) ---\n", MOVIMENTOS_BISPO);
    
    // O loop 'while' continuará executando enquanto a condição for verdadeira.
    while (i_bispo < MOVIMENTOS_BISPO) {
        printf("Cima, Direita\n");
        i_bispo++; 
    }

    // =======================================================
    // 3. Movimento da Rainha (usando 'do-while')
    // =======================================================
    // A Rainha deve mover-se 8 casas para a Esquerda.

    printf("\n--- Movimento da Rainha (%d casas para Esquerda) ---\n", MOVIMENTOS_RAINHA);

    do {
        printf("Esquerda\n");
        i_rainha++;
        
    } while (i_rainha < MOVIMENTOS_RAINHA); // ...e a condição é checada no final.

    printf("\n...Simulação finalizada.\n");

    return 0; // Indica que o programa foi executado com sucesso
}
