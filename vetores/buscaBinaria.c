#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int v[10] = {2, 4, 5, 8, 11, 17, 32, 44, 60, 81};
	int n = 10, chave;
	printf("Digite o valor a ser buscado: ");
	scanf("%d", &chave);
	int achou = 0;
	int ini = 0, fim = n - 1, meio;
	do{
		meio = (ini + fim) / 2;
		if ( v[meio] == chave){
			achou = 1;
		}else{
			if( v[meio] < chave){
				ini = meio + 1;
			}else{
				fim = meio - 1;
			}
		}
	}while( !achou && ini <= fim );
	if (achou){
		printf("Encontrado em %d.\n", meio);
	}else{
		printf("Nao foi encontrado!");
	}
	
	return 0;
}
