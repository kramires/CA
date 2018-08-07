# CA
Construção de Algoritmos
#include <stdio.h>
#include <stdlib.h>

int main()

{
	int h;

	printf ("Escreva a altura em cm:");
    scanf ("%d", &h);

	float pesoideal = (h-100) - ((h-150)/4);

	printf ("O peso ideal eh: %.2f\n\n", pesoideal);

}
