#include<stdio.h>

int main(int argc, char const *argv[]){
    float vi, tempo, acel;
    printf("Insira a velocidade inicial: ");
    scanf("%f", &vi);
    printf("Insira a aceleracao: ");
    scanf("%f", &acel);
    printf("Insira o tempo: ");
    scanf("%f", &tempo);
    float v = vi + (acel * tempo);
    printf("A velocidade do objeto e de %.2f", v);
      

    return 0;
}
