/*Fa�a um programa que imprima os numeros pares de 10 at� o numero 
informado pelo usu�rio*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	//Declarando variaveis
	int i = 10;
	int j;
	
	//Solicitando dados do usuario
	printf("Digite o limite: ");
	scanf("%d", &j);
	
	//Compara��o
	while(i < j){
		printf("%d \n", i);
		i += 2;
	}
	
	printf("FIM!!!");
	
	return 0;
}
