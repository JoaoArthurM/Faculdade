#include "stdio.h"
#include "stdlib.h"

void main()
{
//VARIAVEIS
float renda, calculo_INSS, calculo_IMP, resultado, liquido;

printf("Digite sua renda mensal: ");
scanf("%f", &renda);

//CALCULANDO INSS
    if ( renda <= 1212)
{
calculo_INSS = renda * 0.75;
}
    else
    if ( renda >= 1212 && renda <= 2427.35)
{
calculo_INSS = renda * 0.09;
}
    else
    if ( renda >= 2427.35 && renda <= 3641.83)
{
calculo_INSS = renda * 0.12;
}
    else
{
calculo_INSS = renda * 0.14;
}

//CALCULANDO IMPOSTO RENDA
calculo_IMP = ( renda );

    if ( calculo_IMP <= 1903.98 )
{
resultado = 0;
}
    else
    if ( calculo_IMP >= 1903.98 && calculo_IMP <= 2826.65)
{
resultado = calculo_IMP * 0.075;
}
    else
    if ( calculo_IMP >= 2826.65 && calculo_IMP <= 3751.05 )
{
resultado = calculo_IMP * 0.15;
}
else
    if ( calculo_IMP >= 3751.05 && calculo_IMP <= 4664.68 )
{
resultado = calculo_IMP * 0.275;
}
//CALCULO.. .
liquido = renda - resultado - calculo_INSS;

//RESULTADOS
printf( "\nO Imposto INSS a ser aplicado e de: %.2f\n\n", calculo_INSS);

printf( "O Imposto IMP a ser aplicado com a deducao de dependentes e de: %.2f\n\n", resultado);

printf( "O Salario liquido a ser recebido e de: %.2f\n\n", liquido);

}

