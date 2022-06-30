#include <stdio.h>
#include <stdlib.h>

//Pesquisa da empresa.

int main(int argc, char *argv[]) {
	char sexo, resposta;
	int i, n;
	float cont_sm = 0, cont_sf = 0, cont_nm = 0, cont_nf = 0;
	printf("Quantidade de pessoas a serem entrevistadas: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++){
		printf("Qual o seu sexo(f/m)? ");
		scanf(" %c", &sexo);
		switch(sexo){
			case 'm':
				printf("Voce gostou do produto(s/n)? ");
				scanf(" %c", &resposta);
				if(resposta == 's'){
					cont_sm ++;
				}else{
					cont_nm++;
				}
				break;
			case 'f':
				printf("Voce gostou do produto(s/n)? ");
				scanf(" %c", &resposta);
				if(resposta == 's'){
					cont_sf ++;
				}else{
					cont_nf++;
				}
				break;
		}
	}
	printf("\nTotal de respostas 'sim': %.0f\n", cont_sm + cont_sf);
	printf("Total de respostas 'nao': %.0f\n", cont_nm + cont_nf);
	printf("Percentagem feminina de resposta 'sim': %.2f\n", (100 * cont_sf) / (cont_sf + cont_nf));
	printf("Percentagem masculina de resposta 'nao': %.2f\n", (100 * cont_nm) / (cont_nm + cont_sm));
	
	
	return 0;
}