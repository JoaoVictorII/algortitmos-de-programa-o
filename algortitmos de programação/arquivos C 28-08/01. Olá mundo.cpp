#include <stdio.h>
#include <locale.h>

/*Programa que imprime o texto "ol� mundo" na tela*/

int main (){
double tempoTotal = 0.0000000000003295;

	setlocale(LC_ALL, "portuguese");		
	printf("ol� mundo!");
	printf("\n\nO tempo total �: %.15f", tempoTotal );
	printf("n\n\O tempo total em nota��o cient�fica �: %.4E", tempoTotal);
	printf("n\n\O tempo total em nota��o cient�fica �: %.4G", tempoTotal);

	
	return 0;	
}
