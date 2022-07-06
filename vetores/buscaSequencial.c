#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int v[10] = {6, 9, 4, -3, 17, 22, 13, 81, 44, 32};
	int n = 10, chave;
	printf("Digite o valor a ser buscado: ");
	scanf("%d", &chave);
	int achou = 0;
	int i;
	for (i = 0; i < n; i++){
		if (v[i] == chave){
			printf("Encontrado em %d\n", i);
			achou = 1;
		}
	}
	if( !achou ){
		printf("Nao foi encontrado!\n");
	}
	
	return 0;
}
