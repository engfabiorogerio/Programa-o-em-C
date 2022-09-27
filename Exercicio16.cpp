/*Faça um programa de calculadora, que leia 2 valores e mostre as opções de 
somar e subtrair. Após selecionar a opção, o resultado será mostrado na tela,
baseado em um switch*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	//Declarando variáveis
	int num1, num2;
	int opcao;
	int resultado;
	
	//Solicitando dados do usuário
	printf("Digite o PRIMEIRO numero: ");
	scanf("%d", &num1);
	printf("Digite o SEGUNDO numero: ");
	scanf("%d", &num2);
	
	//Display
	printf("Menu \n");
	printf("-------------------------- \n");
	printf("1 -> SOMA \n");
	printf("2 -> SUBTRACAO \n");
	printf("-------------------------- \n");
	printf("Escolha a opcao desejada: ");
	scanf("%d", &opcao);
	
	//Condição
	switch (opcao) {
		case 1 :
			resultado = num1 + num2;
			break;
		case 2 :
			resultado = num1 - num2;
			break;
		default :
			printf("Opcao Invalida");
	}
	
	//Saída
	printf("Resultado: %d", resultado);
	
	return 0;
}
