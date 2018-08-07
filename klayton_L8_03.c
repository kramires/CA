#include <stdio.h>
#include <stdlib.h>

int fatorial(int n){
	if (n<=1) return 1; // A condição de parada está quando n for menor ou igual a 1 retorna o numero 1.
	else return n * fatorial(n-1);
}


int main (){
	
	int n, resultado;
	printf("Forneca um numero:");
	scanf ("%d", &n);

	resultado = fatorial (n);
	printf("O fatorial de %d eh: %d\n", n, resultado);
} 