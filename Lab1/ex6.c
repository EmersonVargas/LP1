/*Fa�a um programa que leia um n�mero N e calcule o somat�rio a seguir:*/

#include <stdio.h>

int main(){
	int i, n, soma;
	printf("Digite o valor de n: ");
	scanf("%d",&n);
	for (i; i<=n; i++) {
		soma= soma + (i *i);
	}
	printf("Valor do somatorio = %d \n",soma);
	return 0;
}
