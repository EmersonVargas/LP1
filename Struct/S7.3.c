/*Exercício 7.3
Um jogo possui 10 personagens, cada um com as
seguintes características:
Um número que representa a sua “identidade”
Um posição (x,y) no espaço bi-dimensional
Uma quantidade de pontuação (inicialmente 0)
Crie uma struct para representar um personagem
A posição também deve ser uma struct
Crie um vetor com 10 personagens
Crie uma função que leia um personagem
A função deve usar uma função que lê a posição
Crie um loop para ler todos os 10 personagens
Desenhe um mapa do jogo, e.x.:*/

#include<stdio.h>
#define L 10
#define C 10

struct posicao {
	int posx;
	int posy;
};

struct personagem {
	int identidade;
	int pontos;
	struct posicao xy; 
};

//   >>> Lê a posição do Personagem <<<
struct posicao le_posicao(struct personagem* pos){
	printf("Digite a posicao X: ");
	scanf("%d",&((*pos).xy.posx));
	printf("Digite a posicao Y: ");
	scanf("%d",&((*pos).xy.posy));
}

//   >>> Cria Personagens <<<
void cria_personagem(struct personagem* pers,int i){
	printf("Digite o ID do personagem [%d]: ",i);
	scanf("%d",&(*pers).identidade);
	(*pers).pontos = 0;	
	le_posicao(pers);	
}

//   >>> Imprime Personagens já preenchidos <<<
void imprime(struct personagem p[]){
	int i;
	for(i=0;i<10;i++){
		printf("Posicao do personagem [%d]: (%d,%d)\n",i,p[i].xy.posx,p[i].xy.posy);	
	}
	printf("\n");
}

int main(){
	struct personagem ps[10];
	int i, j;
	for(i=0;i<10;i++){
		cria_personagem(&ps[i],i);	
	}
	printf("\n");
	imprime(ps);
//   >>> Mapa do jogo <<<	
	printf("  ");	
	for(i=0; i<L; i++){
		printf("%d ",i); 
	}
	printf("\n");
	for(i=0; i<C; i++){
		printf("%d ",i);
		for(j=0; j<L; j++){				
			printf("* ");
		}
		printf("\n"); 
	}
	return 0;
}
