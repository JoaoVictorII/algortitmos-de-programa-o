 #include<stdio.h>
 #include<string.h>
 
 int main (){
 	char nome [20];
 	int i;
 	
 	printf("Qual teu nome ?:");  
 	scanf("%[^\n]", nome);
 	printf("Seu nome e %s", nome);
 	printf("\nO tamanho da string e: %d", strlen(nome));
 	
 	printf("\n\n-------- Tamanho sem uso de funçao --------\n\n");
 	
 	for (i=0; nome[i] !='\0'; i++){
 		printf("\nCaractere %0	2d: %c - %d", i,nome[i], nome[i] );
	 }
	 printf("\nO tamanho da string e: %d", i);
 	
 	return 0;
 }
