/*Faça um programa que leia um número inteiro e informe se ele é par ou não*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	//Declarando variáveis
	int num;
	
	//Solicitadando dados do usuário
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	//Condicional
	if (num % 2 == 0){
		printf("Numero PAR");
	}else{
		printf("Numero Impar");
	}
	
	return 0;
}
