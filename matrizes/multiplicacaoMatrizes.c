#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIN 3
#define COL 3

void gera_valores(int x[LIN][COL]){
	int i, j;
	for(i = 0; i < LIN; i++){
		for(j = 0; j < COL; j++){
			x[i][j] = rand() % 10 + 1;
		}
	}
}

void mostra_matriz(int x[LIN][COL], char id){
	int i, j;
	printf("Dados da matriz %c:\n");
	for(i = 0; i< LIN; i++){
		for(j = 0; j < COL; j++){
			printf("%3d", x[i][j]);
		}
		printf("\n");
	}
	printf("------------------------------\n");
}

int main(){
	srand(time(0));
	int a[LIN][COL], b[LIN][COL];
	gera_valores(a);
	gera_valores(b);
	mostra_matriz(a, 'A');
	mostra_matriz(b, 'B');
	int c[LIN][COL], i, j, k, soma = 0;
	for (i = 0; i < LIN; i++){
		for(j = 0; j < COL; j++){
			for(k = 0, soma = 0; k < LIN; k++){		//para percorrer linha e coluna fixadas.
				soma += a[i][k] * b[k][j];
			}
			c[i][j] = soma;
		}
	}
	mostra_matriz(c, 'C');
	
	return 0;
}
