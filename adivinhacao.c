#include <stdio.h>

int main() {
    // imprime o cabecalho do nosso jogo
    printf("****************************************\n");  
    printf("*Bem vindo ao nosso jogo de adivinhação*\n");
    printf("****************************************\n");

    int numerosecreto = 42;

    int chute;
    //printf( "O numero %d e o secreto. Nao conta pra ninguem!\n", numerosecreto);

    printf("Qual e o seu chute? " );
    scanf("%d", &chute);
    printf("Seu chute foi %d", chute);

    if(numerosecreto == chute) {
        printf("Parabens! Voce acertou!\n");
        printf("Jogue de novo, voce e um bom jogador!\n");
    }
    else {
        if(chute > numerosecreto) {
            printf("Seu chute foi maior que o numero secreto\n");
        }

        if(chute < numerosecreto) {
            printf("Seu chute foi menor que o numero secreto\n");
        }

        /*printf("Voce errou!\n");
        printf("Mas nao desanime, tente de novo!\n");*/
    }
}