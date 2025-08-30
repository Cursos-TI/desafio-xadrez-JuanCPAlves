#include <stdio.h>


int main() {
    int tabuleiro[10][10]; // aqui crianos o tabuleiro
    int i, j;

    // Preenche todo o tabuleiro com 0 (água)
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Posicionando dois navios usando vetores 

    // navio horizontal 
    int naviohorizontal[2] = {2, 3};

    // navio vertical 
    int naviovertical[2] = {5, 7};

    // Coloca o navio horizontal no tabuleiro 
    for (i = 0; i < 3; i++) {
        tabuleiro[naviohorizontal[0]][naviohorizontal[1] + i] = 3;
    }

    // Coloca o navio vertical no tabuleiro 
    for (i = 0; i < 3; i++) {
        tabuleiro[naviovertical[0] + i][naviovertical[1]] = 3;
    } 


    // mostra cada linha com seus valores 
    for (i = 0; i < 10; i++) {
        
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n"); // pular linha no final de cada linha 
    }

    printf("\n\n");

    return 0;

}