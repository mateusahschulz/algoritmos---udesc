#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIN 10
#define COL 10

//Calcula o minimax da matriz, que é o menor elemento da linha que contém o maior elemento da matriz.

void geraMatriz(int x[LIN][COL]);
void mostraMatriz(int x[LIN][COL]);

int main(){
	srand(time(0));
	int a[LIN][COL];
	geraMatriz(a);
	mostraMatriz(a);
	int maior = a[0][0];
	int i_maior = 0, i, j;
	for(i = 0; i < LIN; i++){
		for(j = 0; j < COL; j++){
			if(a[i][j] > maior){
				maior = a[i][j];
				i_maior = i;
			}
		}
	}	
	int menor = a[i_maior][0];
	int j_menor = 0;
	for(j = 0; j < COL; j++){
		if(a[i_maior][j] < menor){
			menor = a[i_maior][j];
			j_menor = j;
		}
	}
	printf("MINIMAX = %d na posicao %dx%d", menor, i_maior, j_menor);
	
		
	return 0;
}

void geraMatriz(int x[LIN][COL]){
	int i, j; 
	for(i = 0; i < LIN; i++){
		for(j = 0; j < COL; j++){
			x[i][j] = rand() % 100 + 1;
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


