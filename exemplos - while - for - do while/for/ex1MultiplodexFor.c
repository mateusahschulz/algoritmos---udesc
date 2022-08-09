#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n, x, i;
    printf("Digite o valor de n: ");
    scanf("%i", &n);
    printf("Digite o valor de x: ");
    scanf("%i", &x);
    for (i = 0; i <= n; i++ ){
        if (i % x == 0){
            printf("%i e multiplo de %i\n", i, x);
        } else{
            printf("%i\n", i);
        }
    }

    return 0;
}
