#include<stdio.h>

int main(int argc, char const *argv[])
{
    float salariob, ir, inss, sind, liquido;
    printf("Informe seu salario: ");
    scanf("%f", &salariob);
    ir = 0.15 * salariob;
    inss = 0.11 * salariob;
    sind = 0.03 * salariob;
    liquido = salariob - ir - inss - sind;
    printf("Salario Bruto: R$%.2f\n(-)IR(15 porcento): R$%.2f\n(-)INSS(11 porcento): R$%.2f\n(-)Sindicato(3 porcento): R$%.2f\nSalario Liquido: R$%.2f", salariob, ir, inss, sind, liquido);

    return 0;
}
