/*Exercício 4.3
 Crie uma struct para guardar um ponto no
espaço bi-dimensional com dois inteiros x e y.
 Crie uma função para preencher 1 ponto.
 Na main , crie um vetor com dez pontos.
 Crie uma função para preencher um dado vetor de
pontos.
 Crie uma função que receba um vetor de pontos e
retorne o ponto mais distante de (0,0).*/

#include<stdio.h>

struct posicao{
	int posx;
	int posy;
};

void preenche_pos(struct posicao* xy){
	printf("Digite a posicao x: ");
	scanf("%d",&(*xy).posx);
	printf("Digite a posicao y: ");
	scanf("%d",&(*xy).posy);
}

void distancia(struct posicao xy[]){
	int i, maiorx=0, maiory=0;	
	for(i=0;i<10;i++){
		if (xy[i].posx >= maiorx){
			maiorx = xy[i].posx;
		}
	}
	for(i=0;i<10;i++){
		if ((xy[i].posx == maiorx)&&(xy[i].posy >= maiory)){		
				maiory = xy[i].posy;
		}
	}
	printf("Ponto mais distante de (0,0): (%d,%d)\n",maiorx,maiory);
}
void imprime(struct posicao xy[]){
	int i;	
	for(i=0;i<10;i++){
		printf("Vetor [%d]: (%d,%d)\n",i+1,xy[i].posx, xy[i].posy);
	}
}

int main(void){
	struct posicao vetor[10];
	int i;
	for(i=0;i<10;i++){
		printf("Vetor [%d]\n",i+1);
		preenche_pos(&vetor[i]);
	}
	imprime(vetor);
	distancia(vetor);
	return 0;
}
