/*Fa�a um programa que leia 2 n�meros inteiros e imprima na tela o resultado da divis�o deles*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	//Declara��o das Vari�veis
	int a;
	int b;
	//Solicita��o dos dados ao usu�rio
	printf("Digite o Primeiro n�mero:");
	scanf("%d", &a);
	printf("Digite o Segundo n�mero:");
	scanf("%d", &b);
	//Processamento da Opera��o
	float resposta = a / b;
	//Visualiza��o da resposta
	printf("Resposta: %d", resposta);
	return 0;
}
