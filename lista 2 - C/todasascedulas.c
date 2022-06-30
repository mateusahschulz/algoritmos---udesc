#include<stdio.h>

int main(int argc, char const *argv[])
{
    int valor, nota50, nota20, nota10, nota5, nota2, moeda, resto;
    printf("Informe o valor: ");
    scanf("%d", &valor);
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
    moeda = resto / 1;

    if (nota50 != 0){
        printf("Quantidade de notas de 50: %d\n", nota50);
    }
    if (nota20 != 0){
        printf("Quantidade de notas de 20: %d\n", nota20);
    }
    if (nota10 != 0){
        printf("Quantidade de notas de 10: %d\n", nota10);
    }
    if (nota5 != 0){
        printf("Quantidade de notas de 5: %d\n", nota5);
    }
    if (nota2 != 0){
        printf("Quantidade de notas de 2: %d\n", nota2);
    }
    if (moeda != 0){
        printf("Quantidade de moedas de 1 real: %d", moeda);
    }





    return 0;
}
