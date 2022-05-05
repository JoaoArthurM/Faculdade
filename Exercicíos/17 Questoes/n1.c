#include <stdio.h>
#include <math.h>

int main()
{
    float valor = 0.25;
    float folhas = 0;
    float valor_pagar = 0;

    printf("Insira o valor de folhas: ");
    scanf("%f", &folhas);

    if (folhas > 100)
    {
        valor = 0.20;
    }

    valor_pagar = folhas * valor;

    printf("O valor total sera: %.2f (-%.2f/folha)", valor_pagar, valor);

return 0;
}
