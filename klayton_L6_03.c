#include <stdio.h>
#include <stdlib.h>

int main (){
	float matriz[2][2]; 
	float determinante, diagonal_p, diagonal_sec;
	int i, j;

	for (i=0; i<=1; i++){
		
		for (j=0; j<=1; j++){
			printf("Digite o valor da posicao [%d][%d]: ", i, j);
			scanf("%f", &matriz[i][j]);

			diagonal_p = matriz[0][0] * matriz[1][1];
			diagonal_sec = matriz [0][1] * matriz[1][0];
			}
		}
	determinante = diagonal_p - diagonal_sec;
	printf("O Determinante da Matriz é: %.2f\n\n", determinante);
}