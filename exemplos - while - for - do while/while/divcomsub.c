#include <stdio.h>

//Divisão inteira usando subtrações.

int main(int argc, char const *argv[])
{
    int dividendo, divisor;
    printf("Digite o dividendo ");
    scanf("%i", &dividendo);
    printf("Digite o divisor ");
    scanf("%i", &divisor);

    int quociente = 0, resto = dividendo;
    while (resto >= divisor){
        resto = resto - divisor;
        quociente++;
    }
    printf("Quociente %i\n", quociente);
    printf("Resto %i\n", resto);

    return 0;
}
