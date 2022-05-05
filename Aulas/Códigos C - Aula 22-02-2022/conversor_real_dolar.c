#include <stdio.h>

int main(void)
{
    float valor_em_reais, valor_em_dolares;
    float cotacao_dolar = 5.4;

    printf("Digite o valor em reais a ser convertido:");
    scanf("%f", &valor_em_reais);

    valor_em_dolares = valor_em_reais / cotacao_dolar;

    printf("%.2f reais correspondem a %.2f dólares.", valor_em_reais, valor_em_dolares);
}