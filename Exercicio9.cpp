/*Fa�a um programa que leia 2 n�meros inteiros e imprima na tela qual � o maior deles ou se s�o iguais*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	//Declara��o de Vari�veis
	int a, b;
	
	//Solicitando dados Usu�rios
	printf("Digite o primeiro numero: ");
	scanf("%d", &a);
	printf("Digite o segundo numero: ");
	scanf("%d", &b);
	
	//Compara��o
	if(a > b){
		printf("%d - O n�mero comparado � o maior");
	}else if (b > a){
		printf("%d - O numero comparado � maior");
	}else {
		printf("Os n�meros s�o iguais");
	}
	
	return 0;
}
