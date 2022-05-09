#include <stdio.h>
#include <math.h>

int main(){

//VARIAVEIS DOS MENUS
  int menu1 = 0, menu2 = 0, menu2d = 0, menu3d = 0;

//INICIO (BEM VINDO)
  printf("------------------------------------------\n");
  printf("          BEM VINDO A CALCULADORA         \n");
  printf("------------------------------------------\n");
  printf("QUAL TIPO DE FIGURA DESEJA CALCULAR?:\n");
  printf("0. 2D\n");
  printf("1. 3D\n");
  printf("------------------------------------------\n");
  scanf("%d", &menu1);
  printf("------------------------------------------\n");

  //PRIMEIRO MENU
  if(menu1 == 0){
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
  }

  //SEGUNDO MENU
  else if(menu1 == 1){
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
  }

  return 0;
}