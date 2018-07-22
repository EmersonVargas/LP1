/*Exercício 8.1
Leia uma string com scanf (máx 25 caracteres)
Escreva a string para um arquivo, caractere a
caractere, usando um for
A função strlen retorna o tamanho de uma
string
É necessário incluir a biblioteca string.h
*/

#include<stdio.h>
#include<string.h>

int main(void){
	int i, tam;
	char frase[25];
	FILE* f = fopen("arq.txt","w");
	printf("Digite uma string: ");
	scanf("%s",frase);
	tam = strlen(frase);
	for(i=0;i<tam;i++){
		fputc(frase[i],f);
	}
	printf("Tamanho da string = %d\n", tam);
	fclose(f);
	return 0;
}
