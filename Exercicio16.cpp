/*Fa�a um programa de calculadora, que leia 2 valores e mostre as op��es de 
somar e subtrair. Ap�s selecionar a op��o, o resultado ser� mostrado na tela,
baseado em um switch*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	//Declarando vari�veis
	int num1, num2;
	int opcao;
	int resultado;
	
	//Solicitando dados do usu�rio
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
	
	//Condi��o
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
	
	//Sa�da
	printf("Resultado: %d", resultado);
	
	return 0;
}
