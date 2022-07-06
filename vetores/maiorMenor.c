#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 8

int main(){
	srand(time(0));
	int v[N], i;
	for (i = 0; i < N; i++){
		v[i] = rand() % 1000 + 1;
		printf("%d\n", v[i]);
	}
	int menor = v[0];
	int maior = v[0];
	for (i = 0; i < N; i++){
		if (v[i] < menor){
			menor = v[i];
		}
		if (v[i] > maior){
			maior = v[i];
		}
	}
	printf("Menor: %d\nMaior: %d\n", menor, maior);
	
	
	return 0;
}
