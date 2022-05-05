#include <stdio.h>
#include <math.h>

void main() 
{
int x;
int resultado;


printf("insira o valor de X: ");
scanf("%d", &x);

resultado = x % 2;

if (resultado == 0)
{
printf("O resultado e PAR",x);
}

else
{
printf("O resultado e IMPAR",x);
}

return 0;
}