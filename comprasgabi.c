#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int prod, mais, quant;
	float din, prec, calc, total;
	
	printf("Quanto você tem?\n");
	scanf("%f", &din);
	fflush(stdin);
	
	
		printf("Digite a opção desejada:\n");
		printf("1: Shampoo\n");
		printf("2: Hidratante\n");
		printf("3: Sabonete\n");
		printf("4: Desodorante\n");
		printf("5: Tintura\n");
		printf("6: Amaciante\n");
		printf("7: Bom AR\n");
   	 	printf("9: Digitar Novamente\n");
		printf("0: SAIR\n");
		scanf("%d", &prod);
		fflush(stdin);
		
		if(prod == 0){
			exit(-1);
		} else if(prod == 9){
      			return main();
   		}
		
		printf("Qual a quantidade?\n");
		scanf("%d", &quant);
    		fflush(stdin);
		
		if(prod == 1){
				prec = 14.79;
				if(quant > 1){
					prec = quant * prec;
          			calc = din - prec;
					printf("O seu troco é: %.2f Reais.\n", calc);
				}else{
					calc = din - prec;
					printf("O seu troco é: %.2f Reais.\n", calc);
				}
				}
			else if(prod == 2){
					prec = 7.45;
				if(quant > 1){
					prec = quant * prec;
          			calc = din - prec;
					printf("O seu troco é: %.2f Reais.\n", calc);
				}else{
					calc = din - prec;
					printf("O seu troco é: %.2f Reais.\n", calc);
				}
				}
			else if(prod == 3){
					prec = 2.54;
				if(quant > 1){
					prec = quant * prec;
          			calc = din - prec;
					printf("O seu troco é: %.2f Reais.\n", calc);
				}else{
					calc = din - prec;
					printf("O seu troco é: %.2f Reais.\n", calc);
				}
				}
			else if(prod == 4){
					prec = 17.25;
					if(quant > 1){
					prec = quant * prec;
          			calc = din - prec;
					printf("O seu troco é: %.2f Reais.\n", calc);
				}else{
					calc = din - prec;
					printf("O seu troco é: %.2f Reais.\n", calc);
				}
				}
			else if(prod == 5){
					prec = 23.50;
				if(quant > 1){
					prec = quant * prec;
          			calc = din - prec;
					printf("O seu troco é: %.2f Reais.\n", calc);
				}else{
					calc = din - prec;
					printf("O seu troco é: %.2f Reais.\n", calc);
				}
				}
			else if(prod == 6){
					prec = 13.90;
				if(quant > 1){
					prec = quant * prec;
          			calc = din - prec;
					printf("O seu troco é: %.2f Reais.\n", calc);
				}else{
					calc = din - prec;
					printf("O seu troco é: %.2f Reais.\n", calc);
				}
				}
			else if(prod == 7){
					prec = 16.35;
				if(quant > 1){
					prec = quant * prec;
          			calc = din - prec;
					printf("O seu troco é: %.2f Reais.\n", calc);
				}else{
					calc = din - prec;
					printf("O seu troco é: %.2f Reais.\n", calc);
				}
				}
	
			printf("Deseja Levar mais algum produto?:\n");
			printf("1: SIM\n");
			printf("2: NÃO\n");
			scanf("%d", &mais);
			fflush(stdin);
		
			if(mais == 1){
				return main();
			} else if(mais == 2){
			 	printf("Obrigado pela preferencia!\n");
			} else if(mais != 1 && mais !=2){
				exit(-1);
			}
			
}
