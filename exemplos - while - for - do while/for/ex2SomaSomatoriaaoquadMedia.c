#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int somatoriaQuadrado = 0, i; 
    float media, soma = 0, n;
    printf("Digite a quantidade dos primeiros numeros naturais requeridos: ");
    scanf("%f", &n);
    for (i = 0; i <= n; i ++){
        soma = soma + i;
    }
    printf("Soma: %.0f\n", soma);
    if (n > 0){
        media = soma / n;
        printf("A media da soma dos %.0f primeiros valores naturais e %.2f\n", n, media);
    }else{
        printf("Entrada invalida para se fazer a media\n");
    }

    for (i = 0; i <= n; i++){
        somatoriaQuadrado = somatoriaQuadrado + pow(i, 2);
    }
    printf("Somatoria ao quadrado: %i\n", somatoriaQuadrado);

    



    return 0;
}


