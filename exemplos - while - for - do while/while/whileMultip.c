#include<stdio.h>

//Multiplicação de 2 números.

int main(int argc, char const *argv[])
{
    int a, b;
    printf("Digite uma multiplicacao: ");
    scanf("%i %i", &a, &b);
    int soma = 0, i = 1;
    while(i <= a){
        soma = soma + b;
        i++;
    }
    printf("%i x %i = %i\n", a, b, soma);

    return 0;
}
