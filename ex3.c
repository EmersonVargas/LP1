/*Um aluno de LP1 est� indo aos Estados Unidos e quer comprar um celular novo. 
Ele n�o quer gastar mais do que 1000 reais. Um d�lar est� custando 3.17 reais. 
Fa�a um programa que leia o pre�o de um celular em d�lares e, caso seja um bom neg�cio, escreva BOM NEG�CIO.*/

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
		printf("%f Reais, acima do or�amento \n", real);
	}
	return 0;
}
