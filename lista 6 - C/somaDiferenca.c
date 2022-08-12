#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIN 4
#define COL 6

int main(){
	srand(time(0));
	int N1[LIN][COL], N2[LIN][COL], M1[LIN][COL], M2[LIN][COL], i, j; 
	for(i = 0; i < LIN; i++){
		for(j = 0; j < COL; j++){
			N1[i][j] = rand() % 10 + 1;
			printf("%4d", N1[i][j]);
		}	
		printf("\n");
	}
	printf("----------------------------\n");
	for(i = 0; i < LIN; i++){
		for(j = 0; j < COL; j++){
			N2[i][j] = rand() % 10 + 1;
			printf("%4d", N2[i][j]);
		}	
		printf("\n");
	}
	printf("----------------------------\n");
	printf("SOMA: \n");	
	for(i = 0; i < LIN; i++){
		for(j = 0; j < COL; j++){
			M1[i][j] = N1[i][j] + N2[i][j];
			printf("%4d", M1[i][j]);
		}
		printf("\n");
	}
	printf("-----------------------------\n");
	printf("DIFERENCA: \n");
	for(i = 0; i < LIN; i++){
		for(j = 0; j < COL; j++){
			M2[i][j] = N1[i][j] - N2[i][j];
			printf("%4d", M2[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
