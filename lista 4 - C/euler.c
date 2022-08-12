#include <stdio.h>
#include <stdlib.h>

int main(){
	float numerador = 1.0, e = 1.0;
	int n, i, fat = 1;
	printf("Digite a quantidade de termos: ");
	scanf("%d", &n);
	for(i = 1; i < n; i++){
		fat *= i;
		e += (numerador/fat);
	}
	printf("O valor do numero de euler e de: %f", e);
	
	return 0;
}
