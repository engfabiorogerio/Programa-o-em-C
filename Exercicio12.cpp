/*Faça umn programa que leia 3 numeros inteiros e imprima na tela se os 3 são maiores que 10*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	//Declarando variáveis
	int a, b, c;
	
	//Solicitando dados do usuario
	printf("Digite o primeiro numero: ");
	scanf("%d", &a);
	printf("Digite o segundo numero: ");
	scanf("%d", &b);
	printf("Digite o terceiro numero: ");
	scanf("%d", &c);
	
	//Condição
	if(a > 10 && b > 10 && c > 10){
		printf("Condição atingida OK");
	}else {
		printf("condição nao atingida NOK");
	}
	
	return 0;
}
