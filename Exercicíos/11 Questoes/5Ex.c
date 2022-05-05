#include<stdio.h>
#include<math.h>

int main()
{
  int x, y = 0;
  int t = 0;

  printf("Digite o valor de X: ");
  scanf("%d", &x);

  while( x != 0 ){
    if( x % 2 == 0)
{
    y = y + x;
    t++;
}
    printf("Digite o valor de X: ");
    scanf("%d", &x);
}

  if (x == 0 || y == 0)

  {
    printf("A media e: %.i", y/t);
  }

  return 0;
}
