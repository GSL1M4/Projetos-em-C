#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int seg, min, hr, cont;
	
	
for(hr =0; hr < 24; hr++){
	printf("%d", hr);
	fflush(stdin);
	for(min = 0; min < 60; min ++){
		printf("%d", min);
		fflush(stdin);
		for(seg = 0; seg < 60; seg++){
			printf("%d", seg);
			fflush(stdin);
			system("cls");
			for(cont = 0; cont == 0; cont++){
				printf("\t\t\t %dhr %dmin %dseg", hr, min ,seg);
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
