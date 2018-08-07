#include <stdio.h>
#include <stdlib.h>

void troca(int x, int y){
	int z;
	z=x;
	x=y;
	y=z;

	printf("Os novos valores de x: %d e y: %d\n",x, y);
	
}


int main (){
	int x, y;

	printf("Digite o valor de x:\n");
	scanf("%d", &x);

	printf("Digite o valor de y:\n");
	scanf("%d", &y);

	troca (x,y);

}