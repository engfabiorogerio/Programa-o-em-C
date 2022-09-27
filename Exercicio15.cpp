/*Faça um programa que leia 2 numeros inteiros e imprima na tela
se a soma deles estiver entre 0 e 10 ou se a soma for par*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	//Declarando Variaveis
	int a, b;
	int soma = a + b;
	
	//Solicitando dados do Usuário
	printf("Digite um numero: ");
	scanf("%d", &a);
	printf("Digite outro numero: ");
	scanf("%d", &b);
	
	//Comparação
	if((soma > 0 && soma <= 10) || (soma % 2 == 0)){
		printf("Condicao OK");
	}else {
		printf("Condicao NOK");
	}
	
	return 0;
}
