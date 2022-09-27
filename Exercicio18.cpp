/*Faça um programa que imprima de 50 até 0, diminuindo de 6 em 6*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	//Declarando Variáveis
	int i = 50;
	
	while(i > 0){
		printf("%d \n", i);
		i -= 6; 
	}
	
	printf("FIM!!!");
	
	return 0;
}
