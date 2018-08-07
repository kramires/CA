#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	int Questao, A = 8, B = 5, C = -4, D = 4, Delta, Media1, Resultado, h;
	float pesoideal, Celsius, F, TV, Comissao, Sb, b, Perimetro, Media2, alt, Area;
	printf ("***Lista de Execício 2****\n");
	printf ("***Construcao de Algoritmos***\n");
	printf ("***Klayton Ramires****\n");
	printf ("[1] Questao 1\n");
	printf ("[2] Questao 2\n");
	printf ("[3] Questao 3\n");
	printf ("[4] Questao 4\n");
	printf ("[5] Questao 5\n");
	printf ("[0] Sair do programa digite 0\n\n");

	printf("digite o numero da Questao:\n");
	scanf ("%d", &Questao);
	
	switch (Questao)
	{
		case 1:
		
			 A = 8, B = 5, C = -4, D = 4;

			 Delta = B*B-4*A*C;

			 Media1 = A+B+C+D/4;

			 Media2 = (A+B+C+D)/4;

			 Resultado = A+B-10*C;

			printf(" Delta = %d\n Media1 = %d\n Media2 = %.2f\n Resultado = %d\n\n", Delta, Media1, Media2, Resultado);
		
			break;

		case 2:

			

			printf ("Escreva a altura em cm:");
    		scanf ("%d", &h);

			pesoideal = (h-100) - ((h-150)/4);

			printf ("O peso ideal eh: %.2f\n\n", pesoideal);
			
			break;
		
		case 3:

			

			printf("Escreva a temperatura em graus Celsius:");
			scanf("%f", &Celsius);

			F = 1.8*(Celsius)+32;

			printf("F: %.1f\n\n", F);

			break;

		case 4:

	

			printf("Escreva o total vendido no mês:");
			scanf("%f", &TV);

			Comissao = TV/10;

			Sb = 1200 + Comissao;

			printf("O salario bruto eh: %.2f\n\n", Sb);

			break;

		case 5:

			

			printf ("digite a base do triangulo:");
			scanf ("%f", &b);

			 printf ("digite a altura do triangulo:");
			 scanf("%f", &alt);

			 Perimetro = 2*(b+alt), Area = b*alt;

			printf ("Perimetro = %.2f\n Area = %.2f\n\n", Perimetro, Area);

			break;

		case 0:
			printf ("saindo do programa...\n\n");
			break;

		default: 
			printf ("opcao invalida. Escolha outra opcao a partir do menu\n\n");

			break;

	}

}


