#include <stdio.h>
#include <math.h>

void main()
{
int distancia, combustivel, consumo_medio;

    printf("Insira a distancia: ");
    scanf("%i", &distancia);

    printf("Insira a quantidade de combustivel: ");
    scanf("%i", &combustivel);

consumo_medio = (combustivel + distancia)/2;

    printf("O consumo medio sera; %i litros", consumo_medio);


}