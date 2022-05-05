#include <stdio.h>
#include <math.h>

void main()
{
char nome_do_aluno[30];
int nota_1, nota_, nota_3;
int resultado;

    printf("Insira o nome do aluno: ");
        scanf("%s", &nome_do_aluno);

    printf("Insira a nota 1: ");
        scanf("%i", &nota_1);

    printf("Insira a nota 2: ");
        scanf("%i", &nota_2);

    printf("Insira a nota 3: ");
        scanf("%i", &nota_3);

resultado = (nota_1 + nota_2 + nota_3)/3;

    printf("O nome do aluno e: %s",nome_do_aluno);
    printf("\nO resultado e: %i",resultado);

}
