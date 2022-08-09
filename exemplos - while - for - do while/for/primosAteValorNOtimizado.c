#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Código otimizado. 

int main(int argc, char *argv[]) {
	int a, b, x, cont_p = 0;
	printf("Digite um intervalo: ");
	scanf("%d %d", &a, &b);
	for (x = a; x <= b; x++){
		float r = sqrt(x);
		int i, cont = 0, eh_primo = 1;
		for (i = 2; i <= r && eh_primo; i++){
			if(x % i == 0){
				eh_primo = 0;
			}
		}
		if (eh_primo){
			cont_p++;
			printf("%d: %d \n", cont_p, x);
		}
	}
	
	
	return 0;
}