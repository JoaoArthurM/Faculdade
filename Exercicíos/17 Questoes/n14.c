#include <stdio.h>
#include <math.h>

void main()
{
int x;

    printf("Coloque o valor: ");
    scanf("%i", &x);

if (x > 100 && x < 200)
{
printf("parabens!!! seu numero esta entre 100-200. %i", x);
}

else 
{
printf("foi mal");
}
}