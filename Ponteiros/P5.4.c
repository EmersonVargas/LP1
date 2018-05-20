/*Exercício 5.4

Crie uma função troca que receba dois
ponteiros para inteiros p1 e p2 e troque os
conteúdos por eles apontados:
int x=10, y=20;
troca(&x, &y); // definir essa função
printf(“%d %d\n”, x, y); //20 10   */





#include<stdio.h>

void troca(int*p1, int*p2){
	int aux = *p1;
	*p1 = *p2;
	*p2 = aux;
}

int main(){
	int x = 10, y = 20;
	printf("%d - %d\n",x,y);
	troca(&x,&y);
	printf("%d - %d\n",x,y);
	return 0;
}
