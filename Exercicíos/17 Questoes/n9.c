#include <stdio.h>
#include <math.h>

void main()
{
int g, t;
int velocidade;

    printf("Insira a velocidade da gravidade: ");
    scanf("%i", &g);

    printf("Insira o tempo: ");
    scanf("%i", &t);

velocidade = g * t;

printf("A velocidade da queda ao final e: %i", velocidade);


}
