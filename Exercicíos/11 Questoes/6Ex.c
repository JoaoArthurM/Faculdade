#include <stdio.h>
#include <math.h>

int main ()
{
  int a, b, c;
  int soma = 0;

  printf("Insira o valor de A: ");
  scanf("%d", &a);

  while ( a > 1 ){

    printf("Insira o valor de B: ");
    scanf("%d", &b);

    printf("Insira o valor de C: ");
    scanf("%d", &c);

    if ( b % a == 0){

      soma += b;

}

  if ( c % a == 0 ){

    soma += c;
}


  printf("Insira o valor de A: ");
  scanf("%d", &a);
}

  printf("%d\n", soma);

  return 0;
}
