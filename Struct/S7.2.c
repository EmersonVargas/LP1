/* Exercício 7.2
Crie uma struct que contenha outra struct.
Seja Criativo!
Crie uma função preenche2 que recebe um
ponteiro para o novo tipo criado e leia os campos
para a variável passada.
A função deve usar a preenche do exercício
anterior. */

#include<stdio.h>

struct caracteristicas {
	char fabricante[20];
	char modelo [20];
};
struct produto {
	char nome[15];
	int quantidade;
	struct caracteristicas ct;
};

void preenche2(struct caracteristicas* ct){
	printf("Digite o fabricante: ");
	scanf("%s",(*ct).fabricante);
	printf("Digite o modelo: ");
	scanf("%s",(*ct).modelo);
}

void preenche(struct produto* item){
	printf("<< Cadastro de produtos >>\n");
	printf("Digite o nome do produto: ");
	scanf("%s",(*item).nome);
	printf("Digite a quantidade: ");
	scanf("%d",&((*item).quantidade));
	preenche2(&(*item).ct);
}


int main(){
	struct produto p1;
	struct produto p2;
	preenche(&p1);
	preenche(&p2);
	printf("\nProduto 1: %s - Quantidade: %d\n",p1.nome, p1.quantidade);
	printf("Fabricante: %s - Modelo: %s\n",p1.ct.fabricante, p1.ct.modelo);
	printf("\nProduto 2: %s - Quantidade: %d\n",p2.nome, p2.quantidade);
	printf("Fabricante: %s - Modelo: %s\n\n",p2.ct.fabricante, p2.ct.modelo);	
	return 0;
}
