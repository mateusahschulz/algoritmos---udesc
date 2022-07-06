#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIN 4
#define COL 4
#define DIAG 4

int main(){
	srand(time(0));
	int mat[LIN][COL], i, j, diag[DIAG];
	for(i = 0; i < LIN; i++){
		for(j = 0; j < COL; j++){
			mat[i][j] = rand() % 100 + 1;
		}
	}
	printf("Dados da Matriz (%dx%d):\n", LIN, COL);
	for(i = 0; i < LIN; i++){
		for(j = 0; j < COL; j++){
			printf("%4d", mat[i][j]);
			if (i == j){				//esse if faz parte da v1.
				diag[i] = mat[i][j];
			}
		}
		printf("\n");
	}
	printf("\nDiagonal Principal da matriz v1 (%dx%d): ", LIN, COL);
	for(i = 0; i < DIAG; i++){
		printf("%d ", diag[i]);
	}
	printf("\nDiagonal Principal da matriz v2 (%dx%d):\n ", LIN, COL);
	for(i = 0; i < LIN; i++){
		printf("%d\n ", mat[i][i]);
	}
	
	
	return 0;
}
