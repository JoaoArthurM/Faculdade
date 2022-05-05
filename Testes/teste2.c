#include <stdio.h>

int main()
{
 int dia, mes, ano;

 printf("Insira o DIA do seu aniversario: ");
 scanf("%d", &dia);
 printf("Insira o MES do seu aniversario: ");
 scanf("%d", &mes);
 printf("Insira o ANO do seu aniversario: ");
 scanf("%d", &ano);

  printf("DATA: %d/%d/%d\n", dia, mes, ano);

  if(dia <= 31){
   printf("DIA VALIDO\n");
  }

  else{
    printf("DIA NEGADO\n");
  }

  if(mes <= 12){
   printf("MES VALIDO\n");
 }

 else{
    printf("MES NEGADO\n");
  }

  if (ano <= 2022){
   printf("ANO VALIDO\n");
 }

 else{
    printf("ANO NEGADO\n");
 }

return 0;
}