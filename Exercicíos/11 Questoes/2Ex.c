#include <stdio.h>
#include <math.h>


int main ()
{
int x, y;


printf("Insira o valor de X: \n");
scanf("%d", &x);

printf("Insira o valor de Y: \n");
scanf("%d", &y);

if(x == 0 || y == 0)
{
  printf("Nao existe divisao por zero");
}

else
{
  printf("O resultado da divisao e: %d", x / y);
}

  return 0;
}
