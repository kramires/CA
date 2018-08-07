#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int cont;
	int vetor [3];
	for (cont=0; cont<=2; cont++){
		printf("Digite um valor inteiro:\n");
		scanf ("%d", &vetor[cont]);
	}
		for (cont=2; cont>=0; cont--){
		printf("\n O valor digitado na posição %d eh: %d\n\n",cont, vetor[cont]);
	}
}