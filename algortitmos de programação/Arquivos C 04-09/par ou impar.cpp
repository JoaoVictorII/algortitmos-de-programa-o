#include <stdio.h>
#include <stdlib.h>

//programa que lê 2 notas e calcula a média aritmética.
//apresenta situações do aluno.

int main(){
	int numero;

	printf("\nDigite o numero: ");
	scanf("%d", &numero);
	
	if(numero % 2 == 0) {
		printf("\n\nO numero é PAR");
	}
	else{
		printf("\n\nO numero é IMPAR");
	}
	
		

				
	return 0;
	}
