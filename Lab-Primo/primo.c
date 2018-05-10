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
	eh_primo(n);
	if (eh_primo(n) == 1){
		printf("O numero %d eh primo\n",n);	
	}
	else{
		printf("O numero %d nao eh primo\n",n);
	}
	return 0;
}
