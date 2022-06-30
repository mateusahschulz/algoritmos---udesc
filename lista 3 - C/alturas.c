#include <stdio.h>
#include <stdlib.h>

//Alturas

int main(int argc, char *argv[]) {
	float altura, maior = 0, media, soma = 0, cont_m = 0;
	char sexo;
	int i, numPessoas;
	printf("Digite o numero de pessoas: ");
	scanf("%d", &numPessoas);
	for(i = 1; i <= numPessoas; i++){
		printf("Qual o seu sexo? ");
		scanf(" %c", &sexo);
		switch(sexo){
			case 'm':
				printf("Digite sua altura: ");
				scanf("%f", &altura);
				if (altura > maior){
					maior = altura;
				}
				break;
			case 'f':
				printf("Digite sua altura: ");
				scanf("%f", &altura);
				soma += altura;
				cont_m ++;
				break;
		}
	}
	media = soma / cont_m;
	printf("A maior altura entre os homens foi de %.2f\n", maior);
	printf("A media de altura das mulheres foi de %.2f", media);
	
	
	
	return 0;
}