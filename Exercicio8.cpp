/*Fa�a um programa que leia 2 numeros inteiros e impima na tela se a soma deles �:
maior/igual a 10 ou menor que 10*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	//Declarando vari�veis
	int a;
	int b;
	
	//Solicitando dados do usu�rio
	printf("Digite o primeiro n�mero: ");
	scanf("%d", &a);
	printf("Digite o segundo n�mero: ");
	scanf("%d", &b);
	
	//Processamento e Opera��o
	int resposta = a + b;
	printf("Resposta: %d", resposta\n);
	
	//Condi��o
	if(resposta >= 10){
		printf("Maior/igual a 10");
	}else {
		printf("Menor que 10");
	}
	return 0;
}
