#include <stdio.h>

int main(void)
{
    float numero, dobro;
    
    printf("Insira um número:");
    scanf("\n%f", &numero);
    
    dobro = 2*numero;

    printf("O dobro do número digitado é: %f\n", dobro);
}