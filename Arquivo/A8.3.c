/*Exercício 8.3
Leia 10 strings com scanf (máx 25 caracteres)
para um vetor de strings
Escreva cada string para um arquivo, caractere a
caractere, usando um for dentro de outro for
*/
#include<stdio.h>
#include<string.h>

int main(void){
	int i, j;
	char frase[10][25];
	FILE* f = fopen("arq2.txt","w");
	for(i=0; i<10; i++){
		printf("Digite string [%d]: ",i);
		scanf("%s", frase[i]);
	}
	for(i=0;i<10;i++){
		for(j=0; j < strlen(frase[i]); j++){	
		fputc(frase[i][j],f);
		}
	}
	for(i=0;i<10;i++){
		puts(frase[i]);
	}
	fclose(f);
	return 0;
}
