#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int num, soma, total_num;
	float media;
	num = 0;
	soma=0;
	total_num = 0;
	media = 0;

	printf ("Digite um numero inteiro positivo:\n");
	scanf ("%d", &num);
	
	while (num > 0){
		
		if (num > 0){
		soma = soma + num;
		total_num = total_num+1;
		printf ("Digite um numero inteiro positivo:\n");
		scanf ("%d", &num);
		}
		
		
	}
		printf ("PROGRAMA FINALIZADO!\n");
		media = soma/total_num;
		printf ("\t A média dos numeros digitados é: %.2f\n", media);

	return 0;
}