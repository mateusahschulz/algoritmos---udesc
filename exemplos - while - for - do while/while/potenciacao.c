#include <stdio.h>

// Cálculo da potenciação. 

int main(int argc, char const *argv[])
{
    // int x, y;
    // printf("Digite dois numeros: ");
    // scanf("%i%i", &x, &y);
    // int z = 1;
    // while (y > 0){
    //     z = z * x;
    //     y = y - 1;
    // }
    // printf("Resultado: %d\n", z);

    // Para quando o expoente é negativo:

    float x;
    int y;
    scanf("%f%i", &x, &y);
    float z = 1;
    if (y < 0){
        x = 1/x;
        y = -y;
    }
    while(y > 0){
        z = z * x;
        y --;
    }
    printf("Resultado: %f\n", z);

    return 0;
}
