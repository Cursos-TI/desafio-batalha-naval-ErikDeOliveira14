#include <stdio.h>

int main(){

    int tabuleiro[10][10];

    // Preenche o tabuleiro com 0 (água)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Posição do navio horizontal (linha 2, colunas 4 a 6)
    int linhaH = 2;
    int colunaH = 4;

    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaH][colunaH + i] = 3;
    }

    // Posição do navio vertical (coluna 6, linhas 6 a 8)
    int linhaV = 6;
    int colunaV = 6;

    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaV + i][colunaV] = 3;
    }

    // Mostrando o tabuleiro
    printf("Tabuleiro de Batalha Naval:\n\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;


    
}