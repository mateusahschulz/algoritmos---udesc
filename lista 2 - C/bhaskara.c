#include<stdio.h>
#include<math.h>


int main(int argc, char const *argv[])
{
    float a, b, c;
    printf("Informe o valor de a: ");
    scanf("%f", &a);
    printf("Informe o valor de b: ");
    scanf("%f", &b);
    printf("Informe o valor de c: ");
    scanf("%f", &c);
    if (a == 0){
        printf("Equacao nao e de segundo grau!");
    }else{
        float delta = b * b - 4 * a * c;
        if (delta < 0){
            printf("Nao existem raizes reais");
        }else{
            float x1 = (-b + sqrt(delta))/(2 * a);
            float x2 = (-b - sqrt(delta))/(2 * a);
            printf("x1 = %.2f e x2 = %.2f", x1, x2);
        }
    }

    return 0;
}
