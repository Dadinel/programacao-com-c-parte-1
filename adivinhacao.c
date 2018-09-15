#include <stdio.h>

int main() {
    // imprime o cabecalho do nosso jogo
    printf("****************************************\n");  
    printf("*Bem vindo ao nosso jogo de adivinha��o*\n");
    printf("****************************************\n");

    int numerosecreto = 42;

    int chute;

    for(int i = 1; i <= 3; i++) {
        printf("Tentativa %d de 3\n", i);
        printf("Qual e o seu chute? " );
        scanf("%d", &chute);
        printf("Seu chute foi %d", chute);

        int acertou = (chute == numerosecreto);

        if(acertou) {
            printf("Parabens! Voce acertou!\n");
            printf("Jogue de novo, voce e um bom jogador!\n");
        }
        else {
            int maior = chute > numerosecreto;

            if(maior) {
                printf("Seu chute foi maior que o numero secreto\n");
            }
            else { 
                printf("Seu chute foi menor que o numero secreto\n");
            }
        }
    }

    printf("Fim de jogo!\n");
}