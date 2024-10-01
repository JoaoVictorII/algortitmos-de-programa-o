#include <stdio.h>
#include <locale.h>

/*Programa que imprime o texto "olá mundo" na tela*/

int main (){
double tempoTotal = 0.0000000000003295;

	setlocale(LC_ALL, "portuguese");		
	printf("olá mundo!");
	printf("\n\nO tempo total é: %.15f", tempoTotal );
	printf("n\n\O tempo total em notação científica é: %.4E", tempoTotal);
	printf("n\n\O tempo total em notação científica é: %.4G", tempoTotal);

	
	return 0;	
}
