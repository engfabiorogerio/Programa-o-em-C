/*Fa�a um programa que mostre a soma de 2 numeros entre 5 e 10, apenas quando os 
2 numeros digitados estiverem no intervalo*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	//Declara��o de Variaveis
	int num1, num2;
	int soma = num1 + num2;
	
	
	
	//Compara��o
	while ((!(num1 >= 5 && num1 <= 10) || !(num2 >=5 && num2 <=10) )){
		//Solicita��o de Dados do usu�rio
	printf("Digite o Primeiro numero: ");
	scanf("%d", &num1);
	printf("Digite o Segundo numero: ");
	scanf("%d", &num1);
		printf("Soma: %d", soma);
	}
	
	return 0;
}
