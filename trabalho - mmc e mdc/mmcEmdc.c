#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int op;
	printf("Digite a opção desejada: \n");
	printf("1 - Calcular MMC e MDC\n");
	printf("2 - Sair do programa\n");
	scanf("%d", &op);
	while(op == 1){
		int a, b, mmc = 1, mdc = 1, div = 2, novoa, novob;
		do{	
			printf("Digite o primeiro valor:\n");
			scanf("%d", &a);
			printf("Digite o segundo valor:\n");
			scanf("%d", &b);
			novoa = a;
			novob = b;
		}while(a <= 0 || b <= 0);
		while(a != 1 || b != 1){
			int cont = 0;
			if (a % div == 0 || b % div == 0){
				if (a % div == 0){
					a = a / div;
					cont ++;
				}
				if (b % div == 0){
					b = b / div;
					cont++;
				}
				if (cont == 2){
					mdc *= div;
				}
				mmc *= div;
			}else{
				div++;
			}
		}
		printf("MMC de %d e %d é %d\n", novoa, novob, mmc);
		printf("MDC de %d e %d é %d\n", novoa, novob, mdc);
		printf("Digite a opção desejada: \n");
		printf("1 - Calcular MMC e MDC\n");
		printf("2 - Sair do programa\n");
		scanf("%d", &op);
	}
	printf("Obrigado por usar");
	
	return 0;
}
