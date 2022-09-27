/*Faça um programa que leia 2 numeros inteiros e imprima na tela se algum deles é maior que 10*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	//Declarando variaveis
	int a, b;
	
	//Solicitando Dados do Usuario
	printf("Digite numeros para comparacao: ");
	scanf("%d %d", &a, &b);
	
	//Comparação
	if(a > 10 || b >10){
		printf("Condicao OK");
	}else {
		printf("Condicao NOK");
	}
	
	return 0;
}
