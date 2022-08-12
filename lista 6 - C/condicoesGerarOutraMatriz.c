#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIN 4
#define COL 5

//Gera a matriz C a partir das matrizes A e B com condições.

void geraMatriz(int x[LIN][COL]);
void mostraMatriz(int x[LIN][COL]);

int main(){
	srand(time(0));
	int A[LIN][COL], B[LIN][COL], C[LIN][COL];
	geraMatriz(A);
	geraMatriz(B);
	mostraMatriz(A);
	mostraMatriz(B);
	
	int i, j;
	for(i = 0; i < LIN; i++){
		for(j = 0; j < COL; j++){
			if (i <= j){
				C[i][j] = A[i][j];
			}else{
				C[i][j] = B[i][j];
			}
		}
	}
	
	mostraMatriz(C);
	
	return 0;
}

void geraMatriz(int x[LIN][COL]){
	int i, j; 
	for(i = 0; i < LIN; i++){
		for(j = 0; j < COL; j++){
			x[i][j] = rand() % 10 + 1;
		}
	}
	
}

void mostraMatriz(int x[LIN][COL]){
	int i, j;
	for(i = 0; i < LIN; i++){
		for(j = 0; j < COL; j++){
			printf("%4d", x[i][j]);
		}
		printf("\n");
	}
	printf("------------------------------\n");
}


