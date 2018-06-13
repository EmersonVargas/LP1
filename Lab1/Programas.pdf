>>> Hello<<<
#include <stdio.h>
int main(){
	printf ("Hello");
	return 0;
}

>>>Maior<<<
/*Faça um programa que leia dois valores e exiba o maior valor lido.*/

#include <stdio.h>

int main(){
	int num1, num2;
	printf("Digite o primeiro valor: ");
	scanf("%d",&num1);
	printf("Digite o segundo valor: ");
	scanf("%d",&num2);
	if ( num1 > num2 ){
		printf("%d\n",num1);
	}
	else{
		printf("%d\n",num2);
	}
	return 0;
}

>>>Dolar<<<
/*Um aluno de LP1 está indo aos Estados Unidos e quer comprar um celular novo. 
Ele não quer gastar mais do que 1000 reais. Um dólar está custando 3.17 reais. 
Faça um programa que leia o preço de um celular em dólares e, caso seja um bom negócio, escreva BOM NEGÓCIO.*/

#include <stdio.h>

int main(){
	float dolar, real;
	printf("Digite o valor em dolar: ");
	scanf("%f",&dolar);
	real = dolar * 3.17;
	if (real <= 1000){
		printf("%f Reais, Bom Negocio \n", real);
	}
	else{
		printf("%f Reais, acima do orçamento \n", real);
	}
	return 0;
}

>>>Velocidade<<<
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

>>>Soma<<<
/*Faça um programa que leia números continuamente até que seja digitado 0. 
Ao final, o programa deve exibir a soma de todos os números lidos.*/

#include <stdio.h>

int main(){
	int num1, soma;
	printf("Digite o valor: ");
	scanf("%d",&num1);
	while (num1 != 0){
		soma = soma + num1;
		printf("Digite outro valor: ");
		scanf("%d",&num1);
	}
	printf("Soma = %d \n",soma);
	return 0;
}

>>>Somatório<<<
/*Faça um programa que leia um número N e calcule o somatório a seguir:*/

#include <stdio.h>

int main(){
	int i, n, soma;
	printf("Digite o valor de n: ");
	scanf("%d",&n);
	for (i; i<=n; i++) {
		soma= soma + (i *i);
	}
	printf("Valor do somatorio = %d \n",soma);
	return 0;
}

>>>Primo<<<
#include<stdio.h>

int eh_primo(int num){
	int cont = 0, i, primo;	
	for (i = 1; i <= num; i++) {
   		if (num % i == 0) { 
     		cont = cont + 1;
    		}
  	}
	if (cont == 2){
		primo = 1;	
	}
	else{
		primo = 0;	
	}
	return primo;
}

int main(){
	int n;
	printf("Digite um numero: ");
	scanf("%d",&n);
	if (eh_primo(n) == 1){
		printf("O numero %d eh primo\n",n);	
	}
	else{
		printf("O numero %d nao eh primo\n",n);
	}
	return 0;
}

>>>Todos os primos<<<
#include<stdio.h>

int eh_primo(int num){
	int cont = 0, i, primo;	
	for (i = 1; i <= num; i++) {
   		if (num % i == 0) { 
     		cont = cont + 1;
    		}
  	}
	if (cont == 2){
		primo = 1;	
	}
	else{
		primo = 0;	
	}
	return primo;
}
int todos_os_primos(int num){
	int i;
	for (i = 1; i <= num; i++){
		if (eh_primo(i) == 1){
			printf("%d\n",i);		
		}	
	}
	return 0;	
}

int main(){
	int max,i;
	printf("Digite o numero maximo: ");
	scanf("%d",&max);
	todos_os_primos(max);	
	return 0;
}

>>>Temperatura<<<
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

>>>Ponteiro<<<
/*Exercício 5.1
 Leia dois inteiros a e b.
 Exiba os valores de a e b.
 Crie um ponteiro p para a variável com o 
maior valor.
 Através de p subtraia 50 da variável com o 
maior valor.
 Exiba os valores de a e b novamente.
*/

#include<stdio.h>

int subtrai(int* num){	
	*num = *num - 50;
}

int main(){
	int a, b;
	int* p;
	printf("Digite primeiro valor: ");
	scanf("%d",&a);
	printf("Digite segundo valor: ");
	scanf("%d",&b);
	if (a > b){
		p = &a;
	}else{
		p = &b;
	}
	printf("%d - %d\n",a,b);
	subtrai(p);
	printf("%d - %d\n",a,b);	
	return 0;
}

>>>Ponteiro<<<
/*Exercício 5.2
**Uma conta é representada por um inteiro que 
guarda o saldo total:
      int minha_conta;
**Uma compra na internet é efetuada por uma chamada
      compra(conta,valor);
**A função recebe um ponteiro 
para uma conta e um valor a ser debitado:
      void compra (int* conta, int valor) { ... }
**Um casal tem duas contas e quer usar a conta 
com maior saldo para fazer uma compra de 500 reais.
***Faça um programa que leia o saldo das duas 
contas e efetue a compra corretamente. Ao final o
programa deve exibir os saldos das duas contas. */

#include<stdio.h>

void compra(int* conta, int valor){
	*conta = *conta - valor;
}

int main(){
	int conta1, conta2, valor = 500;
	int* conta;
	printf("Digite o saldo da conta1: ");
	scanf("%d",&conta1);
	printf("Digite o saldo da conta2: ");
	scanf("%d",&conta2);
	if (conta1 >= conta2){
		conta = &conta1;
	}else{
		conta = &conta2;
	}
	compra(conta, valor);
	printf("Saldo da conta1 = %d\n", conta1);
	printf("Saldo da conta2 = %d\n", conta2);		
	return 0;
}

>>>Ponteiro<<<
/*Exercício 5.3
**Agora, o casal tem uma lista de compras a efetuar:
int compras[] = { 100, 50, 80, 30, 20 };
***Faça um programa que leia o saldo das duas contas 
e efetue as compras corretamente, sempre usando a 
conta com o maior saldo.
**A cada compra o programa deve exibir os saldos 
das duas contas.*/

#include<stdio.h>

void compra(int* conta, int valor){
		printf("Valor da compra = %d\n",valor);
		*conta = *conta - valor;
}

int main(){
	int i, conta1, conta2, compras[] = {100, 50, 80, 30 ,20};
	int* conta;	
	printf("Digite o saldo da conta1: ");
	scanf("%d",&conta1);
	printf("Digite o saldo da conta2: ");
	scanf("%d",&conta2);
	for ( i = 0; i < 5; i++){	
		if (conta1 >= conta2){		
			printf("Compra efetuada na conta1. \n");
			conta = &conta1;		
		}else{		
			printf("Compra efetuada na conta2. \n");
			conta = &conta2;
		}
		compra(conta, compras[i]);
		printf("Saldo da conta1 = %d\n",conta1);
		printf("Saldo da conta2 = %d\n",conta2);
	}
	return 0;
}

>>>Ponteiro<<<
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

>>>Vetor<<<
/*Exercício 4.1
Crie uma função preenche que receba um vetor
vec de inteiros, o tamanho do vetor n e preencha
o vetor com n números lidos do teclado.
Crie uma função media que receba um vetor
vec, o tamanho do vetor n e retorne a média
entre todos os valores do vetor.*/

#include<stdio.h>

int preenche(int* vet, int tam){
	int i;	
	for(i=0;i<tam;i++){
		printf("Digite o valor [%d]: ",i);
		scanf("%d",&vet[i]);	
	}
}

void imprime(int* vet, int tam){
	int i;	
	for(i=0;i<tam;i++){
		printf("posicao [%d]: %d\n",i,vet[i]);
	}
}

float media(int* vet, int tam){
	int i;
	float med,aux=0;	
	for(i=0;i<tam;i++){
		aux = aux + vet[i];	
	}
	med = aux/tam;	
	return med;
}



int main(void){
	int vetor[20],tamanho = 0;
	float mediat;
	printf("Digite o tamanho do vetor: ");
	scanf("%d",&tamanho);
	preenche(&vetor[20],tamanho);
	imprime(&vetor[20],tamanho);
	mediat = media(&vetor[20],tamanho);
	printf("Media = %.2f\n",mediat);
	return 0;
}

>>>Vetor<<<
/*Exercício 4.2
Crie uma função preenche que receba um array
bidimensional arr de inteiros, a quantidade de
linhas l, a quantidade c de colunas, e preencha o
array com l*c números lidos do teclado.
Crie uma função media que receba um array
bidimensional arr, a quantidade de linhas l, a
quantidade de colunas c ,e retorne a média entre
todos os valores do array.*/
#include<stdio.h>

int preenche(int arr[3][2]){
	int i, j;
	for(i=0;i<3;i++){	
		for(j=0;j<2;j++){		
			printf("Entre com valor [%d][%d] : ",i,j);
			scanf("%d", &arr[i][j]);
		}
	}
}

float media(int arr[3][2]){
	int i, j;	
	float med, aux;	
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){		
			aux = aux + arr[i][j];
		}
	}
	med = aux/6;	
	return med;		
}

int main(void){
	int array[3][2],i ,j;	
	preenche(array);
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){		
			printf("%d\n",array[i][j]);
		}
	}
	printf("Media total: %.2f\n", media(array));
	return 0;
}


>>>Estrutura<<<
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

>>>Estrutura<<<
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

>>>Estrutura personagem<<<
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

