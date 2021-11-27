#include <stdio.h>


int main(){

    printf("****************************************\n");
    printf("*Bem vindo ao nosso jogo de adivinhacao*\n");
    printf("****************************************\n");
    
    int numerosecreto = 42;
    int chute;
    int tentativas = 0;

    while(1) {

        printf("Tentativa %d\n", tentativas+1);
        printf("Qual e o seu chute? ");

        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        if(chute < 0) {
            printf("Voce nao pode chutar numeros negativos!\n");
            continue;
        }

        int acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;

        if(acertou) {
            printf("Parabens! Voce acertou!\n");
            printf("Jogue de novo, voce e um bom jogador!\n");

            break;
        }
        else if(maior) {
            printf("Seu chute foi maior que o numero secreto!\n");
        }else{
            printf("Seu chute foi menor que o numero secreto!\n");
        }
        tentativas++;
  }
        printf("Fim de jogo!\n");
        printf("Voce acertou em %d tentativas!", tentativas+1);
}