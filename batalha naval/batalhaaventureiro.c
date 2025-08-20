#include <stdio.h>

#define N 10 // tamanho do tabuleiro (10x10)

int main() {
    int tabuleiro[N][N] = {0}; // inicializa tudo com 0

    // Navio 1 (vertical) – começa em (0,0), tamanho 4
    int x1 = 0, y1 = 0;
    int tamanho1 = 4;

    // Navio 2 (horizontal) – começa em (5,2), tamanho 3
    int x2 = 5, y2 = 2;
    int tamanho2 = 3;

    // Navio 3 (diagonal principal) – começa em (2,2), tamanho 4
    int x3 = 2, y3 = 2;
    int tamanho3 = 4;

    // Navio 4 (diagonal secundária) – começa em (7,1), tamanho 3
    int x4 = 7, y4 = 1;
    int tamanho4 = 3;

    printf("Posicionando os navios...\n\n");

    // Navio 1 (vertical)
    for (int i = 0; i < tamanho1; i++) {
        tabuleiro[x1 + i][y1] = 3;
    }

    // Navio 2 (horizontal)
    for (int i = 0; i < tamanho2; i++) {
        tabuleiro[x2][y2 + i] = 3;
    }

    // Navio 3 (diagonal principal - descendo)
    for (int i = 0; i < tamanho3; i++) {
        tabuleiro[x3 + i][y3 + i] = 3;
    }

    // Navio 4 (diagonal secundária - subindo)
    for (int i = 0; i < tamanho4; i++) {
        tabuleiro[x4 - i][y4 + i] = 3;
    }

    // Exibir tabuleiro completo
    printf("Tabuleiro 10x10:\n\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

}
