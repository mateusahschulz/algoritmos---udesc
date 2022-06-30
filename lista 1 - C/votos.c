#include<stdio.h>

int main(int argc, char const *argv[])
{
    float validos, nulos, brancos, total;
    float percentualv, percentualn, percentualb;
    printf("Digite os votos validos: ");
    scanf("%f", &validos);
    printf("Digite os votos nulos: ");
    scanf("%f", &nulos);
    printf("Digite os votos brancos: ");
    scanf("%f", &brancos);

    total = validos + nulos + brancos;
    percentualv = (validos * 100)/ total;
    percentualb = (brancos * 100)/ total;
    percentualn = (nulos * 100)/ total;

    printf("O total de votos foi de %.0f votos.\nPercentual de votos: %.2f porcento de votos validos, %.2f porcento de votos nulos e %.2f porcento de votos brancos.", total, percentualv, percentualn, percentualb);
}
