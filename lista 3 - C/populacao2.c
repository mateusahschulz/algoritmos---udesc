#include <stdio.h>
#include <stdlib.h>

//Populações com as variáveis definidas com as entradas que o usuário fornece.

int main(int argc, char *argv[]) {
	float cidadeA, cidadeB, taxaA, taxaB;
	int ano = 1;
	printf("Digite a populacao inicial da cidade A: ");
	scanf("%f", &cidadeA);
	printf("Digite a populacao inicial da cidade B: ");
	scanf("%f", &cidadeB);
	printf("Digite a taxa de crescimento anual da cidade A: ");
	scanf("%f", &taxaA);
	printf("Digite a taxa de crescimento anual da cidade B: ");
	scanf("%f", &taxaB);
	if ((cidadeA < cidadeB) && (taxaA > taxaB)){
		while(cidadeA < cidadeB){
			cidadeA += cidadeA * (taxaA / 100);
			cidadeB += cidadeB * (taxaB / 100);
			ano++;
		}
		printf("A cidade A demorou %d para ultrapassar a cidade B", ano);
	}else{
		printf("Entradas invalidas, pois e impossivel a cidade A ultrapassar B");
	}
	
	return 0;
}