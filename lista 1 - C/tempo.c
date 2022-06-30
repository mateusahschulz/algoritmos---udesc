#include<stdio.h>

int main(int argc, char const *argv[])
{
    int quant, segundos,  minutos, horas, resto;
    printf("Informe a quantidade de segundos: ");
    scanf("%i", &quant);

    horas = quant / 3600;
    resto = quant % 3600;
    minutos = resto / 60;
    resto = resto % 60;
    segundos = resto;
    printf("%i segundos em horas, minutos e segundos e de: %i horas, %i minutos e %i segundos", quant, horas, minutos, segundos);


    return 0;
}
