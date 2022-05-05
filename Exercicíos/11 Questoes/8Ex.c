#include <stdio.h>
#include <stdlib.h>

int main()
{
  float raio, area;
  char cod = 'c';

  while (cod != 'n'){
    printf("insira o valor do raio: ");
    scanf("%f", &raio);

    area = (raio * raio) * 3.14;
    printf("%.2f\n", area);

    printf("precione a tecla 'n' para parar: ");
    scanf(" %c", &cod);
    }

  return 0;
}
