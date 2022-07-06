#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//Média de valores de um vetor e quais valores estão acima dessa média.

int main(){
	float v[100];
	int i;
	srand(time(0));
	for(i = 0; i < 100; i++){
		v[i] = rand();
	}
	float soma = 0;
	for(i = 0; i < 100; i++){
		soma += v[i];
	}
	float media = soma / 100;
	printf("Média: %.2f\n", media);
	printf("Valores acima da média:\n");
	for(i = 0; i < 100; i++){
		if (v[i] > media){
			printf("%.2f\n", v[i]);
		}
	}
	
	
	return 0;
}
