#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int v[100];
	int i;
	srand(time(0));
	for(i = 0; i < 100; i++){
		v[i] = rand() % 1000;
	}
	for(i = 0; i < 100; i++){
		printf("%d : %d\n", i, v[i]);
	}
	
	return 0;
}
