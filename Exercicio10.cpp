/*Fa�a um programa que leia um n�mero inteiro e informe se ele � par ou n�o*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	//Declarando vari�veis
	int num;
	
	//Solicitadando dados do usu�rio
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
