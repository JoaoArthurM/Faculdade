#include <stdio.h>
#include <math.h>

//Protótipo da função
float area_circunferencia(float raio);

int main()
{
    float raio = 0, area = 0;
    
    printf("Insira o raio: ");
    scanf("\n%f", &raio);
    
    area = area_circunferencia(raio);
    
    printf("A área é: %.2f\n", area);
}

//Implementação da função
float area_circunferencia(float raio)
{
   float area = 0;
   
   area = M_PI*pow(raio, 2);
   
   return area;
}