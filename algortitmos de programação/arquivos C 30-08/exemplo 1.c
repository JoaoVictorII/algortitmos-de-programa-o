#include <stdio.h>
#include <stdlib.h>

//programa que lê 2 notas e calcula a média aritmética.
//apresenta situações do aluno.

int main(){
	float n1, n2, mediaA;

	printf("\nDigite a nota 1: ");
	scanf("%f", &n1);
	
	printf("\nDigite a nota 2: ");
	scanf("%f", &n2);
	
	mediaA = (n1 + n2) / 2;
	printf("\nA nota é: %.1f: ", mediaA);
	
	if(mediaA >= 6.0){

	printf("\n\naprovado");
	}  
	else if(mediaA <= 6.0){
	printf("\n\nreprovado");	
				
	}
}
