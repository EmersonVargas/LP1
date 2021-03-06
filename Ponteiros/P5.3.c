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
