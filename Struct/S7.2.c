/* Exercício 7.2
Crie uma struct que contenha outra struct.
Seja Criativo!
Crie uma função preenche2 que recebe um
ponteiro para o novo tipo criado e leia os campos
para a variável passada.
A função deve usar a preenche do exercício
anterior. */

#include<stdio.h>

struct data {
	char datas[8];
};
struct produto {
	char nome[15];
	int quantidade;
	struct data dts;
};

void preenche2(struct data* dt){
	printf("Digite o dia/mes/ano (ddmmaaaa)");
	scanf("%s",(*dt).datas);
}

void preenche(struct produto* item){
	printf("<< Cadastro de produtos >>\n");
	printf("Digite o nome do produto: ");
	scanf("%s",(*item).nome);
	printf("Digite a quantidade: ");
	scanf("%d",&((*item).quantidade));
	preenche2(&(*item).dts);
}

int main(){
	struct produto p1;
	struct produto p2;
	preenche(&p1);
	preenche(&p2);
	printf("Produto 1: %s - Quantidade: %d\n",p1.nome, p1.quantidade);
	printf("Data: %s\n",p1.dts.datas);
	printf("Produto 2: %s - Quantidade: %d\n",p2.nome, p2.quantidade);
	printf("Data: %s\n",p2.dts.datas);	
	return 0;
}
