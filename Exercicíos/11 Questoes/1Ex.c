#include <stdio.h>

int main(void)
{
    int senha, senha_padrao = 12345;

    for(int i = 0; i < 3; i++)
    {
        printf("Insira a senha:");
        scanf("\n%d", &senha);

        if(senha != senha_padrao)
        {
            if(i == 2)
            {
                printf("Senha incorreta digitada pela terceira vez.\n");
                printf("Sua senha foi bloqueada!\n");
            }
            else
            {
                printf("Senha incorreta! Você ainda possui %d tentativas.\n", (3 - (i + 1)));
            }
        }
        else
        {
            printf("Senha correta!\n");
            break;
        }
    }
}