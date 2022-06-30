#include<stdio.h>

int main(int argc, char const *argv[])
{
    float n1, n2, n3, n4, media, exame, novamedia;
    printf("Digite a 1 nota: ");
    scanf("%f", &n1);
    printf("Digite a 2 nota: ");
    scanf("%f", &n2);
    printf("Digite a 3 nota: ");
    scanf("%f", &n3);
    printf("Digite a 4 nota: ");
    scanf("%f", &n4);
    media = (n1 + n2 + n3 + n4)/ 4;
    if (media >= 7){
        printf("Aluno aprovado com %.2f de media!", media);
    }else{
        printf("Digite a nota do exame: ");
        scanf("%f", &exame);
        novamedia = (media + exame)/2;
        if (novamedia >= 5){
            printf("Aluno aprovado com exame com %.2f de media!", novamedia);
        }else{
            printf("Aluno reprovado com %.2f de media.", novamedia);
        }
    }

    return 0;
}
