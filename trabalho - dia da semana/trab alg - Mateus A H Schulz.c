// Aluno: Mateus A. H. Schulz 
// Curso: Tecnologia em Análise e Desenvolvimento de Sistemas
// Trabalho de Algoritmo: Programa em C que descobre o dia da semana, dados dia, mês e ano
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int dia, mes, ano, semana, restoano, restodividido, chavemes, chaveseculo, soma;
    printf("Digite o dia: ");
    scanf("%i", &dia);
    printf("Digite o mes: ");
    scanf("%i", &mes);
    printf("Digite o ano: ");
    scanf("%i", &ano);
    if ((dia >= 1 && dia <= 31) && (mes >= 1 && mes <= 12) && (ano >= 1800 && ano <= 2199)){
        restoano = ano % 100;
        restodividido = restoano / 4;
        switch (mes){
            case 1:
                if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)){
                    chavemes = 0;
                }else{
                    chavemes = 1;
                }
                break;
            case 2:
                if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0 )){
                    chavemes = 3;
                }else{
                    chavemes = 4;
                }
                break;
            case 3:
                chavemes = 4;
                break;
            case 4:
                chavemes = 0;
                break;
            case 5:
                chavemes = 2;
                break;
            case 6:
                chavemes = 5;
                break;
            case 7:
                chavemes = 0;
                break;
            case 8:
                chavemes = 3;
                break;
            case 9:
                chavemes = 6;
                break;
            case 10:
                chavemes = 1;
                break;
            case 11:
                chavemes = 4;
                break;
            case 12:
                chavemes = 6;
                break;
        }
        switch (ano){
            case 1800 ... 1899:
                chaveseculo = 2;
                break;
            case 1900 ... 1999:
                chaveseculo = 0;
                break;
            case 2000 ... 2099:
                chaveseculo = 6;
                break;
            case 2100 ... 2199:
                chaveseculo = 4;
                break;
        }
        soma = restoano + restodividido + chavemes + chaveseculo + dia;
        semana = soma % 7;
        switch (semana) {
            case 0: 
                printf("%i/%i/%i e sabado!", dia, mes, ano);
                break;
            case 1:
                printf("%i/%i/%i e domingo!", dia, mes, ano);
                break;
            case 2:
                printf("%i/%i/%i e segunda-feira!", dia, mes, ano);
                break;
            case 3:
                printf("%i/%i/%i e terca-feira!", dia, mes, ano);
                break;
            case 4:
                printf("%i/%i/%i e quarta-feira!", dia, mes, ano);
                break;
            case 5:
                printf("%i/%i/%i e quinta-feira!", dia, mes, ano);
                break;
            case 6:
                printf("%i/%i/%i e sexta-feira!", dia, mes, ano);
                break;
        }
    }else{
        printf("Entradas invalidas! Insira entre 1/1/1800 ate 31/12/2199.");
    }

    return 0;
}
