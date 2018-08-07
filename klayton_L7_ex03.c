#include <stdio.h>
#include <stdlib.h>

int resto(int x, int y){
	return (x%y);
}


int main (){
	int x, y, resultado;

	printf("Digite um numero: \n");
	scanf("%d", &x);

	printf("Digite outro numero: \n");
	scanf("%d", &y);

	resultado = resto (x,y);
	printf("O resto da divisão do primeiro pelo segundo numero eh: %d\n", resultado);

}