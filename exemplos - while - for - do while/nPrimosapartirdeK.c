#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Mostra na tela n primos a partir de k.

int main(int argc, char *argv[]) {
	int n, k, i;
	printf("Quantos primos sao desejados: ");
	scanf("%d", &n);
	printf("A partir de qual numero: ");
	scanf("%d", &k);
	int cont = 0;
	while (cont < n){
		float r = sqrt(k);
		int eh_primo = 1;
		for (i = 2; i <= r && eh_primo; i++){
			if (k % i == 0){
				eh_primo = 0;
			}
		}
		if (eh_primo){
			cont++;
			printf("%d: %d\n", cont, k);
		}
		k++;
	}
	
	return 0;
}