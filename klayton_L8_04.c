#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n){
	if (n==1 || n==2) return 1; // A condição de parada é quando n igual a 1 ou 2 a função retorna com 1.
	else return fibonacci(n-2) + fibonacci(n-1);
}


int main (){
	
	int n, valor;
	printf("Forneca um posicao na sequencia Fibonacci:");
	scanf ("%d", &n);

	valor = fibonacci (n);
	printf("O valor de %d na sequencia Fibonacci eh: %d\n", n, valor);
} 