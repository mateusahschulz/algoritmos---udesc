#include <stdio.h>
#include <stdlib.h>

//Série harmônica.

int main(int argc, char *argv[]) {
	int k, i;
	float numerador, soma = 1;
	printf("Digite a quantidade de termos: ");
	scanf("%d", &k);
	numerador = 1;
	printf("%.0f\n", numerador);
	for(i = 2; i <= k; i++){
		soma += numerador / i;
		printf("%.0f / %d\n", numerador, i);
	}
	printf("Soma = %.2f", soma);
	
	return 0;
}