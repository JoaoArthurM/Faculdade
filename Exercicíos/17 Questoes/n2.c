#include <stdio.h>
#include <math.h>

void main() 
{
    int idade;
    
        printf("Insira a idade do jogador: ");
        scanf("%i", &idade);

    if(idade <= 13)
    {
        printf("A categoria do jogador e INFANTIL");
    }
    if (idade >= 14 && idade <= 17)
    {

        printf("A categoria do jogador e JUVENIL");
    }
    else if (idade >= 18)
    {
        printf("A categoria do jogador e SENIOR");
    }
    
return 0;
}