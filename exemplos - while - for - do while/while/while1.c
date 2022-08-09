#include<stdio.h> 

// Validação da entrada de dados

int main(int argc, char const *argv[])
{
    float nota;
    printf("Digite a nota (0 - 10): ");
    scanf("%f", &nota);
    while (nota < 0 || nota > 10) {
        printf("Entrada invalida! Digite a nota (0 - 10): ");
        scanf("%f", &nota);
    }

    return 0;
}
