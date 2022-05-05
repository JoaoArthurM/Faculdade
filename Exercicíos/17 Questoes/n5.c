#include <stdio.h>
#include <math.h>

void main() 
{
    int a,b,c;
    int soma;
    int resultado;

//Fazendo leitura dos valores de entrada:

    printf("coloque o valor A: ");
    scanf("%d",&a);

    printf("coloque o valor B: ");
    scanf("%d",&b);

    printf("coloque o valor C: ");
    scanf("%d",&c);

// Calculando:

    soma=(a+b+c)/3;

    printf("a media e: %d",soma);

return 0;
}