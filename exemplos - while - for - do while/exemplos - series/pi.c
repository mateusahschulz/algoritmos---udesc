#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Gerador do número de pi

int main(int argc, char *argv[]) {
	long long int n, i, cont;
	scanf("%lld", &n);
	double pi = 0;
	for (i = 1, cont = 0; cont <= n; i += 2, cont++){
		if (cont % 2 != 0){
			pi -= (4.0 / i);
		}else{
			pi += (4.0 / i);
		}
	}	
	printf("%.15lf", pi);

	return 0;
}