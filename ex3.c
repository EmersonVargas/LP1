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
