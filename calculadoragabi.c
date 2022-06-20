#include <stdio.h>
#include <stdlib.h>




int main(int argc, char *argv[]) {
	int som, sub, mult, oper, n1, n2, div, res;
	printf("Digite uma OPCAO\n");
	printf("1: Para SOMAR\n");
	printf("2: Para SUBTRAIR\n");
	printf("3: Para MULTIPLICAR\n");
	printf("4: Para DIVIDIR\n");
	scanf("%d", &oper);
	
	printf("Digite o numero um:  ");
	scanf("%d", &n1);
	printf("Digite o numero dois:  ");
	scanf("%d", &n2);
	
	if (oper > 4 || oper == 0)
	{
		printf("Opcao invalida");
	}
		else if (oper == 1)
		{
			res = somar(n1, n2);
			printf("O resultado da soma eh: %d", res);	
		}
		else if (oper == 2)
		{
			res = subtrair(n1, n2);
			printf("O resultado da subtracao eh: %d", res);	
		}
		else if (oper == 3)
		{
			res = multiplicar(n1, n2);
			printf("O resultado da multiplicacao eh: %d", res);	
		}
		else if (oper == 4)
		{
			res = dividir(n1, n2);
			printf("O resultado da divisao eh: %d", res);	
		}
		
		getch();
		
	return 0;
}

int somar(int v1, int v2)
{
		int res;
		res = v1 + v2;
		return (res);
}

int subtrair(int v1, int v2)
{
		int res;
		res = v1 - v2;
		return (res);
}
int multiplicar(int v1, int v2)
{
		int res;
		res = v1 * v2;
		return (res);
}
int dividir(int v1, int v2)
{
		int res;
		res = v1 / v2;
		return (res);
}
