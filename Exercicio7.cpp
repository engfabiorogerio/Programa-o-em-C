/*Fa�a um programa que leia 2 LETRAS e imprima elas na tela, uma ao lado da outra */

#include<stdio.h>
#include<stdlib.h>

int main(){
	//Declarando Vari�veis
	char a;
	char b;
	
	//Solicitando dados do Usu�rio
	printf("Digite a primeira letra: ");
	scanf("%c", &a);
	fflush(stdin);
	printf("Digite a segunda letra: ");
	scanf("%c", &b);
	
	//Exibindo o resultado
	printf("Combina��o: %c%c", a, b);
	return 0;
}
