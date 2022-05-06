#include <stdio.h>
#include <math.h>

int main(){
  int menu1 = 0, menu2 = 0, menu2d = 0, menu3d = 0;
  int lado1 = 0, lado2 = 0, lado3 = 0;

  printf("------------------------------------------\n");
  printf("          BEM VINDO A CALCULADORA         \n");
  printf("------------------------------------------\n");
  printf("QUAL TIPO DE FIGURA DESEJA CALCULAR?:\n");
  printf("0. 2D\n");
  printf("1. 3D\n");
  printf("------------------------------------------\n");
  scanf("%d", &menu1);
  printf("------------------------------------------\n");

  switch (menu1){
  case 0:
  printf("ESCOLHA QUAL FIGURA DESEJA CALCULAR:\n");
  printf("1. Quadrado\n");
  printf("2. Retangulo\n");
  printf("3. Circunferencia\n");
  printf("4. Triangulo\n");
  printf("5. Losango\n");
  printf("6. Paralelogramo\n");
  printf("------------------------------------------\n");
  scanf("%d", &menu2d);
  printf("------------------------------------------\n");

    switch (menu2d){
    case 1:
    printf("DESEJA CALCULAR A AREA OU O VOLUME?\n");
    printf("1. Area\n");
    printf("2. Volume\n");
    printf("------------------------------------------\n");
    scanf("%d", &menu2d);
    printf("------------------------------------------\n");

    switch (menu2d){
    case 1:
    printf("Insira os lados dos quadrado:\n");
    scanf("%d\n", &lado1);
    scanf("%d\n", &lado2);
    printf("A Area do quadro e: %d\n",lado1 * lado2);
    break;

    case 2:
    printf("Insira os lados dos quadrado:");
    scanf("%d\n", &lado1);
    scanf("%d\n", &lado2);
    printf("A Area do quadro e: %d\n", lado1*lado2*lado2);
    break;
    }
  }
  break;

  case 1:
  printf("ESCOLHA QUAL FIGURA DESEJA CALCULAR:\n");
  printf("1. Esfera\n");
  printf("2. Cilindro\n");
  printf("3. Piramide\n");
  printf("4. Cone\n");
  printf("5. Cubo\n");
  printf("6. Paralelepipedo\n");
  printf("------------------------------------------\n");
  scanf("%d", &menu3d);
  printf("------------------------------------------\n");
  switch (menu3d){


  break;
  }
  

  return 0;
}
}