#include <stdio.h>
#include <math.h>

void main()
{

float salario;
float porcentagem;
float resultado;
float salario_final;

    printf("Insira seu salario: ");
    scanf("%f", &salario);

    printf("Insira a porcentagem: ");
    scanf("%f", &porcentagem);

resultado =  salario * (porcentagem/100);
salario_final = resultado + salario;

    printf("O valor do salario e: %.2f", salario_final);


}