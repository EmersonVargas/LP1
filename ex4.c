/*Agora o aluno alugou um carro. Ele está preocupado com o limite de velocidade, 
mas não entende muito bem o sistema de milhas por hora (mph). 
Ele pretende manter sempre uma velocidade entre 80 e 100 quilômetros por hora (kph). 
Sabe-se que que 1 milha tem aproximadamente 1.6 quilômetros. 
Crie um programa que leia a velocidade atual do carro em mph e escreva na tela ACELERE, DESACELERE ou MANTENHA.*/

#include <stdio.h>

int main(){
	int milha, km;
	printf("Digite a velocidade em mph:  ");
	scanf("%d",&milha);
	km = milha * 1.6;
	if(km > 100){
		printf("%d Km/h Desacelere \n",km);
	}
	else if(km <80){
		printf("%d Km/h Acelere \n",km);
	}
	else{
		printf("%d Km/h Mantenha \n",km);
	}
	return 0;
}
