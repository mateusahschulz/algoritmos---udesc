#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIN 5
#define COL 5

//Retorna o menor valor da linha do maior valor aa matriz.

void gera_valores(int x[LIN][COL]){
	int i, j;
	for(i = 0; i < LIN; i++){
		for(j = 0; j < COL; j++){
			x[i][j] = rand() % 100 + 1;
		}
	}
}

void mostra_matriz(int x[LIN][COL], char id){
	int i, j;
	printf("Dados da matriz %c:\n");
	for(i = 0; i< LIN; i++){
		for(j = 0; j < COL; j++){
			printf("%4d", x[i][j]);
		}
		printf("\n");
	}
	printf("------------------------------\n");
}

int main(){
	srand(time(0));
	int m[LIN][COL];
	gera_valores(m);
	mostra_matriz(m, 'A');
	int maior = m[0][0];
	int i_maior = 0, i, j;
	for(i = 0; i < LIN; i++){
		for(j = 0; j < COL; j++){
			if(m[i][j] > maior){
				maior = m[i][j];
				i_maior = i;
			}
		}
	}
	int menor = m[i_maior][0];
	int j_menor = 0;
	for(j = 0; j < COL; j++){
		if(m[i_maior][j] < menor){
			menor = m[i_maior][j];
			j_menor = j;
		}
	}
	printf("Minimax: %d ", menor);
	printf(" em (%dx%d)\n", i_maior, j_menor);
	
	return 0;
}
