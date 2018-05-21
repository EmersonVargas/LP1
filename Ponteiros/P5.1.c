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

int subtrai(int* p){
	*p = *p - 50;
}

int main(){
	int a, b;
	printf("Digite primeiro valor: ");
	scanf("%d",&a);
	printf("Digite segundo valor: ");
	scanf("%d",&b);
	printf("%d - %d\n",a,b);
	if (a > b){
		subtrai(&a);
	}else{
		subtrai(&b);		
	}
	printf("%d - %d\n",a,b);	
	return 0;
}
