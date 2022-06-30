#include <stdio.h>
#include <stdlib.h>

//Calcular a amplitude dos valores lidos; amplitude é a diferença do maior com o menor número.

int main(int argc, char *argv[]) {
	int n, maior, menor, i, x;
	printf("Digite a quantidade de numeros do intervalo: ");
	scanf("%d", &n);
	printf("Digite o 1 valor: ");
	scanf("%d", &x);
	maior = x;
	menor = x;
	for(i = 1; i <= n - 1; i++){
		printf("Digite o %d valor: ", i + 1);
		scanf("%d", &x);
		if (x > maior){
			maior = x;
		}else{
			if(x < menor){
				menor = x;
			}
		}
	}
	printf("resultado: %d", maior - menor);
	
	return 0;
}