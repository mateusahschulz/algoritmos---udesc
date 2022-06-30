#include<stdio.h>

int main(int argc, char const *argv[])
{
    int x, y, resto;
    printf("Informe o valor de x: ");
    scanf("%d", &x);
    printf("Informe o valor de y: ");
    scanf("%d", &y);
    resto = x % y;
    switch (resto){
        case 1: 
            printf("%d", x + y + resto);
            break;
        case 2: 
            if (x % 2 == 0){
                printf("%d e par\n", x);  
            }else{
                printf("%d e impar\n", x);
            }
            if (y % 2 == 0){
                printf("%d e par", y);
            }else{
                printf("%d e impar", y);
            }
            break;
        case 3: 
            printf("%d", (x + y) * x);
            break;
        case 4:
            if (y != 0){
                printf("%d", (x + y) / y);
            }
            break;
        default:
            printf("%d %d", x*x, y*y);
    }

    return 0;
}
