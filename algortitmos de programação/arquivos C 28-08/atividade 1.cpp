#include <stdio.h>
#include <locale.h>

/*atividade 01*/

int main(){
	float n1, n2, n3, mediaP;
	int p1,p2,p3;
	
	//setlocale

	
	printf("\nDigite sua nota 1: ");
	scanf("nota1", &n1);
	printf("\ndigite o peso na nota 1: ");
	scanf("&d", &p1);

	printf("\nDigite sua nota 2: ");
	scanf("nota2", &n2);
	printf("\ndigite o peso na nota 2: ");
	scanf("&d", &p2);
	
	printf("\nDigite sua nota 3: ");
	scanf("nota1", &n3);
	printf("\ndigite o peso na nota 3: ");
	scanf("&d", &p3);
	
	mediaP = (n1*p1 + n2*p2 + n3*p3  );
	
	printf("a média ponderada das notas é: %f", mediaP );
	
	return 0;
}

