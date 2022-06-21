#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

//Observação: O programa executa normalmente no DEV-C++

int main(){
	setlocale(LC_ALL, "Portuguese");
	int seg, min, hr, cont;
	
	system("Color 4E");
	
	
for(hr =0; hr < 24; hr++){
	printf("%d", hr);
	for(min = 0; min < 60; min ++){
		printf("%d", min);
		for(seg = 0; seg < 60; seg++){
			printf("%d", seg);
			system("cls");
			for(cont = 0; cont == 0; cont++){
				printf("\t\t\t\t\t----------Cronômetro Gabi----------\n");
				printf("\t\t\t\t\t\t %dhr-%dmin-%dseg\n", hr, min ,seg);
				printf("\t\t\t\t-----------------------------------------------\n");
				Sleep(1000);
			}
			
			if(seg == 60){
				seg = 00;
				min++;
				
			}
		}
		if(min == 60){
			min = 00;
			hr++;
		}
	}
	if(hr == 24){
		hr = 00;
	}
}

}
