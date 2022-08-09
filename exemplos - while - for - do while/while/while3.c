#include<stdio.h>

// Geração de valores de 1 até N.

int main(int argc, char const *argv[])
{
    int n;
    printf("Digite um numero: ");
    scanf("%i", &n);
    int cont = 1;       //contador começa com 1
    while( cont <= n ) {
        printf("%i\n", cont);      //mostra contador  
        cont ++;        //incrementa contador
    }

    return 0;
}
