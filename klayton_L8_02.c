#include <stdio.h>
#include <stdlib.h>

int multiplica(int x, int y){
	if(y==0) return y;
	else return x+ multiplica (x, y-1);
}

int main (){
	
	int x, y, resultado;
	printf("Forneca dois numeros para serem mutiplicados:");
	scanf ("%d %d", &x, &y);

	resultado = multiplica (x,y);
	printf("O resultado da mutiplicação eh: %d\n", resultado);
} 