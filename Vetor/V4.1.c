/*Exercício 4.1
Crie uma função preenche que receba um vetor
vec de inteiros, o tamanho do vetor n e preencha
o vetor com n números lidos do teclado.
Crie uma função media que receba um vetor
vec, o tamanho do vetor n e retorne a média
entre todos os valores do vetor.*/

#include<stdio.h>

int preenche(int* vet, int tam){
	int i;	
	for(i=0;i<tam;i++){
		printf("Digite o valor [%d]: ",i);
		scanf("%d",&vet[i]);	
	}
}

void imprime(int* vet, int tam){
	int i;	
	for(i=0;i<tam;i++){
		printf("posicao [%d]: %d\n",i,vet[i]);
	}
}

float media(int* vet, int tam){
	int i;
	float med,aux=0;	
	for(i=0;i<tam;i++){
		aux = aux + vet[i];	
	}
	med = aux/tam;	
	return med;
}



int main(void){
	int vetor[20],tamanho = 0;
	float mediat;
	printf("Digite o tamanho do vetor: ");
	scanf("%d",&tamanho);
	preenche(&vetor[20],tamanho);
	imprime(&vetor[20],tamanho);
	mediat = media(&vetor[20],tamanho);
	printf("Media = %.2f\n",mediat);
	return 0;
}

