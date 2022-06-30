#include<stdio.h>

int main(int argc, char const *argv[])
{
    float salario, novosalario;
    char nome[20];
    printf("Informe o nome do funcionario: ");
    scanf("%s", &nome);
    printf("Informe o salario: ");
    scanf("%f", &salario);
    
    if (salario <= 400) {
        novosalario = salario + (salario * 0.15);
        printf("Nome: %s\nPorcentagem de aumento: 15 porcento\nSalario atual: %.2f reais\nNovo salario: %.2f reais", nome, salario, novosalario);
    }else{
        if (salario <= 700){
            novosalario = salario + (salario * 0.12);
            printf("Nome: %s\nPorcentagem de aumento: 12 porcento\nSalario atual: %.2f reais\nNovo salario: %.2f reais", nome, salario, novosalario);
        }else{
            if (salario <= 1000){
                novosalario = salario + (salario * 0.1);
                printf("Nome: %s\nPorcentagem de aumento: 10 porcento\nSalario atual: %.2f reais\nNovo salario: %.2f reais", nome, salario, novosalario);
            }else{
                if (salario <= 1800){
                    novosalario = salario + (salario * 0.07);
                    printf("Nome: %s\nPorcentagem de aumento: 7 porcento\nSalario atual: %.2f reais\nNovo salario: %.2f reais", nome, salario, novosalario);
                }else{
                    if (salario <= 2500){
                        novosalario = salario + (salario * 0.04);
                        printf("Nome: %s\nPorcentagem de aumento: 4 porcento\nSalario atual: %.2f reais\nNovo salario: %.2f reais", nome, salario, novosalario);
                    }else{
                        printf("Nome: %s\nPorcentagem de aumento: SEM AUMENTO\nSalario atual: %.2f reais\nNovo salario: %.2f reais", nome, salario, salario);
                    }
                }
            }
        }    
    }

    return 0;
}
