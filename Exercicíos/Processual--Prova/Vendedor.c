#include <stdio.h>
#include <math.h>

void main ()
{
//VARIAVEIS
    int salario = 0, comissao_quatrok = 0, comissao_fullhd = 0, comissao = 0;
    int quatrok = 0, fullhd = 0;
    int salario_liquido = 0;
    int numero_id = 0;
    int inss = 0, imposto_renda = 0;

//DADOS DOS VENDEDORES

    printf("Insira o numero da sua inscricao: ");
    scanf("%i", &numero_id);

    printf("Insira o seu salario: ");
    scanf("%i", &salario);

    printf("Quantos televisores eram 4K? ");
    scanf("%i", &quatrok);

    printf("Quantos televisores eram FULL HD? ");
    scanf("%i", &fullhd);

//CALCULANDO COMISSÃO DAS TVS 4K
    if(comissao_quatrok <= 10){
      comissao_quatrok = quatrok * 50;
    }

    else{
      comissao_quatrok = quatrok * 5;
    }

//CALCULANDO COMISSÃO DAS TVS FULL HD
    if(comissao_fullhd <= 20){
      comissao_fullhd = fullhd * 20;
    }

    else{
      comissao_fullhd = fullhd * 2;
    }

//CALCULANDO COMISSÃO
  comissao = comissao_fullhd + comissao_quatrok;

//CALCULANDO INSS
  inss = salario * 0.08;

//CALCULANDO IMPOSTO DE RENDA
    if(salario + comissao - inss >= 500){
      imposto_renda = salario * 0.15;
    }
    else{
      imposto_renda = 0;
    }

//RESULTADO..

  printf("\nSeu numero de inscricao e: %i", numero_id);
  printf("\nSeu salario BRUTO e de: %i", salario);
  printf("\nSeu salario LIQUIDO e de: %i", comissao + salario - inss - imposto_renda);

  return 0;
}
