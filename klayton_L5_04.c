#include <stdio.h>
#include <stdlib.h>

int main (){
	int count, num_func, codigo, horas, num_dep;
	float inss, ir, desconto, salario, salario_liq;

	printf("\nDigite o numero de funcionários da empresa: \n");
	scanf ("%d", &num_func);

	for (count = 1; count <= num_func; count++) {
		printf("Digite o codigo do funcionario:\n");
		scanf ("%d", &codigo);

		printf("Digite o numero de horas trabalhadas:\n");
		scanf ("%d", &horas);

		printf("Digite a quantidade de dependentes: \n");
		scanf ("%d", &num_dep);

		salario = horas * 18 + num_dep *42;
		inss = salario * 0.085;
		ir = salario * 0.05;
		desconto = (inss + ir);
		salario_liq = salario - desconto;

		printf("\n\n O funcionario de codigo %d teve desconto INSS de R$ %.2f e de IR de R$ %.2f \n O salario liquido foi de R$ %.2f \n\n", codigo, inss, ir, salario_liq);
	}
	

}