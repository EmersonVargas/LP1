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
