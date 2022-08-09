#include<stdio.h>

// Geração de valores de N até 1.

int main(int argc, char const *argv[])
{
    int n;
    scanf("%i", &n);
    while (n > 0){
        printf("%i\n", n);
        n --;
    }

    return 0;
}
