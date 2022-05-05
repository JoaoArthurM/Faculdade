#include <stdio.h>
#include <math.h>
//chamada Daniel Gonçalves
int main(void)
{
    float a, b, c, delta, x_1, x_2;

    printf("Insira o valor de a:");
    scanf("\n%f", &a);
    printf("Insira o valor de b:");
    scanf("\n%f", &b);
    printf("Insira o valor de c:");
    scanf("\n%f", &c);

    delta = pow(b,2) - 4*a*c;

    if(delta > 0)
    {
        x_1 = (- b - sqrt(delta))/(2*a);
        x_2 = (- b + sqrt(delta))/(2*a);
        printf("A equação possui duas raízes reais distintas!\n");
        printf("As raízes da equção são: x1 = %.2f e x2 = %.2f\n", x_1, x_2);
    }
    else if(delta == 0)
    {
        x_1 = (- b - sqrt(delta))/(2*a);
        printf("A equação possui duas raízes reais iguais!\n");
        printf("As raízes da equação são x1 = x2 = %.2f\n", x_1);
    }
    else
    {
        printf("Essa equação não possui raízes reais.\n");
    }
}