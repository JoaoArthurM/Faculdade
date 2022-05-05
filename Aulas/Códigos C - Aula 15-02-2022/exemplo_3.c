#include <stdio.h>

int main(void)
{
    float largura, comprimento, area;
    
    printf("Insira a largura da sala:");
    scanf("\n%f", &largura);
    printf("Insira o comprimento da sala:");
    scanf("\n%f", &comprimento);

    area = largura*comprimento;

    printf("A área da sala é: %2.f\n", area);
}