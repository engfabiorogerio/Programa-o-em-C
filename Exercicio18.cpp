/*Fa�a um programa que imprima de 50 at� 0, diminuindo de 6 em 6*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	//Declarando Vari�veis
	int i = 50;
	
	while(i > 0){
		printf("%d \n", i);
		i -= 6; 
	}
	
	printf("FIM!!!");
	
	return 0;
}
