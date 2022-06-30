#include <stdio.h>
#include <stdlib.h>

//Calcula e mostra a conversão de fahrenheit para celsius em um determinado intervalo variando a temperatura de 2 em 2 graus.

int main(int argc, char *argv[]) {
	float fah, a, b, celsius;
	printf("Digite o intervalo desejado de temperatura: ");
	scanf("%f %f", &a, &b);
	for (fah = a; fah <= b; fah += 2){
		celsius = (fah - 32) * 5/9;
		printf("%.2f F = %.2f C\n", fah, celsius);
	}
	
	
	return 0;
}