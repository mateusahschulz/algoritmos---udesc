#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int n;
	printf("Digite o a quantidade de valores a serem gerados: ");
	scanf("%d", &n);
	if (n <= 50){
		int v[n], i;
		v[0] = 1;
		v[1] = 1;
		for(i = 2; i < n; i++){
			v[i] = v[i - 2] + v[i - 1];
		}
		for(i = 0; i < n; i++){
			printf("%d ", v[i]);
		}
	}else{
		printf("Valor muito alto");
	}
	
	
	return 0;
}
