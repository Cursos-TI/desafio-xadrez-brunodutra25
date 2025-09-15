// Desafio de Xadrez - MateCheck

#include <stdio.h>

int main() {
    //Declaração das variáveis do código
    int bispo=5, torre=5, rainha=8;

    //Bloco de código para a movimentação do bispo 5 casas na diagonal usando a estrutura de repetição "while"
    printf("Movimentação do bispo: \n");
    while (bispo <= 9) {
        printf("Cima direita\n");       //Imprime a direção do movimento
        bispo++;
    }

    //Bloco de código para a movimentação da torre 5 casas para frente usando a estrutura de repetição "do-while"
    printf("\nMovimentação da torre: \n");
    do {
        printf("Frente\n");             //Imprime a direção do movimento
        torre++;
    } while (torre <= 9);


    //Bloco de código para a movimentação da rainha 8 casas para a direita usando a estrutura de repetição "for"
    printf("\nMovimentação da rainha: \n");
    for (int i=0; rainha<=15; rainha++) {
        printf("Direita\n");            //Imprime a direção do movimento
    }

    return 0;
}