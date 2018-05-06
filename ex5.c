/*Faça um programa que leia números continuamente até que seja digitado 0. 
Ao final, o programa deve exibir a soma de todos os números lidos.*/

#include <stdio.h>

int main(){
	int num1, soma;
	printf("Digite o valor: ");
	scanf("%d",&num1);
	while (num1 != 0){
		soma = soma + num1;
		printf("Digite outro valor: ");
		scanf("%d",&num1);
	}
	printf("Soma = %d \n",soma);
	return 0;
}
