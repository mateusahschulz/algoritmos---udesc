#include <stdio.h>
#include <stdlib.h>

// Código tabuada - exercício 1: 

int main(int argc, char *argv[]) {
	int n, i, resultado = 0;
	printf("Qual tabuada voce deseja? ");
	scanf("%d", &n);
	for (i = 1; i <= 10; i++){
		resultado = n * i;
		printf("%d x %d = %d\n", n, i, resultado);
	}
	
	return 0;
}
