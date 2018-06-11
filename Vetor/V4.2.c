/*Exercício 4.2
Crie uma função preenche que receba um array
bidimensional arr de inteiros, a quantidade de
linhas l, a quantidade c de colunas, e preencha o
array com l*c números lidos do teclado.
Crie uma função media que receba um array
bidimensional arr, a quantidade de linhas l, a
quantidade de colunas c ,e retorne a média entre
todos os valores do array.*/
#include<stdio.h>

int preenche(int arr[3][2]){
	int i, j;
	for(i=0;i<3;i++){	
		for(j=0;j<2;j++){		
			printf("Entre com valor [%d][%d] : ",i,j);
			scanf("%d", &arr[i][j]);
		}
	}
}

float media(int arr[3][2]){
	int i, j;	
	float med, aux;	
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){		
			aux = aux + arr[i][j];
		}
	}
	med = aux/6;	
	return med;		
}

int main(void){
	int array[3][2],i ,j;	
	preenche(array);
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){		
			printf("%d\n",array[i][j]);
		}
	}
	printf("Media total: %.2f\n", media(array));
	return 0;
}
