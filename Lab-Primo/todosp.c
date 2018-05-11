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
