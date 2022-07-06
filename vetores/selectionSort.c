#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 8 

int main(){
	int vet[N];
	int i, j;
	//Gerar vetor aleatório.
	for(i = 0; i < N; i++){
		vet[i] = rand() % 1000 + 1;
		printf("%d: %d\n", i, vet[i]);
	}
	
	//SelectionSort.
	for (i = 0; i < N - 1; i++){
		int i_menor = i;
		for (j = i+1; j < N; j++){
			if(vet[j] < vet[i_menor]){
				i_menor = j;
			}
		}
		int aux = vet[i];
		vet[i] = vet[i_menor];
		vet[i_menor] = aux;
		
		printf("Pivo em %d: ", i);
		for(j = 0; j < N; j++){
			printf(" %d", vet[j]);
		}
		printf("\n");
	}
	
	//Printar o vetor ordenado.
	for(i = 0; i < N; i++){
		printf("%d : %d\n", i, vet[i]);
	}
	
	
	
	return 0;
}

