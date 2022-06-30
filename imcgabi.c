#include <stdio.h>
#include <locale.h>

//OBSERVAÇÃO COLOCAR PONTO EM ALTURA PARA RESULTADO DAR EXATO!
//Pois a mesma é do tipo float!

int main() {
  setlocale(LC_ALL, "Portuguese");
  float alt, imc;
  int pes;

  printf("Qual é a sua altura: \n");
  scanf("%f", &alt);
  printf("Qual é o seu peso: \n");
  scanf("%d", &pes);

  imc = alt * alt;
  imc = pes / imc;


  if(imc <= 18.4)
    printf("O seu IMC é %f, e voçê esta abaixo do                   Peso\n", imc);
    else if(imc >=18.5 && imc <=24.9)
      printf("O seu IMC é %.1f, e o seu Peso está                     normal\n", imc);
    else if(imc >= 25 && imc <= 29.9)
      printf("O seu IMC é %.1f, SobrePESO\n", imc);
    else if(imc >= 30 && imc <= 34.9)
      printf("O seu IMC é %.1f, Obesidade grau 1\n", imc);
    else if(imc >= 35 && imc <= 39.9)
      printf("O seu IMC é %.1f, Obesidade grau 2\n", imc);
    else if(imc >= 40)
      printf("O seu IMC é %.1f, Obesidade grau 3\n", imc);
}
