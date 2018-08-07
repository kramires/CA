#include <stdio.h>
#include <stdlib.h>

int main (){
	
	float matriz[3][3];
	float media, soma=0;
	int i, j;

	for (i=0; i<=2; i++){
		
		for (j=0; j<=2; j++){
			printf("Digite o valor da posicao [%d][%d]: ", i, j);
			scanf("%f", &matriz[i][j]);
			
			if (i==j){
				soma = soma + matriz[i][j];
			}
		}
		
	}

		media = soma/3;
		printf("A media da diagonal principal eh: %.2f\n", media);
}