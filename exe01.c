#include <stdio.h>
#include <stdlib.h>

int f(int a, int b){
	if (b==0) return a;
	else f(b, a%b);
}

int main(){
	int a,b, resultado;
	printf("Digite o valor de a:\n");
	scanf("%d", &a);

	printf("Digite o valor de b:\n");
	scanf("%d", &b);

	resultado = f(a,b);
	printf("O resultado é: %d\n", resultado);


}