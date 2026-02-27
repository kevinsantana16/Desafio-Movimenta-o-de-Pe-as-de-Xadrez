#include <stdio.h>
#include <string.h>

/* ===== FUNÇÕES RECURSIVAS ===== */

/* Torre: Move em linha reta horizontal para a direita usando recursividade */
void mover_torre(int passos_restantes, int passo_atual) {
    /* Condição de parada (caso base) da recursão */
    if (passos_restantes == 0) {
        return;
    }
    
    /* Imprime a direção do movimento */
    printf("Passo %d: Direita\n", passo_atual);
    
    /* Chamada recursiva com um passo a menos */
    mover_torre(passos_restantes - 1, passo_atual + 1);
}

/* Bispo: Move na diagonal (cima-direita) usando recursividade */
void mover_bispo(int passos_restantes, int passo_atual) {
    /* Condição de parada (caso base) da recursão */
    if (passos_restantes == 0) {
        return;
    }
    
    /* Imprime a combinação de direções (diagonal) */
    printf("Passo %d: Cima, Direita\n", passo_atual);
    
    /* Chamada recursiva com um passo a menos */
    mover_bispo(passos_restantes - 1, passo_atual + 1);
}

/* Rainha: Move em linha reta para a esquerda usando recursividade */
void mover_rainha(int passos_restantes, int passo_atual) {
    /* Condição de parada (caso base) da recursão */
    if (passos_restantes == 0) {
        return;
    }
    
    /* Imprime a direção do movimento */
    printf("Passo %d: Esquerda\n", passo_atual);
    
    /* Chamada recursiva com um passo a menos */
    mover_rainha(passos_restantes - 1, passo_atual + 1);
}

int main(void) {
    printf("╔════════════════════════════════════════════════════════╗\n");
    printf("║     SIMULAÇÃO AVANÇADA DE MOVIMENTOS DE XADREZ         ║\n");
    printf("║      (Recursividade e Loops Complexos)                ║\n");
    printf("╚════════════════════════════════════════════════════════╝\n\n");

    /* ===== MOVIMENTO DA TORRE (usando RECURSIVIDADE) ===== */
    printf("TORRE - Movendo 5 casas para a DIREITA (Recursividade):\n");
    printf("────────────────────────────────────────────────────────\n");
    
    /* Chama a função recursiva da torre com 5 passos */
    mover_torre(5, 1);
    printf("\n");

    /* ===== MOVIMENTO DO BISPO (usando RECURSIVIDADE) ===== */
    printf("BISPO - Movendo 5 casas DIAGONAL CIMA-DIREITA (Recursividade):\n");
    printf("────────────────────────────────────────────────────────\n");
    
    /* Chama a função recursiva do bispo com 5 passos */
    mover_bispo(5, 1);
    printf("\n");

    /* ===== MOVIMENTO DO BISPO COM LOOPS ANINHADOS ===== */
    printf("BISPO - Movendo DIAGONAL CIMA-DIREITA (Loops Aninhados):\n");
    printf("────────────────────────────────────────────────────────\n");
    
    /* Implementação com loops aninhados: loop externo (vertical) e interno (horizontal) */
    int passo_bispo_loops = 1;
    int linhas = 5;  /* Movimento vertical (5 casas) */
    
    for (int linha = 0; linha < linhas; linha++) {
        /* Loop interno: uma casa horizontal por linha */
        for (int coluna = 0; coluna < 1; coluna++) {
            printf("Passo %d: Cima, Direita\n", passo_bispo_loops);
            passo_bispo_loops++;
        }
    }
    printf("\n");

    /* ===== MOVIMENTO DA RAINHA (usando RECURSIVIDADE) ===== */
    printf("RAINHA - Movendo 8 casas para a ESQUERDA (Recursividade):\n");
    printf("────────────────────────────────────────────────────────\n");
    
    /* Chama a função recursiva da rainha com 8 passos */
    mover_rainha(8, 1);
    printf("\n");

    /* ===== MOVIMENTO DO CAVALO (usando LOOPS ANINHADOS COMPLEXOS) ===== */
    printf("CAVALO - Movendo em L (2 casas CIMA + 1 casa DIREITA):\n");
    printf("────────────────────────────────────────────────────────\n");
    printf("(Loops aninhados com break/continue)\n\n");
    
    /* Loops aninhados complexos com múltiplas variáveis e condições */
    int passo_cavalo = 1;
    int movimento_vertical = 2;    /* 2 casas para cima */
    int movimento_horizontal = 1;  /* 1 casa para direita */
    int movimentos_totais = movimento_vertical + movimento_horizontal;
    
    /* Loop externo: controla as duas fases do movimento em L */
    for (int fase = 0; fase < 2; fase++) {
        int passos_fase = (fase == 0) ? movimento_vertical : movimento_horizontal;
        
        /* Loop interno: controla cada passo dentro da fase */
        int contador_passos = 0;
        while (contador_passos < passos_fase) {
            /* Condição para continuar ou parar */
            if (passo_cavalo > movimentos_totais) {
                break;  /* Sai do loop se ultrapassou o número total de passos */
            }
            
            /* Imprime a direção baseada na fase */
            if (fase == 0) {
                printf("Passo %d: Cima\n", passo_cavalo);
            } else if (fase == 1) {
                printf("Passo %d: Direita\n", passo_cavalo);
            }
            
            contador_passos++;
            passo_cavalo++;
            
            /* Usa continue para demonstrar controle de fluxo */
            if (contador_passos < passos_fase) {
                continue;  /* Continua o loop interno */
            }
        }
    }
    printf("\n");

    printf("╔════════════════════════════════════════════════════════╗\n");
    printf("║              SIMULAÇÃO FINALIZADA COM SUCESSO          ║\n");
    printf("╚════════════════════════════════════════════════════════╝\n");

    return 0;
}
