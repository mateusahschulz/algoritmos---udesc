#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Gerador da sequência de Fibonacci.

int main(int argc, char *argv[]) {
	int n, i;
	printf("Digite a quantidade de termos: ");
	scanf("%d", &n);
	long long int a = 1, b = 1, atual;
	printf("1: 1\n2: 1\n");		//dois primeiros termos: 1 e 1.
	for (i = 3; i <= n; i++){
		atual = a + b;		//gera o termo atual.
		printf("%d: %lld\n", i, atual);
		a = b;		//atualiza o b para a...
		b = atual;		//próxima iteração...
	}
	
	return 0;
}