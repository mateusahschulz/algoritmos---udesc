#include<stdio.h>

int main(int argc, char const *argv[])
{
    int v1, v2, v3, v4, v5, media;
    printf("Insira o valor 1: ");
    scanf("%d", &v1);
    printf("Insira o valor 2: ");
    scanf("%d", &v2);
    printf("Insira o valor 3: ");
    scanf("%d", &v3);
    printf("Insira o valor 4: ");
    scanf("%d", &v4);
    printf("Insira o valor 5: ");
    scanf("%d", &v5);
    media = (v1 + v2 + v3 + v4 + v5) / 5;
    printf("A media e de %d\n", media);
    if (v1 > media){
        printf("%d\n", v1);
    }
    if (v2 > media){
        printf("%d\n", v2);
    }
    if (v3 > media){
        printf("%d\n", v3);
    }
    if (v4 > media){
        printf("%d\n", v4);
    }
    if (v5 > media){
        printf("%d\n", v5);
    }

    return 0;
}
