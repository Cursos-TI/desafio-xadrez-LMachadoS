#include <stdio.h>

int main (){

    printf("\n");
    printf("--------------Torre--------------");
    printf("\n");

    // 1. Simulação da TORRE (5 casas para a Direita) - Usando 'for'
    for (int i = 0; i < 5; i++) // Declaração local de 'i' para o loop
    {
        printf("Direita\n"); // Imprime a direção do movimento 5 vezes
    }

    printf("\n");
    printf("--------------Bispo--------------");
    printf("\n");

    // 2. Simulação do BISPO (5 casas Cima, Direita) - Usando 'while'
    int bispo = 1;
    while (bispo <= 5)
    {
        printf("Cima, Direita\n"); // Imprime a direção diagonal 5 vezes
        bispo++;
    }

    printf("\n");
    printf("--------------Rainha--------------");
    printf("\n");

    // 3. Simulação da RAINHA (8 casas para a Esquerda) - Usando 'do-while'
    int rainha = 1;
    do
    {
        printf("Esquerda\n"); // Imprime a direção 8 vezes
        rainha++;
    } while (rainha <= 8);

    printf("\n");
    printf("--------------CAVALO--------------");
    printf("\n");

    //Simulação do CAVALO (2 casas para Cima 1 para a Direita)
    int cavalo = 1; //controla o movimrnto em L

    while (cavalo--);
    {
        for (int i = 0; i < 2; i++)
        {
            printf("Cima\n"); //cima 2 vezes
        }
        printf("Direita\n"); //direita 1 vez
    }
    
    
    return 0;
}