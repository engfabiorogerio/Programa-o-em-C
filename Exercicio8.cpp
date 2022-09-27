/*Faça um programa que leia 2 numeros inteiros e impima na tela se a soma deles é:
maior/igual a 10 ou menor que 10*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	//Declarando variáveis
	int a;
	int b;
	
	//Solicitando dados do usuário
	printf("Digite o primeiro número: ");
	scanf("%d", &a);
	printf("Digite o segundo número: ");
	scanf("%d", &b);
	
	//Processamento e Operação
	int resposta = a + b;
	printf("Resposta: %d", resposta\n);
	
	//Condição
	if(resposta >= 10){
		printf("Maior/igual a 10");
	}else {
		printf("Menor que 10");
	}
	return 0;
}
