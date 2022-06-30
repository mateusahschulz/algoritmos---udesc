#include<stdio.h>

int main(){
    
    float volcaixa, raio, alt;
    printf("Insira o valor do raio: ");
    scanf("%f", &raio);
    printf("Insira a altura: ");
    scanf("%f", &alt);
    volcaixa = (3.14 * raio * raio) * alt;
    printf("O volume da caixa e de %.2f", volcaixa);


    return 0;
}