#include <stdio.h>

//Média de uma série de números usando do...while.

int main(int argc, char const *argv[])
{
    int cont = 0;
    float x, soma = 0;
    do{
        printf("Digite o %i numero: ", cont + 1);
        scanf("%f", &x);
        if (x != 0) { // evita o processamento do zero.
            soma = soma + x;
            cont ++;
        }
    } while(x != 0);
    if (cont > 0){
        float media = soma / cont;
        printf("Media = %f\n", media);
    }else{
        printf("Entrada Invalida!\n");
    }


    return 0;
}
