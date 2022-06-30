#include<stdio.h>

int main(int argc, char const *argv[])
{
    float x, y;
    printf("Digite o valor de x: ");
    scanf("%f", &x);
    printf("Digite o valor de y: ");
    scanf("%f", &y);

    if (x == 0 && y == 0){
        printf("Origem");
    }else{
        if (x > 0 && y > 0){
            printf("Q1");
        }else{
            if (x < 0 && y > 0){
                printf("Q2");
            }else{
                if (x < 0 && y < 0){
                    printf("Q3");
                }else{
                    if (x > 0 && y < 0){
                        printf("Q4");
                    }else{
                        if(x == 0){
                            printf("Eixo Y");
                        }else{
                            printf("Eixo X");
                        }
                    }
                }
            }
        }
    }

    return 0;
}
