#include<stdio.h>

int main(int argc, char const *argv[])
{
    int valor, nota50, nota20, nota10, nota5, nota2, moeda, resto;
    printf("Informe o valor: ");
    scanf("%i", &valor);

    nota50 = valor / 50;
    resto = valor % 50;
    nota20 = resto / 20;
    resto = resto % 20;
    nota10 = resto / 10;
    resto = resto % 10;
    nota5 = resto / 5;
    resto = resto % 5;
    nota2 = resto / 2;
    resto = resto % 2;
    moeda = resto;

    printf("%i em cedulas equivale a:\n %i notas de 50\n %i notas de 20\n %i notas de 10\n %i notas de 5\n %i notas de 2\n %i moedas", valor, nota50, nota20, nota10, nota5, nota2, moeda);


    return 0;
}
