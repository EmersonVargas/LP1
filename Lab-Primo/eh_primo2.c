#include<stdio.h>
//código sem o contador "cont"
int eh_primo(int num){
	int i, primo=0;	
	for (i = 1; i <= num; i++) {
   		if (num % i == 0) { 
     		primo = primo+1;
    		}
  	}
	if (primo == 2){
//primo recebe valor 1 por ser verdadeiro
		primo = 1;	
	}
	else{
//primo recebe valor0 por ser falso
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
