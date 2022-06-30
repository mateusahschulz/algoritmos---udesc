#include <stdio.h>
#include <stdlib.h>

//Populações com as variáveis já definida.

int main(int argc, char *argv[]) {
	float cidadeA, cidadeB, taxaA, taxaB;
	int ano = 1;
	cidadeA = 90000;
	cidadeB = 200000;
	taxaA = 0.03;
	taxaB = 0.015;
	while (cidadeA < cidadeB){
		cidadeA += cidadeA * taxaA;
		cidadeB += cidadeB * taxaB;
		ano++;
	}
	printf("E necessario %d anos para q a cidade A ultrapasse a cidade B", ano);
	
	return 0;
}