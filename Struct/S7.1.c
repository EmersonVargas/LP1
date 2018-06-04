/*Exercício 7.1
Crie uma struct qualquer relacionada ao seu
projeto.
Seja criativo!
Crie uma função preenche que recebe um
ponteiro para o novo tipo criado e leia os campos
para a variável passada, ex.:
struct T t;
preenche(&t);
printf(“A=%d, B=%d\n”, t.a, t.b);*/

#include<stdio.h>

struct produto {
	char nome[15];
	int quantidade;
};

void preenche(struct produto* item){
	printf("<< Cadastro de produtos >>\n");
	printf("Digite o nome do produto: ");
	scanf("%s",(*item).nome);
	printf("Digite a quantidade: ");
	scanf("%d",&((*item).quantidade));
}

int main(){
	struct produto p1;
	struct produto p2;
	preenche(&p1);
	preenche(&p2);
	printf("Produto 1: %s - Quantidade: %d\n",p1.nome, p1.quantidade);
	printf("Produto 2: %s - Quantidade: %d\n",p2.nome, p2.quantidade);	
	return 0;
}
