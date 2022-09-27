/*Faça um programa que leia 2 números inteiros e imprima na tela qual é o maior deles ou se são iguais*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	//Declaração de Variáveis
	int a, b;
	
	//Solicitando dados Usuários
	printf("Digite o primeiro numero: ");
	scanf("%d", &a);
	printf("Digite o segundo numero: ");
	scanf("%d", &b);
	
	//Comparação
	if(a > b){
		printf("%d - O número comparado é o maior");
	}else if (b > a){
		printf("%d - O numero comparado é maior");
	}else {
		printf("Os números são iguais");
	}
	
	return 0;
}
