/*Fa�a um programa que leia 2 numeros inteiros e imprima na tela se algum deles � maior que 10*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	//Declarando variaveis
	int a, b;
	
	//Solicitando Dados do Usuario
	printf("Digite numeros para comparacao: ");
	scanf("%d %d", &a, &b);
	
	//Compara��o
	if(a > 10 || b >10){
		printf("Condicao OK");
	}else {
		printf("Condicao NOK");
	}
	
	return 0;
}
