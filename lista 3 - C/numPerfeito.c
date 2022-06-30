#include <stdio.h>
#include <stdlib.h>

//Verificar se o número é perfeito.

int main(int argc, char *argv[]) {
	int num, soma = 0;
	printf("Digite um numero: ");
	scanf("%d", &num);
	int i = 1;
	while(i <= num){
		if (num % i == 0){
			soma += i;
		}
		i++;
	} 
	if (soma / 2 == num){
		printf("%d e um numero perfeito!", num);
	}else{
		printf("%d nao e um numero perfeito.", num);
	}
	
	
	return 0;
}