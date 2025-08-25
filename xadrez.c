#include <stdio.h>



int main() {
    
    // Criação de variáveis
    int torre, bispo, rainha;

    // Movimento da torre
    for (torre = 0; torre < 5; torre++)
    {
        printf("Torre: Direita\n");
    }

    //quebra de linha após o término dos movimentos da peça
    printf("\n");

    // Movimentos do bispo
    bispo = 0;

    while (bispo < 5)
    {
        printf("Bispo: Cima, Direita\n");
        bispo++;
    }

    printf("\n");

    // Movimentos da Rainha
    rainha = 0;

    do
    {
        printf("Rainha: Esquerda\n");
        rainha++;
    } while (rainha < 8);

    printf("\n");
    

    return 0;
}
