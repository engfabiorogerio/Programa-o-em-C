/*Fa�a um programa que leia 2 numeros quebrados e imprima na tela o resultado da multiplica��o deles*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	//Declarando Vari�veis
	float a;
	float b;
	//Solicitando dados do usu�rio
	printf("Digite o Primeiro numero:");
	scanf("%f", &a);
	printf("Digite o Segundo numero:");
	scanf("%f", &b);
	//Processamento e Opera��o
	float resposta = a * b;
	//visualiza��o do resultado
	printf("Resposta: %.2f", resposta);
	return 0;	
}
