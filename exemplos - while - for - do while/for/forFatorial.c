#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Digite um numero: ");
    scanf("%i", &n);
    int fat = 1;        //acumulador
    int cont;       //contador
    for(cont = 1; cont <= n; cont ++){
        fat = fat * cont;
    }       
    printf("Fatorial de %i: %i\n", n, fat);

    return 0;
}
