#include<stdio.h>

// Cálculo da média de N números.

int main(int argc, char const *argv[])
{
    int n, cont = 1;        //cont começa em 1
    float x, soma = 0;      //soma começa em 0
    printf("Quantos numeros? ");
    scanf("%i", &n);
    while(cont <= n){
        printf("Digite o %i° numero: ", cont);
        scanf("%f", &x);
        soma = soma + x;        //acumula x em soma
        cont++;     //incrementa em cont
    }
    if(n > 0){
        float media = soma / n;
        printf("Media = %f\n", media);      //dividir por 0 nao da.
    }else{
        printf("Entrada invalida!");
    }

    return 0;
}
