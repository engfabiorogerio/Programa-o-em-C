/*Faça um programa que joga 3 dados (6 lados) aleatórios e exibe o resultado 
da soma dos 3 valores gerados na tela*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	srand(time(NULL));
	
	int maximo = 6;
	int minimo = 1;
	
	int r1 = (rand() % (6 - 1 + 1)) + 1;
	int r2 = (rand() % (6 - 1 + 1)) + 1;
	int r3 = (rand() % (6 - 1 + 1)) + 1;
	int resultado = r1 + r2 + r3;
	
	printf("Valores: %d %d %d\n", r1, r2, r3);
	printf("O resultado: %d", resultado);
	
	return 0;
}
