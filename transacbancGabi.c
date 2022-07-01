#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float deposito, saque, saldo= 375.50;
	int opc;
	
	printf("Transação Bancária\n");
	printf("Digite a opção Desejada:\n");
	printf("1:Deposito\n");
	printf("2:Saque\n");
	printf("3:Ver o Saldo total\n");
	scanf("%d", &opc);
	fflush(stdin);
	
	
	
	switch(opc){
		case 1:
			printf("Qual valor vc deseja depositar?\n");
			scanf("%f", &deposito);
			fflush(stdin);
			
			saldo += deposito;
			printf("O valor de %.2f Reais foi depositado em sua conta\n", deposito);
			printf("Seu novo saldo é de %.2f reais\n", saldo);
			break;
			
		case 2:
			printf("Qual valor vc deseja sacar?\n");
			scanf("%f", &saque);
			fflush(stdin);
			
				if(saque > saldo){
					printf("Saldo Insuficiente\n");
				}else{
					saldo -= saque;
					printf("O valor de %.2f Reais foi sacado de sua conta\n", saque);
					printf("Seu novo saldo é de %.2f reais\n", saldo);
				}
				
			break;
			
		case 3:
			printf("Seu saldo é de %.2f Reais\n", saldo);
			break;
		
		default: ("Opção Inválida");
	}
	
	
}

