/*Faça um programa que leia 2 números inteiros e imprima na tela o resultado da divisão deles*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	//Declaração das Variáveis
	int a;
	int b;
	//Solicitação dos dados ao usuário
	printf("Digite o Primeiro número:");
	scanf("%d", &a);
	printf("Digite o Segundo número:");
	scanf("%d", &b);
	//Processamento da Operação
	float resposta = a / b;
	//Visualização da resposta
	printf("Resposta: %d", resposta);
	return 0;
}
