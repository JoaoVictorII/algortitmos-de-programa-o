#include <stdio.h>
#include <stdlib.h>

//programa que l� 2 notas e calcula a m�dia aritm�tica.
//apresenta situa��es do aluno.

int main(){
	float n1, n2, mediaA;

	printf("\nDigite a nota 1: ");
	scanf("%f", &n1);
	
	printf("\nDigite a nota 2: ");
	scanf("%f", &n2);
	
	mediaA = (n1 + n2) / 2;
	printf("\nA nota �: %.1f: ", mediaA);
	
	if(mediaA >= 6.0){
		if(mediaA >=8.0){
			printf("Aprovado com conceito A");
		}
		else {
			printf("aprovado com conceito B");
			}
			printf ("\n\n!!PARAB�NS!!");
    }
    else if(mediaA <4.0){
    	if(mediaA >=2.0){
    		printf("\n\nReprovado seu burro");
		}
		else{
			printf("\n\nReprovado burrao");
			
		}
	}
	else{
		printf("\n\nEm recupera�ao");
		
}
				
	return 0;
	}
			
