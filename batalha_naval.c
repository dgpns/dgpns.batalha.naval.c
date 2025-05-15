// batalha_naval.c
#include <stdio.h>

#define TAM_TABULEIRO 10
#define TAM_NAVIO 3
#define VALOR_AGUA 0
#define VALOR_NAVIO 3

int main() {
    // Declaração do tabuleiro 10x10 e inicialização com 0 (água)
    int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO];

    for (int i = 0; i < TAM_TABULEIRO; i++) {
        for (int j = 0; j < TAM_TABULEIRO; j++) {
            tabuleiro[i][j] = VALOR_AGUA;
        }
    }

    // Definição dos navios (valor 3 representa parte de um navio)
    int navio1[TAM_NAVIO] = {VALOR_NAVIO, VALOR_NAVIO, VALOR_NAVIO}; // horizontal
    int navio2[TAM_NAVIO] = {VALOR_NAVIO, VALOR_NAVIO, VALOR_NAVIO}; // vertical

    // Coordenadas iniciais dos navios (definidas diretamente no código)
    int linhaNavio1 = 2, colunaNavio1 = 4; // Navio 1 horizontal
    int linhaNavio2 = 5, colunaNavio2 = 6; // Navio 2 vertical

    // Validação: Verifica se os navios estão dentro dos limites do tabuleiro
    if (colunaNavio1 + TAM_NAVIO <= TAM_TABULEIRO && linhaNavio2 + TAM_NAVIO <= TAM_TABULEIRO) {
        
        // Validação de sobreposição (verifica antes de posicionar)
        int sobreposicao = 0;
        for (int i = 0; i < TAM_NAVIO; i++) {
            if (tabuleiro[linhaNavio1][colunaNavio1 + i] != VALOR_AGUA ||
                tabuleiro[linhaNavio2 + i][colunaNavio2] != VALOR_AGUA) {
                sobreposicao = 1;
                break;
            }
        }

        if (!sobreposicao) {
            // Posicionamento do Navio 1 (horizontal)
            for (int i = 0; i < TAM_NAVIO; i++) {
                tabuleiro[linhaNavio1][colunaNavio1 + i] = navio1[i];
            }

            // Posicionamento do Navio 2 (vertical)
            for (int i = 0; i < TAM_NAVIO; i++) {
                tabuleiro[linhaNavio2 + i][colunaNavio2] = navio2[i];
            }

            // Exibição do tabuleiro
            printf("Tabuleiro:\n\n");
            for (int i = 0; i < TAM_TABULEIRO; i++) {
                for (int j = 0; j < TAM_TABULEIRO; j++) {
                    printf("%d ", tabuleiro[i][j]);
                }
                printf("\n");
            }

        } else {
            printf("Erro: Sobreposição de navios detectada.\n");
        }

    } else {
        printf("Erro: As coordenadas dos navios estão fora dos limites do tabuleiro.\n");
    }

    return 0;
}
