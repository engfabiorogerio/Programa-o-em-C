/*Fa�a um programa que mostre a soma de todos os numeros de 0 a 10, 
adicionando o valor atual de i numa variavel SOMA, a cada repeti��o do la�o for*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	//Declara��o de Vari�veis
	int soma;
	int i;
	
	for(i = 0; i <= 10; i ++){
		printf("%d \n", i);
		
		soma = soma + i;
	}
	
	printf("SOMA: %d", soma);
	
	return 0;
}
