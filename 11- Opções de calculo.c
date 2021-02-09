#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
	setlocale (LC_ALL, "portuguese") ;
	
	float numero1, numero2, resposta ;
	int opcao ;
	
	printf ("\n Digite 1 para somar.") ;
	printf ("\n Digite 2 para subtrair.") ;
	printf ("\n Digite 3 para multiplicar.") ;
	printf ("\n Digite 4 para dividir.") ;
	printf ("\n Digite 5 para sair.") ;
	
	printf ("\n") ;

	do {
		
		printf ("\n\n\n") ;
		
		printf ("\n Digite um número..: ") ;
		scanf ("%f", &numero1) ;
		
		printf ("\n Digite o segundo número..:") ;
		scanf ("%f", &numero2) ;
		
		printf ("\n Digite uma dás opções..: ") ;
		scanf ("%d", &opcao) ;
		
		
		switch (opcao)
		{
			case 1 :
				resposta = numero1 + numero2 ;
			
				printf ("\n À resposta da soma foi %.2f", resposta) ;
			break ;
			
			
			case 2 :
				resposta = numero1 - numero2 ;
			
				printf ("\n À resposta da subtração foi %.2f", resposta) ;
			break ;
			
			
			case 3 :
				resposta = numero1 * numero2 ;
			
				printf ("\n À resposta da multiplicação foi %.2f", resposta) ;
			break ;
			
			
			case 4 :
				resposta = numero1 / numero2 ;
			
				printf ("\n À resposta da divisão foi %.2f", resposta) ;
			break ;
			
			
			case 5 :
				printf ("\n inserrando calculadora") ;
			break ;
			
			default :
				printf ("\n Digitado incarretamente") ;			
		}
				
	} while (opcao != 5) ;
	
	return 0 ;
	system ("pause") ;
}
