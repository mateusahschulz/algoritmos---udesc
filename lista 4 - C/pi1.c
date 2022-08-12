#include <stdio.h>
#include <stdlib.h>

//Calcula o valor de pi a partir de uma sequência de n valores.

int main(int argc, char *argv[]) {
	int n, i, cont;
	double pi = 0;
	printf("Digite a quantidade de termos: ");
	scanf("%d", &n);
	for(i = 1, cont = 1; cont <= n; i += 2, cont++){
		if(cont % 2 != 0){
			pi += 4.0 / i;
			printf("+ 4 / %d\n", i);
		}else{
			pi -= 4.0 / i;
			printf("- 4.0 / %d\n", i);
		}
	}
	printf("Pi = %.15lf", pi);
	
	return 0;
}