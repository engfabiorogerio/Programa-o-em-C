/*Fa�a um programa que leia um n�mero inteiro e imprima na tela se ele est� entre 0 e 10*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	//Declara��o de vari�veis
	int a;
	
	//Solicita��o de dados ao usu�rio
	printf("Digite um numero: ");
	scanf("%d", &a);
	
	//Condi��o
	if(a > 0 && a <= 10){
		printf("%d - Numero DENTRO do Parametro", a);
	}else {
		printf("%d - Numero FORA do parametro", a);
	}
	
	return 0;
}
