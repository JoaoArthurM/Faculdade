#include <stdio.h>
#include <math.h>

void main() 
{
float pi;
    pi=3,14;
float r;
float area_do_circulo;
    area_do_circulo=pi*(r*r);

printf("insira o valor de R:");
scanf("%d",&r);

if (r > 0)
printf("valor maior que 0");

else 
printf("valor menor que 0");

return 0;
}