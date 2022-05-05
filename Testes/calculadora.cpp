#include <stdio.h>

int main(void)
{
  int i;
    for(i = 0; i < 1;)
    {
       //variáveis
      float n1 = 0, n2 = 0, resultado = 0;
      char op = 'a', continuar = 'b';
       //código
      printf("Ensira a conta:\n");
      scanf("%f%c%f", &n1, &op, &n2);

      if (op == '+') {resultado = n1 + n2;};

      if (op == '-') {resultado = n1 - n2;};

      if (op == '*') {resultado = n1 * n2;};

      if (op == '/') {resultado = n1 / n2;};

      printf("\n%1.f\n", resultado);
//resultado
      printf("\ncontinuar?\n\ns = Sim\nn = Naum\n");
      scanf("\n%c", &continuar);
//repetição
      if(continuar == 's') {i = 0;}
      else {i = 1;};
      }

}
