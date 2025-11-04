#include <stdio.h>

int main (){

    // 1. Simulação da TORRE (5 casas para a Direita) - Usando 'for'
    for (int i = 0; i < 5; i++) // Declaração local de 'i' para o loop
    {
        printf("Direita\n"); // Imprime a direção do movimento 5 vezes
    }

    // 2. Simulação do BISPO (5 casas Cima, Direita) - Usando 'while'
    int bispo = 1;
    while (bispo <= 5)
    {
        printf("Cima, Direita\n"); // Imprime a direção diagonal 5 vezes
        bispo++;
    }

    // 3. Simulação da RAINHA (8 casas para a Esquerda) - Usando 'do-while'
    int rainha = 1;
    
    // O 'if' para 'rainha > 0' é desnecessário neste caso, 
    // pois 'rainha' é inicializado como 1. 
    // O 'do-while' executa pelo menos uma vez e depois verifica a condição.
    do
    {
        printf("Esquerda\n"); // Imprime a direção 8 vezes
        rainha++;
    } while (rainha <= 8);

    // O 'else' e a mensagem "A Rainha não se moveu..." foram removidos para simplificar,
    // já que o requisito original era apenas simular 8 movimentos.
    
    return 0;
}