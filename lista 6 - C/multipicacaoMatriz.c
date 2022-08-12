#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LINA 3
#define COLA 4
#define LINB 4
#define COLB 3

//Cálculo de uma matriz A(3X4) e uma matriz B(4x3).

int main(){
	srand(time(0));
	int A[LINA][COLA], B[LINB][COLB];
	int i, j;
	//Gera matriz A e B
	for(i = 0; i < LINA; i++){
		for(j = 0; j < COLA; j++){
			A[i][j] = rand() % 10 + 1;
		}
	}
	for(i = 0; i < LINB; i++){
		for(j = 0; j < COLB; j++){
			B[i][j] = rand() % 10 + 1;
		}
	}
	//Mostra matriz A e B
	for(i = 0; i < LINA; i++){
		for(j = 0; j < COLA; j++){
			printf("%4d", A[i][j]);
		}
		printf("\n");
	}
	printf("\n-----------------------\n");
	for(i = 0; i < LINB; i++){
		for(j = 0; j < COLB; j++){
			printf("%4d", B[i][j]);
		}
		printf("\n");
	}
	printf("\n-----------------------\n");
	
	int C[LINA][COLB], k, soma;
	int limitek = LINB;
	for(i = 0; i < LINA; i++){
		for(j = 0; j < COLB; j++){
			for(k = 0, soma = 0; k < limitek; k++){
				soma += A[i][k] * B[k][j];
			}
			C[i][j] = soma;
		}	
	}
	
	for(i = 0; i < LINA; i++){
		for(j = 0; j < COLB; j++){
			printf("%5d", C[i][j]);
		}
		printf("\n");
	}
		
	return 0;
}
