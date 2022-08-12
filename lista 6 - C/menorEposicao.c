#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIN 7
#define COL 4

int main(){
	srand(time(0));
	int m[LIN][COL], i, j;
	for(i = 0; i < LIN; i++){
		for(j = 0; j < COL; j++){
			m[i][j] = rand() % 100 + 1;
			printf("%4d", m[i][j]);
		}
		printf("\n");
	}
	int menor = m[0][0];
	int i_menor = 0, j_menor = 0;
	for(i = 0; i < LIN; i++){
		for(j = 0; j < COL; j++){
			if(m[i][j] < menor){
				menor = m[i][j];
				i_menor = i;
				j_menor = j;
			}
		}
	}
	printf("O menor valor da matriz e de %d na posicao %dx%d", menor, i_menor, j_menor);
	
	return 0;
}

