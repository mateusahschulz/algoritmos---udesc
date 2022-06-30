#include<stdio.h>

int main(int argc, char const *argv[])
{
    char nome[20];
    float horas, valor;

    printf("Digite o nome do funcionario: ");
    scanf("%s", &nome);
    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%f", &horas);
    printf("Digite o valor recebido por hora: ");
    scanf("%f", &valor);
    printf("O salario do funcionario chamado %s e de %.2f reais.", nome, horas * valor);
    

    return 0;
}
