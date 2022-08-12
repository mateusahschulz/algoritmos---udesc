#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIN 5
#define COL 6

int main(){
	srand(time(0));
	int m[LIN][COL], i, j, par = 0, soma = 0;
	for(i = 0; i < LIN; i++){
		for(j = 0; j < COL; j++){
			m[i][j] = rand() % 100 + 1;
			if(m[i][j] % 2 == 0){
				soma += m[i][j];
				par++;
			} 
			printf("%4d", m[i][j]);
		}
		printf("\n");
	}
	printf("------------------------\n");
	printf("Media dos valores pares e de: %.2f", (float)soma/par);
	
	return 0;
}

