#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 30

//Mostra as estatísticas pedidas sobre um vetor no exercício 6.

int main(){
	srand(time(0));
	float v[N], soma = 0, acimaMedia = 0, somaAcima = 0;
	int i;
	for(i = 0; i < N; i++){
		v[i] = rand() % 100 + 1;
		soma += v[i];
	}
	for(i = 0; i < N; i++){
		printf("%d: %.2f\n", i, v[i]);
	}
	printf("Soma: %.2f\n", soma);
	float media = soma / N;
	printf("Media: %.2f\nValores acima da media e suas posicoes:\n", media);
	for (i = 0; i < N; i++){
		if (v[i] > media){
			somaAcima += v[i];
			acimaMedia++;
			printf("%d: %.2f\n", i, v[i]);
		}
	}
	printf("Quantidade de valores acima da media = %.0f\n", acimaMedia);
	printf("Soma dos valores acima da media = %.2f\n", somaAcima);
	printf("Porcentagem dos numeros acima da media em relacao ao total de numeros: %.2f", (100*acimaMedia) / N );
	
	
	return 0;
}
