#include <stdio.h>

int main()
{
    char dica [30] = "Filme de ao conhecido";
    int senhaFixa = 177;
    int senha = 0;

    printf("\nInsira a senha (dica: %s): ", dica);
    scanf("%d", &senha);

    if (senha == senhaFixa)
    {
        printf("** Parabens vc acertou a senha **");
    }
    else
    {
        printf("Vc errou a senha, tente novamente");
        main();
        return 0;
    }
}