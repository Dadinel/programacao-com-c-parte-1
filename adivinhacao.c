#include <stdio.h>

#define NUMERO_DE_TENTATIVAS 5

int main() {
    // imprime o cabecalho do nosso jogo
    printf("****************************************\n");  
    printf("*Bem vindo ao nosso jogo de adivinhação*\n");
    printf("****************************************\n");

    int numerosecreto = 42;

    int chute;

    for(int i = 1; i <= NUMERO_DE_TENTATIVAS; i++) {
        printf("Tentativa %d de %d\n", i, NUMERO_DE_TENTATIVAS);
        printf("Qual e o seu chute? " );
        scanf("%d", &chute);

        if(chute < 0) {
            printf("Voce nao pode chutar numeros negativos!\n");
            continue;
            i--;
        }

        printf("Seu chute foi %d", chute);

        int acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;
        int menor = chute < numerosecreto;

        if(acertou) {
            printf("Parabens! Voce acertou!\n");
            printf("Jogue de novo, voce e um bom jogador!\n");
            break;
        }
        else if(maior) {
            printf("Seu chute foi maior que o numero secreto\n");
        }
        else (menor) { 
            printf("Seu chute foi menor que o numero secreto\n");
        }
    }

    printf("Fim de jogo!\n");
}