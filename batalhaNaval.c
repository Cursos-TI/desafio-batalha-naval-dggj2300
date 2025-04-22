#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    
    //INICIALIZANDO O TABULEIRO
    int i, j;
    int tabuleiro[10][10];

    //PREENCHENDO O TABULEIRO COM 0
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }    

    //DETERMINANDO O TAMANHO E POSIÇÃO DO NAVIO 1
    int linha1 = 1;
    int coluna1 = 3;
    int tamanho1 = 3;

    //VERIFICANDO SE O NAVIO NÃO ULTRAPASSA O TAMANHO DO TABULEIRO
    if (coluna1 + tamanho1 <= 10) {
        int sobreposicao = 0;
        //VERIFICANDO SE O NAVIO NÃO ESTÁ SE SOBREPONDO SOBRE OUTRO
        for (j = coluna1; j < coluna1 + tamanho1; j++) {
            if (tabuleiro[linha1][j] != 0) {
                sobreposicao = 1;
                break;
            }
        }
        //POSICIONANDO O NAVIO PREENCHENDO COM NUMERO 3
        if (sobreposicao == 0) {
            for (j = coluna1; j < coluna1 + tamanho1; j++) {
                tabuleiro[linha1][j] = 3;
            }
        } else {
            printf("Erro: sobreposição detectada no navio 1. \n");
        }
    } else {
        printf("Erro: navio 1 ultrapassa os limites do tabuleiro. \n");
    }

    //DETERMINANDO O TAMANHO E POSIÇÃO DO NAVIO 2
    int linha2 = 4;
    int coluna2 = 0;
    int tamanho2 = 3;

    //VERIFICANDO SE O NAVIO NÃO ULTRAPASSA O TAMANHO DO TABULEIRO
    if (linha2 + tamanho2 <= 10) {
        int sobreposicao = 0;
        //VERIFICANDO SE O NAVIO NÃO ESTÁ SE SOBREPONDO SOBRE OUTRO
        for (i = linha2; i < linha2 + tamanho2; i++) {
            if(tabuleiro[i][coluna2] != 0) {
                sobreposicao = 1;
                break;
            }
        }
        //POSICIONANDO O NAVIO PREENCHENDO COM NUMERO 3
        if (sobreposicao == 0) {
            for (i = linha2; i < linha2 + tamanho2; i++) {
                tabuleiro[i][coluna2] = 3;
            }
        } else {
            printf("Erro: sobreposição detectada no navio 2.\n");
        }
    } else {
            printf("Erro: navio 2 ultrapassa os limites do tabuleiro.\n");
    }


    //DETERMINANDO O TAMANHO E POSIÇÃO DO NAVIO 3

    int linha3 = 2;
    int coluna3 = 3;
    int tamanho3 = 3;

    //VERIFICANDO SE O NAVIO NÃO ULTRAPASSA O TAMANHO DO TABULEIRO
    if (linha3 + tamanho3 <= 10 && coluna3 + tamanho3 <= 10) {
        int sobreposicao = 0;

        //VERIFICANDO SE O NAVIO NÃO ESTÁ SE SOBREPONDO SOBRE OUTRO
        for (i = 0; i < tamanho3; i++) {
            if (tabuleiro[linha3 + i][coluna3 + i] != 0) {
                sobreposicao = 1;
                break;
            }
        }
        //POSICIONANDO O NAVIO PREENCHENDO COM NUMERO 3
        if (sobreposicao == 0) {
            for (i = 0; i < tamanho3; i++) {
                tabuleiro[linha3 + i][coluna3 + i] = 3;
            }
        } else {
            printf("Erro: sobreposição detectada no navio diagonal 1. \n");
        }
    } else {
        printf("Erro: navio diagonal 1 ultrapassa os limites do tabuleiro. \n");
    }

    //DETERMINANDO O TAMANHO E POSIÇÃO DO NAVIO 4
    int linha4 = 6;
    int coluna4 = 2;
    int tamanho4 = 3;

    //VERIFICANDO SE O NAVIO NÃO ULTRAPASSA O TAMANHO DO TABULEIRO
    if (linha4 + tamanho4 <= 10 && coluna4 - (tamanho4 - 1) >= 0) {
        int sobreposicao = 0;

        //VERIFICANDO SE O NAVIO NÃO ESTÁ SE SOBREPONDO SOBRE OUTRO
        for (i = 0; i < tamanho4; i++) {
            if (tabuleiro[linha4 + i][coluna4 - i] != 0) {
                sobreposicao = 1;
                break;
            }
        }
        //POSICIONANDO O NAVIO PREENCHENDO COM NUMERO 3
        if (sobreposicao == 0) {
            for (i = 0; i < tamanho4; i++) {
                tabuleiro[linha4 + i][coluna4 - i] = 3;
            }
        } else {
            printf("Erro: sobreposição detectada no navio diagonal 1. \n");
        }
    } else {
        printf("Erro: navio diagonal 1 ultrapassa os limites do tabuleiro. \n");
    }

    //COLOCANDO AS LETRAS NA PARTE DE CIMA DO TABULEIRO
    printf("   ");
    for (j = 0; j < 10; j++) {
        printf("%c", 'A' + j);
    }
    printf("\n");

    //PRINTANDO O TABULEIRO COM A NUMERAÇÃO NA LATERAL
    for (i = 0; i < 10; i++) {
        printf("%2d ", i + 1);
        for (j = 0; j < 10; j++) {
            printf("%d", tabuleiro[i][j]);
        }        
        printf("\n");
    }


    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
