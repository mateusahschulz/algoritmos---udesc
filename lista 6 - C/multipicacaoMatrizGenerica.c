#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#define LIN 10
#define COL 10

//Cálculo da multiplicação de matrizes com o tamanho dado pelo usuário.

int main(){
	setlocale(LC_ALL, "portuguese");
	srand(time(0));
	int A[LIN][COL], B[LIN][COL], linA, colA, linB, colB, i, j;
	do{
		printf("Digite números de no máximo até 10\n");
		printf("Quantidade de linhas e colunas de A: ");
		scanf("%d%d", &linA, &colA);
		printf("Quantidade de linhas e colunas de B: ");
		scanf("%d%d", &linB, &colB);
	}while(linA > 10 || colA > 10 || linB > 10 || colB > 10);
	for(i = 0; i < linA; i++){
		for(j = 0; j < colA; j++){
			A[i][j] = rand() % 10 + 1;
		}
	}
	for(i = 0; i < linB; i++){
		for(j = 0; j < colB; j++){
			B[i][j] = rand() % 10 + 1;
		}
	}
	//Mostra matriz A e B
	printf("\nMATRIZ A (%dx%d):\n\n", linA, colA);
	for(i = 0; i < linA; i++){
		for(j = 0; j < colA; j++){
			printf("%4d", A[i][j]);
		}
		printf("\n");
	}
	printf("\n-----------------------\n");
	printf("\nMATRIZ B (%dx%d):\n\n", linB, colB);
	for(i = 0; i < linB; i++){
		for(j = 0; j < colB; j++){
			printf("%4d", B[i][j]);
		}
		printf("\n");
	}
	printf("\n-----------------------\n");
	if(colA == linB){
		int C[linA][colB], k, soma;
		int limitek = linB;
		for(i = 0; i < linA; i++){
			for(j = 0; j < colB; j++){
				for(k = 0, soma = 0; k < limitek; k++){
					soma += A[i][k] * B[k][j];
				}
				C[i][j] = soma;
			}	
		}
		printf("\nMATRIZ RESULTANTE DA MULTIPLICAÇÃO (%dx%d):\n\n", linA, colB);
		for(i = 0; i < linA; i++){
			for(j = 0; j < colB; j++){
				printf("%5d", C[i][j]);
			}
			printf("\n");
		}
	} else{
		printf("Não é possível realizar a multiplicação!");
	}	
	return 0;
}
