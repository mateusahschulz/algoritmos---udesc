#include <stdio.h>

// Quantidade de divisores de um número.

int main(int argc, char const *argv[])
{
    int x;
    printf("Digite um numero: ");
    scanf("%i", &x);
    
    int i, cont = 0;
    for (i = 1; i <= x; i++){
        if (x % i == 0){
            cont++;
        }
    }
    printf("%i tem %i divisores\n", x, cont);

    return 0;
}
