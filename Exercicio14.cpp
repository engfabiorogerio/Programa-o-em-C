/*Fa�a um programa que leia 2 numeros inteiros e imprima na tela se algum for par. */

#include<stdio.h>
#include<stdlib.h>

int main(){
	//Declarando Vari�veis
	int a, b;
	
	//Solicitando dados do usu�rio
	printf("Digite o Primeiro numero: ");
	scanf("%d", &a);
	printf("Digite o Segundo numero: ");
	scanf("%d", &b);
	
	//Compara��o
	if ((a % 2 == 0) || (b % 2 == 0)){
		printf("Condicao OK");
	}else {
		printf("Condicao NOK");
	}
	
	return 0;
}
