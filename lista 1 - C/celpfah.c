#include<stdio.h>

int main(){
    float celsius, fahrenheit;
    printf("Digite a tempertura em fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5/9;
    printf("A temperatura em celsius e de %.2f", celsius);

    return 0;
}
