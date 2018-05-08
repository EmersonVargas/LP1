#include<stdio.h>

int main(){
	char temp[5];
	int i ,cont = 0;
	float soma,media;
	for (i=0; i<5; i++){
		printf("Digite a temperatura: ");
		scanf("%d",&temp[i]);
		soma = soma + temp[i];	
	}
	media = soma/5;
	for (i=0; i<5; i++){
		if (temp[i] > media){
			cont = cont + 1;
		}
	}
	printf("Temperatura media = %.1f\n", media);
	printf("%d Temperaturas acima da media  \n", cont);
	return 0;
}
