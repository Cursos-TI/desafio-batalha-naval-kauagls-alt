#include <stdio.h>
#include <stdlib.h>

#define N 7 // tamanho do tabuleiro para exibir padrões (7x7 dá espaço bom)

void imprimirMatriz(int matriz[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    // Matrizes para habilidades (cone, cruz, octaedro)
    int cone[N][N] = {0};
    int cruz[N][N] = {0};
    int octaedro[N][N] = {0};

    int centro = N / 2; // posição central

    // --- Cone ---
    for (int i = 0; i <= centro; i++) {
        for (int j = -i; j <= i; j++) {
            cone[centro + i][centro + j] = 1;
        }
    }

    // --- Cruz ---
    for (int i = 0; i < N; i++) {
        cruz[centro][i] = 1; // linha central
        cruz[i][centro] = 1; // coluna central
    }

    // --- Octaedro ---
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (abs(i - centro) + abs(j - centro) <= centro / 2 + 1) {
                octaedro[i][j] = 1;
            }
        }
    }

    // Exibição
    printf("Habilidade: CONE\n");
    imprimirMatriz(cone);

    printf("Habilidade: CRUZ\n");
    imprimirMatriz(cruz);

    printf("Habilidade: OCTAEDRO\n");
    imprimirMatriz(octaedro);

}
