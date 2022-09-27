/*Faça um programa que leia 2 numeros quebrados e imprima na tela o resultado da multiplicação deles*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	//Declarando Variáveis
	float a;
	float b;
	//Solicitando dados do usuário
	printf("Digite o Primeiro numero:");
	scanf("%f", &a);
	printf("Digite o Segundo numero:");
	scanf("%f", &b);
	//Processamento e Operação
	float resposta = a * b;
	//visualização do resultado
	printf("Resposta: %.2f", resposta);
	return 0;	
}
