/*Fa�a umn programa que leia 3 numeros inteiros e imprima na tela se os 3 s�o maiores que 10*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	//Declarando vari�veis
	int a, b, c;
	
	//Solicitando dados do usuario
	printf("Digite o primeiro numero: ");
	scanf("%d", &a);
	printf("Digite o segundo numero: ");
	scanf("%d", &b);
	printf("Digite o terceiro numero: ");
	scanf("%d", &c);
	
	//Condi��o
	if(a > 10 && b > 10 && c > 10){
		printf("Condi��o atingida OK");
	}else {
		printf("condi��o nao atingida NOK");
	}
	
	return 0;
}
