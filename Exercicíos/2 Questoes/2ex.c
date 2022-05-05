#include <stdio.h>
#include <math.h>

int main()
{
//VARIAVEIS

  int kwh = 0, kwhmes = 0, total_a_pagar = 0;
  int numero_consumidor = 0;
  int maior_consumo, menor_consumo, media_geral, o_total_do_consumo;
  char tipo_estabelecimento;

//ENTRADA & REPETIÇÃO

    printf("Insira o tipo de estabelecimento (RESIDENCIAL, COMERCIAL, INDUSTRIAL): ");
    scanf("%s", &tipo_estabelecimento);

    printf("Insira o valor do KWH na sua cidade (SEM VIRGULA) R$: ");
    scanf("%d", &kwh);
  
    printf("Insira quantos KWH foi gasto em sua residencia (SEM VIRGULA): ");
    scanf("%d", &kwhmes);

//CALCULANDO TOTAL A PAGAR

    total_a_pagar = kwh * kwhmes;

    printf("Total a pagar R$: %d", total_a_pagar);

   

    //printf("O Maior consumo e: %d",maior_consumo);
    //printf("O Menor consumo e: %d", menor_consumo);
  






  return 0;
}