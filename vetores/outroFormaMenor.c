#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 8

int main(){
	srand(time(0));
	int v[N], i;
	for (i = 0; i < N; i++){
		v[i] = rand() % 1000 + 1;
		printf("%d\n", v[i]);
	}
	//int menor = v[0];
	int i_menor = 0;
	for (i = 0; i < N; i++){
		if (v[i] < v[i_menor]){
			//menor = v[i];
			i_menor = i;
		}
	}
	printf("Menor: %d(%d)\n", v[i_menor], i_menor);
	
	
	return 0;
}
