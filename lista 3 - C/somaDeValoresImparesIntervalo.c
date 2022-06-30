#include <stdio.h>
#include <stdlib.h>

// Soma de valores ímpares no intervalor x e y - exercício 2:

int main(int argc, char *argv[]) {
	int x, y, i, soma = 0;
	printf("valor de x: ");
	scanf("%d", &x);
	printf("valor y: ");
	scanf("%d", &y);
	if (x < y){
		for (i = x + 1; i < y; i++){
			if(i % 2 != 0){
				soma += i;
			}
		}
		printf("Soma: %d", soma);
	}else{
		for (i = y + 1; i < x; i++){
			if(i % 2 != 0){
				soma += i;
			}
		}
		printf("Soma: %d", soma);
	}
	
	return 0;
}
