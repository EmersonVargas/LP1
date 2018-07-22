/*Altere o exercício 8.1 e 8.3 para usar a função a
seguir a ser definida:
void escreva_string (FILE* f, char* str);
A função recebe um arquivo e uma string e
escreve a string no arquivo, caractere a caractere
*/
#include<stdio.h>
#include<string.h>



void escreva_string (FILE* f, char* frase){
	int i, tam;
	tam = strlen(frase);
	for(i=0;i<tam;i++){
		fputc(frase[i],f);
	}
}

//Exercicio 8.1 Alterado

int main(void){
	char frase[25];
	FILE* f = fopen("arq1.txt","w");
	printf("Digite uma string: ");
	scanf("%s",frase);
	escreva_string(f,frase);
	fclose(f);
	return 0;
}

//Exercicio 8.3 Alterado
/*
int main(void){
	int i, j;
	char frase[10][25];
	FILE* f = fopen("arq2.txt","w");
	for(i=0; i<10; i++){
		printf("Digite string [%d]: ",i);
		scanf("%s", frase[i]);
	}
	for(i=0;i<10;i++){
		escreva_string(f,frase[i]);
	}
	for(i=0;i<10;i++){
		puts(frase[i]);
	}
	fclose(f);
	return 0;
}
*/
