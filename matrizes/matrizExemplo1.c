#include <stdio.h>
#include <stdlib.h>

int main(){
	int mat[4][4], i, j;
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			printf("M[%d, %d] = ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			printf("%4d", mat[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
