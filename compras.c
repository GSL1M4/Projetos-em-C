#include <stdio.h>
#include <stdlib.h>
#include <locale.h>




int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float din, troc, prec, reptroc;
	int prod, quant, perg;
	
		
	
	do{
	printf("Digite a opção do Produto desejado:\n");
	printf("1: Para Chocolate\n");
	printf("2: Para Biscoito\n");
	printf("3: Para Maçã\n");
	printf("4: Para Banana\n");
	printf("5: Para Desodorante\n");
	printf("6: Para Shampoo\n");
	printf("7: Para Hidratante\n");
	printf("8: Para Sabonete\n");
	printf("9: Para Leite\n");
	printf("10: Para Carne\n");
	printf("0: SAIR\n");
	
	if(prod == 0){
		
	}
	
	printf("Digite agora:\n");
	scanf("%d", &prod);
		if(prod == 0){
		break;
		}
	
	printf("Quanto você tem?\n");
	scanf("%f", &din);
	
	
	
	printf("Quantos Produtos quer levar?\n");
	scanf("%d", &quant);
	switch (prod){

			case 1:
				prec = 4.89;
				if(quant > 1 ){
					prec = prec * quant;
				}
				troc = din - prec;		
			break;	
			case 2:
				prec = 2.30;
				if(quant > 1 ){
					prec = prec * quant;
				}
				troc = din - prec;			
			break;
			case 3:
				prec = 7.15;
				if(quant > 1 ){
					prec = prec * quant;
				}
				troc = din - prec;			
			break;
			case 4:
				prec = 2.99;
				if(quant > 1 ){
					prec = prec * quant;
				}
				troc = din - prec;			
			break;
			case 5:
				prec = 14.67;
				if(quant > 1 ){
					prec = prec * quant;
				}
				troc = din - prec;			
			break;
			case 6:
				prec = 13.22;
				if(quant > 1 ){
					prec = prec * quant;
				}
				troc = din - prec;			
			break;
			case 7:
				prec = 9.75;
				if(quant > 1 ){
					prec = prec * quant;
				}
				troc = din - prec;			
			break;
			case 8:
				prec = 1.98;
				if(quant > 1 ){
					prec = prec * quant;
				}
				troc = din - prec;			
			break;
			case 9:
				prec = 5.19;
				if(quant > 1 ){
					prec = prec * quant;
				}
				troc = din - prec;			
			break;
			case 10:
				prec = 21.85;
				if(quant > 1 ){
					prec = prec * quant;
				}
				troc = din - prec;
			break;
	}
	
	printf("Você deseja levar mais algum Produto?\n");
	printf("1:Para SIM\n 2:Para NÃO\n");
	scanf("%d", &perg);
		
	if(perg == 1){
			printf("Digite a opção do Produto desejado:\n");
		printf("1: Para Chocolate\n");
		printf("2: Para Biscoito\n");
		printf("3: Para Maçã\n");
		printf("4: Para Banana\n");
		printf("5: Para Desodorante\n");
		printf("6: Para Shampoo\n");
		printf("7: Para Hidratante\n");
		printf("8: Para Sabonete\n");
		printf("9: Para Leite\n");
		printf("10: Para Carne\n");
		printf("0: SAIR\n");
	
		printf("Digite agora:\n");
		scanf("%d", &prod);
		
		if(prod == 0){
			break;
		}
		
		printf("Quantos Produtos quer levar?\n");
		scanf("%d", &quant);
	
	
		switch (prod){
			case 1:
				prec = 4.89;
				if(quant > 1 ){
					prec = prec * quant;
				}
				reptroc = troc - prec;
				printf("Seu troco éh: %.2fReais\n", reptroc);	
			break;	
			case 2:
				prec = 2.30;
				if(quant > 1 ){
					prec = prec * quant;
				}
				reptroc = troc - prec;
				printf("Seu troco éh: %.2fReais\n", reptroc);			
			break;
			case 3:
				prec = 7.15;
				if(quant > 1 ){
					prec = prec * quant;
				}
				reptroc = troc - prec;
				printf("Seu troco éh: %.2fReais\n", reptroc);		
			break;
			case 4:
				prec = 2.99;
				if(quant > 1 ){
					prec = prec * quant;
				}
				reptroc = troc - prec;
				printf("Seu troco éh: %.2fReais\n", reptroc);		
			break;
			case 5:
				prec = 14.67;
				if(quant > 1 ){
					prec = prec * quant;
				}
				reptroc = troc - prec;
				printf("Seu troco éh: %.2fReais\n", reptroc);			
			break;
			case 6:
				prec = 13.22;
				if(quant > 1 ){
					prec = prec * quant;
				}
				reptroc = troc - prec;
				printf("Seu troco éh: %.2fReais\n", reptroc);			
			break;
			case 7:
				prec = 9.75;
				if(quant > 1 ){
					prec = prec * quant;
				}
				reptroc = troc - prec;
				printf("Seu troco éh: %.2fReais\n", reptroc);			
			break;
			case 8:
				prec = 1.98;
				if(quant > 1 ){
					prec = prec * quant;
				}
				reptroc = troc - prec;
				printf("Seu troco éh: %.2fReais\n", reptroc);			
			break;
			case 9:
				prec = 5.19;
				if(quant > 1 ){
					prec = prec * quant;
				}
				reptroc = troc - prec;
				printf("Seu troco éh: %.2fReais\n", reptroc);			
			break;
			case 10:
				prec = 21.85;
				if(quant > 1 ){
					prec = prec * quant;
				}
				reptroc = troc - prec;
				printf("Seu troco éh: %.2fReais\n", reptroc);
			break;
	}
	} else if(perg == 2) {
		printf("Seu troco é de %.2fReais.\n", troc);
		printf("Muito Obrigado pela Preferência!");
	} else if (perg == 0 || perg > 2){
		printf("Opção Inválida\n");
	}

	

}while(perg == 1);
}
