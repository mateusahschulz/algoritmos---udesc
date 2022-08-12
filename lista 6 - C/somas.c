#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIN 5
#define COL 5

int main(){
	srand(time(0));
	int m[LIN][COL], i, j;
	int somalin4 = 0, somacol2 = 0, diag_princ = 0, diag_sec = 0, somaTotal = 0; 
	for(i = 0; i < LIN; i++){
		for(j = 0; j < COL; j++){
			m[i][j] = rand() % 10 + 1;
			somaTotal += m[i][j];
			if(i == 4){
				somalin4 += m[i][j];
			}
			if(j == 2){
				somacol2 += m[i][j];
			}
			if(i == j){
				diag_princ += m[i][j];
			}
			if(i + j == LIN - 1){
				diag_sec += m[i][j];
			}
			printf("%4d", m[i][j]);
		}
		printf("\n");
	}
	printf("-------------------------------\n");
	printf("Soma dos elementos da linha 4: %d\n", somalin4);
	printf("Soma dos elementos da coluna 2: %d\n", somacol2);
	printf("Soma dos elementos da diagonal principal: %d\n", diag_princ);
	printf("Soma dos elementos da diagonal secundaria: %d\n", diag_sec);
	printf("Soma de todos os elementos da matriz: %d", somaTotal);
	 
	
	return 0;
}

