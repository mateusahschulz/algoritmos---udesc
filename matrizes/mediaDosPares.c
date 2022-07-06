#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIN 4
#define COL 5


int main(){
	srand(time(0));
	int mat[LIN][COL], i, j;
	for(i = 0; i < LIN; i++){
		for(j = 0; j < COL; j++){
			mat[i][j] = rand() % 100 + 1;
			printf("%4d", mat[i][j]);
		}
		printf("\n");
	}
	int par = 0, soma = 0;
	for(i = 0; i < LIN; i++){
		for(j = 0; j < COL; j++){
			if (mat[i][j] % 2 == 0){
				par++;
				soma += mat[i][j];
			}
		}
	}
	if(par == 0){
		printf("Nao ha numeros pares");
	}else{
		printf("Media dos %d pares e %.2f\n", par, (float)soma/par);
	}
	
	return 0;
}
