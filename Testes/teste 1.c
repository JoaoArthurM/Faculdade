#include <stdio.h>
#include <math.h>

int main()
{
float media, soma_numero= 0;
int numero_par, numero, flag = 0, i = 0;

while(flag == 0)
{
printf("Digite um numero: ");
scanf("%d", &numero);

numero_par = numero%2;

if (numero_par == 0){
i += 1;
soma_numero += numero;
}


if(numero == 0){
flag = 1;
}

}
media = soma_numero/(i-1);
printf("A media e: %.2f", media);
}