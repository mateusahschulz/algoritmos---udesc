#include<stdio.h>

int main(int argc, char const *argv[])
{
    float v1, v2, resultado;
    int caso;
    printf("Digite o valor 1: ");
    scanf("%f", &v1);
    printf("Digite o valor 2: ");
    scanf("%f", &v2);
    printf("Digite o a operacao desejada: ");
    scanf("%d", &caso);
    switch (caso){
        case 1:
            resultado = v1 + v2;
            printf("O resultado e %.2f", resultado);
            break;
        case 2:
            resultado = v1 - v2;
            printf("O resultado e %.2f", resultado);
            break;
        case 3:
            resultado = v1 * v2;
            printf("O resultado e %.2f", resultado);
            break;
        case 4:
            resultado = v1 / v2;
            if (v2 == 0){
                printf("Impossivel dividir um numero por 0");
            }else{
            printf("O resultado e %.2f", resultado); 
            }
            break;
        default:
            printf("Entrada invalida");
    }

    return 0;
}
