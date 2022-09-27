/*Faça um programa que imprima os numeros pares de 10 até o numero 
informado pelo usuário*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	//Declarando variaveis
	int i = 10;
	int j;
	
	//Solicitando dados do usuario
	printf("Digite o limite: ");
	scanf("%d", &j);
	
	//Comparação
	while(i < j){
		printf("%d \n", i);
		i += 2;
	}
	
	printf("FIM!!!");
	
	return 0;
}
