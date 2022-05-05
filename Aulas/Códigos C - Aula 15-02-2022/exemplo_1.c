#include <stdio.h>

int main(void)
{
    float numero1, numero2;

    printf("Insira o primeiro número:");
    scanf("\n%f", &numero1);
    printf("Insira o segundo número:");
    scanf("\n%f", &numero2);

    printf("O resultado da soma é: %f\n", numero1 + numero2);
}
