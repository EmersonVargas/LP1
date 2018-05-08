#include<stdio.h>

int main(){
	char temp[50];
	int i ,cont = 0;
	float soma,media;
	for (i=0; i<50; i++){
		printf("Digite a temperatura: ");
		scanf("%d",&temp[i]);
		soma = soma + temp[i];	
	}
	media = soma/50;
	for (i=0; i<50; i++){
		if (temp[i] > media){
			cont = cont + 1;
		}
	}
	printf("Temperatura media = %.1f\n", media);
	printf("%d Temperaturas acima da media  \n", cont);
	return 0;
}
