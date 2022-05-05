#include <stdio.h>

int main(void)
{
    float salario_bruto, salario_liquido, inss;

    printf("Insira o salário bruto para calcular o inss:");
    scanf("%f", &salario_bruto);

    if(salario_bruto <= 1212)
    {
        inss = salario_bruto*0.075;
    }
    else if(salario_bruto > 1212 && salario_bruto <= 2427.35)
    {
        inss = (salario_bruto*0.09) - 18.18;
    }
    else if(salario_bruto > 2427.35 && salario_bruto <= 3641.03)
    {
        inss = (salario_bruto*0.12) - 91;
    }
    else
    {
        inss = (salario_bruto*0.14) - 163.82;
    }

    //Essa linha calcula o salário líquido subtraindo o inss do 
    //salário bruto.
    salario_liquido = salario_bruto - inss;

    printf("O valor do desconto do INSS é de: %.2f\n", inss);
    printf("O valor do salário líquido é de: %.2f\n", salario_liquido);
}