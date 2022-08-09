#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int op, n1, n2;
	do{
		printf("\n1 - Soma\n2 - Subtracao\n3 - Divisao\n4 - Multiplicacao\n5 - Exit\nOpcao: ");
		scanf("%i", &op);
		
		if(op > 0 && op < 5){
			printf("Digite o 1 valor: ");
			scanf("%d", &n1);
			printf("Digite o 2 valor: ");
			scanf("%d", &n2);
		}
		switch(op){
			case 1:
				printf("Soma: %d\n", n1 + n2);
				break;
			case 2:
				printf("Subtracao: %d\n", n1 - n2); 
				break;
			case 3:
				if (n2 != 0){
					printf("Divisao: %d\n", n1 / n2); 
				}else{
					printf("Entrada invalida para divisao!\n");
				}
				break;
			case 4:
				printf("Multiplicacao: %d\n", n1 * n2); 
				break;
			case 5:
				printf("Obrigado por usar!");
				break;
			default:
				printf("Entrada invalida\n");
		}
	}while(op != 5);
	
	return 0;
}