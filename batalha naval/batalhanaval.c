#include <stdio.h>

int main() {
    // Tabuleiro simples 5x5 para exemplo (pode ser maior se quiser)
    int tabuleiro[5][5] = {0};

    // Coordenadas iniciais dos navios
    // Navio 1 (vertical) – começa em (0,0)
    int x1 = 0, y1 = 0;
    int tamanho1 = 3; // navio ocupa 3 posições

    // Navio 2 (horizontal) – começa em (2,2)
    int x2 = 2, y2 = 2;
    int tamanho2 = 4; // navio ocupa 4 posições

    printf("Posicionando os navios...\n\n");

    // Posicionando o navio 1 (vertical)
    printf("Navio Vertical:\n");
    for (int i = 0; i < tamanho1; i++) {
        tabuleiro[x1 + i][y1] = 1; // marca posição no tabuleiro
        printf("(%d, %d)\n", x1 + i, y1);
    }

    printf("\nNavio Horizontal:\n");
    // Posicionando o navio 2 (horizontal)
    for (int i = 0; i < tamanho2; i++) {
        tabuleiro[x2][y2 + i] = 1; // marca posição no tabuleiro
        printf("(%d, %d)\n", x2, y2 + i);
    }

}
