// Desafio de Xadrez - MateCheck

#include <stdio.h>

//Função para movimentação do Bispo usando a recursividade e loops aninhados
void moverbispo(int casas) {
    if (casas > 0) {
        int vertical = 0;
        while (vertical >= 0) {
            printf("Cima ");            //Loop externo imprime o movimento vertical
            vertical--;
            for (int horizontal = 0; horizontal >= 0; horizontal--) {
                printf("Direita");      //Loop interno imprime o movimento horizontal
            }
            printf("\n");               //Impressão para pular linha para melhor organização do código
        }
        moverbispo(casas - 1);          //Recursividade
    }
}

//Função para movimentação da Torre usando a recursividade
void movertorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");            //Imprime a movimentação da torre
        movertorre(casas - 1);          //Recursividade
    }
}

//Função para movimentação da Rainha usando a recursividade
void moverrainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");           //Imprime a movimentação da rainha
        moverrainha(casas - 1);         //Recursividade
    }
}

//Função para movimentação do cavalo usando loops complexos com comando break e continue
void movercavalo(int casas) {
    if (casas > 0) {
        int h=1;

        while (h<=1) {
            for (int v=1; v<=2; v++) {
                printf("Cima\n");       //Loop interno imprime a movimentação vertical 
                if (v==2){
                break;
            }
        }
        printf("Direita\n");            //Loop externo imprime a movimentação horizontal
        h++;
        if (h==1){
            continue;
        }   
        }
}
}

int main() {
    //Declaração das variáveis com a quantidade de movimentos de cada peça
    int bispo=5, torre=5, rainha=8, cavalo=2;

    //Bloco de código para a movimentação do bispo usando a função "moverbispo"
    printf("Movimentação do bispo: \n");
    moverbispo(bispo);

    //Bloco de código para a movimentação da torre usando a função "movertorre"
    printf("\nMovimentação da torre: \n");
    movertorre(torre);


    //Bloco de código para a movimentação da rainha usando a função "moverrainha"
    printf("\nMovimentação da rainha: \n");
    moverrainha(rainha);

    //Bloco de código para a movimentação em L do cavalo
    printf("\nMovimentação do cavalo: \n");
    movercavalo(cavalo);

    return 0;
}