#include <stdio.h>
#include <stdlib.h>


int main(){
	
	int num, mult, res, i;
	
	printf("\t\t\t\t\tTabuada Gabi\n\n");
	printf("\t\t\t\t\tDigite um numero: ");
	scanf("%d", &num);
	fflush(stdin);
	
	for(i=1; i<=10; i++){
		res = num * i;
		printf("\t\t\t\t\tO numero %d x %d = %d \n", num, i, res);
	}
	
}
