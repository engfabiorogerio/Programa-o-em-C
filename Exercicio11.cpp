/*Faça um programa que leia um número inteiro e imprima na tela se ele está entre 0 e 10*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	//Declaração de variáveis
	int a;
	
	//Solicitação de dados ao usuário
	printf("Digite um numero: ");
	scanf("%d", &a);
	
	//Condição
	if(a > 0 && a <= 10){
		printf("%d - Numero DENTRO do Parametro", a);
	}else {
		printf("%d - Numero FORA do parametro", a);
	}
	
	return 0;
}
