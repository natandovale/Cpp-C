#include <stdio.h>

int main(){

    printf("****************************************\n");
    printf("*Bem vindo ao nosso jogo de adivinhacao*\n");
    printf("****************************************\n");

    int numeroSecreto = 42;
    int chute;

    printf("Qual e o seu chute? \n");
    scanf("%d", &chute);

    printf("Seu chute foi %d \n", chute);

    if(chute == numeroSecreto){
    	printf("Parabens você acertou!\n");
    }else{
    	printf("Você errou!");
    }
}