#include <stdio.h>

// Definição das constantes para os movimentos
#define MOVIMENTOS_TORRE 5
#define MOVIMENTOS_BISPO 5
#define MOVIMENTOS_RAINHA 8
#define MOVIMENTOS_CAVALO 1

// ==========================================================
// FUNÇÕES RECURSIVAS (Torre, Bispo, Rainha)
// ==========================================================

// 1. TORRE (Recursividade - 5 casas para a Direita)
void moverTorreRecursivo(int casasRestantes) {

    // Caso Base: A torre parou
    if (casasRestantes <= 0) {
        return;
    }

    // Ação: Imprime o movimento
    printf("Direita\n");

    // Passo Recursivo: Move para a próxima casa
    moverTorreRecursivo(casasRestantes - 1);
}

// 2. RAINHA (Recursividade - 8 casas para a Esquerda)
void moverRainhaRecursivo(int casasRestantes) {

    // Caso Base: A Rainha parou
    if (casasRestantes <= 0) {
        return;
    }

    // Ação: Imprime o movimento
    printf("Esquerda\n");

    // Passo Recursivo: Move para a próxima casa
    moverRainhaRecursivo(casasRestantes - 1);
}

// 3. BISPO (Recursividade e Loops Aninhados - 5 casas Cima, Direita)
/*
 * Esta função usa a recursividade para controlar as 5 'casas' totais.
 * E usa loops aninhados APENAS para simular a composição da direção diagonal 
 * (um passo vertical e um passo horizontal) dentro de cada movimento recursivo.
 */
void moverBispoRecursivoComLoops(int movimentosRestantes) {

    // Caso Base: O Bispo parou
    if (movimentosRestantes <= 0) {

        return;
    }
    // Ação: Simula 1 movimento diagonal usando loops aninhados
    // Loop mais externo: Movimento Vertical (Cima)
    for (int v = 1; v <= 1; v++) { 
        // Loop mais interno: Movimento Horizontal (Direita)
        for (int h = 1; h <= 1; h++) {
            // Imprime o movimento como "Cima, Direita"
            printf("Cima, Direita\n"); 

        }
    }
    
    // Passo Recursivo: Move para o próximo movimento
    moverBispoRecursivoComLoops(movimentosRestantes - 1);
}

// ==========================================================
// FUNÇÃO COM LOOPS COMPLEXOS E CONTROLE DE FLUXO (Cavalo)
// ==========================================================

// 4. CAVALO (Loops Aninhados Complexos - Apenas 1 movimento em "L")
void moverCavaloComplexo() {
    printf("\n--- Movimento do CAVALO (%d L completo) ---\n", MOVIMENTOS_CAVALO);
    
    // O loop externo agora roda APENAS UMA VEZ para simular 1 movimento 'L'
    for (int i = 0; i < MOVIMENTOS_CAVALO; i++) {
        
        // Loop aninhado: Simula os 3 passos dentro do único movimento 'L'
        for (int j = 0; j < 3; j++) { 
            
            // 1º e 2º passos: Movimento Vertical (Cima)
            if (j < 2) {
                printf("Cima\n");
                // 'continue' garante que o loop interno passe para a próxima iteração
                continue; 
            }
            
            // 3º passo: Movimento Horizontal (Direita) - Finaliza o 'L'
            if (j == 2) {
                printf("Direita\n");

                // 'break' sai do loop aninhado ('j'), finalizando o movimento 'L'.
                // Como o loop externo ('i') roda apenas 1 vez, a função termina logo em seguida.
                break; 
            }
        }
    }
}


// ==========================================================
// FUNÇÃO PRINCIPAL
// ==========================================================

int main() {
    printf("==========================================\n");
    printf("     SIMULADOR DE XADREZ\n");
    printf("==========================================\n");

    // --- TORRE ---
    printf("\n--- INÍCIO: MOVIMENTO DA TORRE ---\n");
    printf("Movendo %d casas para a Direita (Recursivo):\n", MOVIMENTOS_TORRE);
    moverTorreRecursivo(MOVIMENTOS_TORRE);
    printf("--- FIM: MOVIMENTO DA TORRE ---\n");

    // --- RAINHA ---
    printf("\n--- INÍCIO: MOVIMENTO DA RAINHA ---\n");
    printf("Movendo %d casas para a Esquerda (Recursivo):\n", MOVIMENTOS_RAINHA);
    moverRainhaRecursivo(MOVIMENTOS_RAINHA);
    printf("--- FIM: MOVIMENTO DA RAINHA ---\n");

    // --- BISPO ---
    printf("\n--- INÍCIO: MOVIMENTO DO BISPO ---\n");
    printf("Movendo %d diagonais Cima, Direita (Recursivo + Loops Aninhados):\n", MOVIMENTOS_BISPO);
    moverBispoRecursivoComLoops(MOVIMENTOS_BISPO);
    printf("--- FIM: MOVIMENTO DO BISPO ---\n");

    // --- CAVALO ---
    printf("\n--- INÍCIO: MOVIMENTO DO CAVALO ---\n");
    printf("Simulando 1 Movimento 'L' (Loops Aninhados Complexos):\n");
    moverCavaloComplexo();
    printf("--- FIM: MOVIMENTO DO CAVALO ---\n");

    printf("\n==========================================\n");
    printf("          FIM DA SIMULAÇÃO\n");
    printf("==========================================\n");
    
    return 0;
}