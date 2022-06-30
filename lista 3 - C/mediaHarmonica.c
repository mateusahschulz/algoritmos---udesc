#include <stdio.h>
#include <stdlib.h>

//Média harmônica com n valores apenas inteiros positivos.

int main(int argc, char *argv[]) {
	int n, i, neg = 0;
	float media, soma = 0, x;
	printf("Digite a quantidade de valores: ");
	scanf("%d", &n);
	for(i = 1; i <= n; i++){
		printf("Digite o %d valor: ", i);
		scanf("%f", &x);
		x = 1/x;
		if (x > 0){
			soma += x;
		}else{
			neg++;
		}
	}
	if (soma != 0){
		media = (n - neg) / soma;
		printf("A media harmonica e de: %.2f", media);
	}else{
		printf("Entrada invalida");
	}
			
	return 0;
}