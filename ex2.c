/*Faça um programa que leia dois valores e exiba o maior valor lido.*/

#include <stdio.h>

int main(){
	int num1, num2;
	printf("Digite o primeiro valor: ");
	scanf("%d",&num1);
	printf("Digite o segundo valor: ");
	scanf("%d",&num2);
	if ( num1 > num2 ){
		printf("%d\n",num1);
	}
	else{
		printf("%d\n",num2);
	}
	return 0;
}
