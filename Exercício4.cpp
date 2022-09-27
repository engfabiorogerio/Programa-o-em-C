/*Faça um programa que mostre o resultado da divisão de dois números quebrados 2 mostre apenas 2 casas após a vírgula*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	float a = 5.13;
	float b = 8.19;
	double resposta = a * b;
	printf("Resposta: %.2lf", resposta);
	return 0;
}
