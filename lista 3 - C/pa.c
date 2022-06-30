#include <stdio.h>
#include <stdlib.h>

//Progressão Aritmética de N valores.

int main(int argc, char *argv[]) {
	int x, r, i, n;
	printf("Quantos termos? ");
	scanf("%d", &n);
	printf("Digite o primeiro elemento da PA: ");
	scanf("%d", &x);
	printf("Digite a razao da PA: ");
	scanf("%d", &r);
	int u = x + ((n -1) * r);
	printf("PA = ");
	for(i = x; i <= u; i += r){
		printf("%d, ", i);
	}
			
	return 0;
}