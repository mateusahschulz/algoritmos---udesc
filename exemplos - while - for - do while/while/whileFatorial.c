#include<stdio.h>

int main(int argc, char const *argv[])
{
    /* int n;
    printf("Digite um numero: ");
    scanf("%i", &n);
    int fat = 1;        //acumulador
    while (n > 0) {
        fat = fat * n;
        n --;
    }
    printf("Fatorial: %i\n", fat); */

    int n;
    printf("Digite um numero: ");
    scanf("%i", &n);
    int fat = 1;        //acumulador
    int cont = 1;       //contador
    while(cont <= n){
        fat = fat * cont;
        cont++;
    }
    printf("Fatorial de %i: %i\n", n, fat);

    return 0;
}
