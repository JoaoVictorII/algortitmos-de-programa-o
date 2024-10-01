#include <stdio.h>
#include <locale.h>

/*Programa que imprime o texto "olá mundo" na tela*/

int main (){
	double tempoTotal = 0.0000000000003295;
	char palavra[10] = "adicionar";
	int numero = 15;
	char caractere = '%';
	
	setlocale(LC_ALL, "portuguese");
	
	
// bloco referente ao Olá mundo!
		
/*	printf("olá mundo!");
	printf("\n\nO tempo total é: %.15f", tempoTotal );
	printf("n\n\O tempo total em notação científica é: %.4E", tempoTotal);
	printf("n\n\O tempo total em notação científica é: %.4G", tempoTotal);
*/

//	bloco ref. formato de saída

/*	printf("\n\nO tempo total é: %.15f", tempoTotal );
	printf("\n\nO tempo total é: %x", tempoTotal );
*/

//	bloco referente ao "adicionar 15%"
/*	printf("adicionar 15%%");
*/

//	bloco para leitura de dados com scanf
	int x;
	char carac;
	
//	printf("Digite um valor inteiro: ");
//	scanf("%d", &x);
//	printf("\n\nO valor inteiro digitado foi: %d\n\n", x);
//	system("pause");
	
	printf("\nDigite um caractere: " );
//	carac = getchar();
	scanf("%c", &carac);
	printf("\n\nO caractere digitado foi: %c\n\n", carac );
	system("pause");
	
	
	return 0;	
}
