#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIN 5
#define COL 5

//Armazenar em um vetor as soma de cada linha e em outro vetor a soma de cada coluna.

int main(){
	srand(time(0));
	int M[COL][LIN], SL[LIN], SC[COL], i, j;
	for(i = 0; i < LIN; i++){
		for(j = 0; j < COL; j++){
			M[i][j] = rand() % 10 + 1;
			printf("%4d", M[i][j]);
		}
		printf("\n");
	}
	
	for(i = 0; i < LIN; i++){
		SL[i] = 0;
		SC[i] = 0;
	}
	
	for(i = 0; i < LIN; i++){
		//int soma = 0;
		for(j = 0; j < COL; j++){
			//soma += M[i][j];
			SL[i] += M[i][j];
			SC[j] += M[i][j];
		}
	}
	
	printf("\nSoma das linhas:\n");
	
	for(i = 0; i < LIN; i++){
		printf("%4d", SL[i]);
	}
	
	printf("\nSoma das colunas:\n");
	
	for(i = 0; i < LIN; i++){
		printf("%4d", SC[i]);
	}
	
	return 0;
}
