/*Exercício 8.2
Leia o arquivo do exercício 8.1, caractere a
caractere, para uma string (máx 25 caracteres)
Exiba a string lida
*/

#include<stdio.h>
#include<string.h>

int main(void){
	int i=0;
	char frase[25];
	FILE* f = fopen("arq.txt","r");	
	frase[i] = fgetc(f);	
	while(frase[i] != EOF){
		i++;	
		frase[i] = fgetc(f);	
	}
	frase[i] = '\0';
	fclose(f);
	puts(frase);
	return 0;
}
