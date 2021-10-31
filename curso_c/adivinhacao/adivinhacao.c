#include <stdio.h>

//compilador gcc já consta instalado no mac e linux

//imprime cabecalho do nosso jogo
int main(){
	printf("********************************************\n");
	printf("* Bem vindo ao nosso jogo de adivinhação *\n");
	printf("********************************************\n");

	int numerosecreto = 42;

	int chute;

	printf("Qual é o seu chute? ");
	scanf("%d", &chute);
	printf("Seu chute foi %d\n", chute);

	


}
