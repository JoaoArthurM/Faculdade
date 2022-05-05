#include <stdio.h>

int main(void)
{
    float numero;
    int qtd_negativos = 0, cont = 0;

    while(cont < 5)
    {
        printf("Insira um valor:");
        scanf("\n%f", &numero);

        if(numero < 0)
        {
            qtd_negativos += 1;
        }

        cont += 1;
    }

    printf("Foram digitados %d números negativos.\n", qtd_negativos);
}