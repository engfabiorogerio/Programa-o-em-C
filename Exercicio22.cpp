/*Faça um programa que mostra a tabuada de um numero informado pelo usuario*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	//Declaração Variáveis
	int multiplicador;
	int multiplicando;
	int resultado;
	
	//Solicitando dados do usuario
	printf("Informe o Multiplicador: ");
	scanf("%d", &multiplicador);
	
	//Comparação
	for (multiplicando = 0; multiplicando <= 10; multiplicando ++){
		resultado = multiplicador * multiplicando;
		printf("%d X %d = %d \n", multiplicador, multiplicando, resultado);
	}
	
	printf("FIM!!!");
	
	return 0;
}
