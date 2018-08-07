#include <stdio.h>
#include <stdlib.h>

int main (){
	int  num, count;
	float pares = 0, soma_pares = 0;
	float impares = 0, soma_impares = 0, media;
	

	
	for (count = 0; count <= 4;count++){
		printf("Digite um numero inteiro:\n");
		scanf ("%d",&num);
		
		if (num%2 == 1) {
			impares = impares + 1;
			soma_impares = soma_impares+num;
			media = soma_impares/impares;
		}

		else {
			pares = pares + 1;
			soma_pares = soma_pares + num;
			}
	}

	printf("\tO numeros de impares é: %.0f\n", impares);
	printf("\tO numeros de pares é: %.0f\n", pares);
	printf("\tA soma de numeros pares é: %.0f\n", soma_pares);
	printf("\tA media de numeros impares é: %.2f\n", media);
	
	

}
