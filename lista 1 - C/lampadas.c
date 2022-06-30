#include<stdio.h>

int main(int argc, char const *argv[])
{
    float potencia, largura, comprimento, area, potnec, lampadas;
    printf("Informe a potencia em watts da lampada utilizada: ");
    scanf("%f", &potencia);
    printf("Informe a largura do comodo: ");
    scanf("%f", &largura);
    printf("Informe o comprimento do comodo: ");
    scanf("%f", &comprimento);

    area = largura * comprimento;
    potnec = 18 * area;
    lampadas = potnec / potencia;
    printf("O numero de lampadas necessaria e de %.2f", lampadas);


    return 0;
}
