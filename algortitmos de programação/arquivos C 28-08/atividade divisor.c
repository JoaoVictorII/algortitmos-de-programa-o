#include <stdio.h>
#include <stdlib.h>

/*programa que calcula a divis�o de dois n�meros inteiros */

int main(){
	float resultado;
	int dividendo, divisor;
	
	printf("\nEntre com o valor do dividendo:" );
	scanf("%d", &dividendo);

	printf("\nEntre com o valor do divisor: ");
	scanf("%d", &divisor);

	resultado = (float) dividendo / divisor;
	
	printf("\nO resultado �: %.2f", resultado ); 
	
	return 0;
}

