#include <stdio.h>
#include <stdlib.h>

//Média aritmética com n valores apenas inteiros positivos.

int main(int argc, char *argv[]) {
	int n, i, x, neg = 0;
	float media, soma = 0;
	printf("Insira a quantidade de valores: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++){
		printf("Digite o %d valor: ", i);
		scanf("%d", &x);
		if (x > 0){
			soma += x;
		}else{
			neg++;
		}
	}
	if (n - neg != 0){
		media = soma / (n - neg);
		printf("Media = %.2f", media);
	}else{
		printf("Entrada invalida");
	}
			
	return 0;
}