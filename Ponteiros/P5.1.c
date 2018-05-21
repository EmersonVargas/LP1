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

int subtrai(int* x, int* y){
	if (*x > *y){
		int* p = x;
		*p = *p - 50;		
	}else{
		int* p = y;	
		*p = *p - 50;
	}
}

int main(){
	int a, b;
	printf("Digite primeiro valor: ");
	scanf("%d",&a);
	printf("Digite segundo valor: ");
	scanf("%d",&b);
	printf("%d - %d\n",a,b);
	subtrai(&a,&b);
	printf("%d - %d\n",a,b);	
	return 0;
}
