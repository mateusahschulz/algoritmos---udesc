#include <stdio.h>
#include <stdlib.h>

//Sequência de n valores 1 - 1/2 + 1/3...

int main(int argc, char *argv[]) {
	int n, i;
	float numerador, soma = 0;
	printf("Digite a quantidade de termos: ");
	scanf("%d", &n);
	numerador = 1;
	for(i = 1; i <= n; i++){
		if(i % 2 != 0){
			soma += numerador/i;
		}else{
			soma -= numerador/i;
		}
	}
	printf("Soma = %.2f", soma);
	
	return 0;
}