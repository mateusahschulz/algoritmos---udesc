#include <stdio.h>
#include <stdlib.h>

//Logaritmo natural de 2(ln2).

int main(int argc, char *argv[]) {
	int n, i;
	float numerador = 1, soma = 0;
	printf("Digite a quantidade de termos: ");
	scanf("%d", &n);
	for(i = 1; i <= n; i++){
		if(i % 2 != 0){
			soma += numerador / i;
			printf("+ %.0f / %d\n", numerador, i);
		}else{
			soma -= numerador / i;
			printf("- %0.f / %d\n", numerador, i);
		}
	}
	printf("Soma(ln2) = %.2f", soma);
	
	return 0;
}