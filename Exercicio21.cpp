/*Faça um programa que mostre a soma de todos os numeros de 0 a 10, 
adicionando o valor atual de i numa variavel SOMA, a cada repetição do laço for*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	//Declaração de Variáveis
	int soma;
	int i;
	
	for(i = 0; i <= 10; i ++){
		printf("%d \n", i);
		
		soma = soma + i;
	}
	
	printf("SOMA: %d", soma);
	
	return 0;
}
