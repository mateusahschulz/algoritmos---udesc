#include<stdio.h>

int main(int argc, char const *argv[])
{
    char nome[20];
    float dist, temp, vm;

    printf("Digite o nome do piloto: ");
    scanf("%s", &nome);
    printf("Digite a velocidade percorrida em km: ");
    scanf("%f", &dist);
    printf("Digite o tempo percorrido em horas: ");
    scanf("%f", &temp);
    vm = dist/temp;
    printf("A velocidade media de %s foi de %.1f km/h", nome, vm);

    return 0;
}
