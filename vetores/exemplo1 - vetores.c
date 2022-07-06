#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Primeiro exemplo de vetores.


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int v[10];
	int i;
	
	for(i = 0; i < 10; i++){
		printf("Digite o %d° valor: ", i + 1);
		scanf("%d", &v[i]); //Entrada
	}
	
	for(i = 0; i < 10; i++){
		printf("%d : %d\n", i, v[i]); //Saída
	}
	
	return 0;
}
