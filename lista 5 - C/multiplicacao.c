#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

//Multiplica��o entre 2 vetores no mesmo �ndice.

int main(){
	srand(time(0));
	int resultante[N], v[N], v2[N], i;
	//Gera��o e amostra de vetor A.
	for (i = 0; i < N; i++){
		v[i] = rand() % 100 + 1;
	}
	printf("Vetor A: ");
	for(i = 0; i < N; i++){
		printf("%d ", v[i]);
	}
	//Gera��o e amostra de vetor B.
	printf("\nVetor B: ");
	for(i = 0; i < N; i++){
		v2[i] = rand() % 100 + 1;
	}
	for(i = 0; i < N; i++){
		printf("%d ", v2[i]);
	}
	//Gera��o e amostra de vetor resultante.
	printf("\nVetor Resultante: ");
	for(i = 0; i < N; i++){
		resultante[i] = v[i] * v2[i];
		printf("%d ", resultante[i]);
	}
	
	return 0;
}
