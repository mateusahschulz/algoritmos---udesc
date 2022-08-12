#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIN 5
#define COL 3

int main(){
	srand(time(0));
	int A[LIN][COL], i, j, par = 0, impar = 0; 
	for(i = 0; i < LIN; i++){
		for(j = 0; j < COL; j++){
			A[i][j] = rand() % 100 + 1;
			if(A[i][j] % 2 == 0){
				par++;
			}else{
				impar++;
			}
			printf("%4d", A[i][j]);
		}	
		printf("\n");
	}
	printf("-------------------------------\n");
	printf("Quantidade de par na matriz e de: %d\n", par);
	printf("Quantidade de impar na matriz e de: %d\n", impar);
	printf("Porcentagem de pares na matriz e de: %.2f\n", (float)(100 * par) / (LIN * COL));
	printf("Porcentagem de impares na matriz e de: %.2f\n", (float)(100 * impar) / (LIN * COL));
	
	return 0;
}

