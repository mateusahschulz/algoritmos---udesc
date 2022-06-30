#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Informe um valor de 1 a 9: ");
    scanf("%i", &n);
    switch (n){
        case 1 ... 9:
            printf("Valor esta na faixa permitida");
            break;
        default:
            printf("Valor esta fora da faixa permitida");
    }

    return 0;
}
