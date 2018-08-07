#include <stdio.h>
#include <stdlib.h>

int main ()
{
	
	float  x = 1, y = 1; 
	float soma = 0;
	
	
	while (x<=99){

	soma = soma + x/y;
	//printf ("%.2f\n", soma);
	x+=2;
	y++; 

	}

	printf("\tA soma das frações é:\n\t%.2f\n", soma);
	
} 