#include <stdio.h>

// Número é primo ou não.

int main(int argc, char const *argv[])
{
    int x;
    printf("Digite um numero: ");
    scanf("%i", &x);
    int i, cont = 0; //zera o contador 
    for (i = 1; i <= x; i++){ 
        if (x % i == 0){ //é divisor
            cont++;      //incrementa contador
        }
    }
    if (cont == 2){
        printf("%i e primo\n", x);
    }else{
        printf("%i nao e primo\n", x);
    }

    return 0;
}
