#include <stdio.h>

int main(void)
{
    float numerador, denominador, resultado;
    int flag = 0, escolha;

    while(flag == 0)
    {
        printf("Insira o numerador:");
        scanf("\n%f", &numerador);
        printf("Insira o denominador:");
        scanf("\n%f", &denominador);

        if(denominador == 0)
        {
            printf("Não é possível dividir por zero!\n");
            continue;
        }

        printf("O resultado da divisão é: %.2f\n", resultado);

        printf("Deseja fazer outro cálculo? (1 - Sim) - (2 - Não):");
        scanf("%d", &escolha);

        if(escolha == 2)
        {
            flag = 1;
        }
    }
}
