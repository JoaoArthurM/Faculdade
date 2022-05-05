#include <stdio.h>

int main(){

  int a;
  int par = 0 , impar = 0;
  int i;

  for(int i = 0; i <10; i++){
    scanf("%d", &a);

    if(a % 2 == 0){
      par++;
    }
      else{
        impar++;
        }
    }
  printf(" pares: %d impares: %d\n", par , impar);

  return 0;

}
