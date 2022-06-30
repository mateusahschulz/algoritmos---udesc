#include <stdio.h>
#include <stdlib.h>

//Sequência de n valores 1/2.

int main(int argc, char *argv[]) {
	int n, i;
	float numerador, denominador;
	printf("Digite a quantidade de termos: ");
	scanf("%d", &n);
	numerador = 1;
	denominador = 2;
	float soma = numerador/denominador;
	for (i = 1; i <= n - 1; i++){
		numerador += 2;
		denominador += 3;
		soma += numerador/denominador;
	}
	printf("Soma = %.2f", soma);
			
	return 0;
}