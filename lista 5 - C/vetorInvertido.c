#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//#define N 30

//Gera um vetor invertido a partir de um vetor de n elementos.

int main(){
	//srand(time(0));
	
	//Define a quantidade elementos do vetor e o gera e o imprime.
	int n;
	printf("Digite a quantidade de elementos do vetor: ");
	scanf("%d", &n);
	int v[n], i, vInv[n];
	for(i = 0; i < n; i++){
		//v[i] = rand() % 100 + 1;
		printf("Digite o %d elemento: ", i + 1);
		scanf("%d", &v[i]);
	}
	printf("Vetor Normal: ");
	for(i = 0; i < n; i++){
		printf("%3d", v[i]);
	}
	
	//Inverte o vetor e o imprime.
	for(i = 0; i < n; i++){
		vInv[i] = v[(n - 1) - i];
	}
	printf("\nVetor Invertido: ");
	for(i = 0; i < n; i++){
		printf("%3d", vInv[i]);
	}
	
	return 0; 
}
