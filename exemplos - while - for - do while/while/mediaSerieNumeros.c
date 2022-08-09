#include <stdio.h>

//Média de uma série de números.

int main(int argc, char const *argv[])
{
    int cont = 0;
    float x, soma = 0;
    printf("Digite o 1 numero: ");
    scanf("%f", &x);
    while (x != 0 ){
        soma = soma + x;
        cont++;
        printf("Digite o %i numero: ", cont + 1);
        scanf("%f", &x);
    }
    if (cont > 0){
        float media = soma / cont;
        printf("Media = %f\n", media);
    }else{
        printf("Entrada Invalida!\n");
    }

    return 0;
}
